#include "drawPlayer.h"

void DrawPlayer::drawPlayer()
{
    col.clear();
    // printf("VTX SIZE %d\n", stlVtx.size());        
    for(int i=0; i<stlVtx.size()/3; i++)
    {
        if (i>116000) // hat color
        {
            col.push_back(1);
            col.push_back(0.3);
            col.push_back(0.3);
            col.push_back(1);
        }
        else if(i>111000) //right foot color
        {
            col.push_back(1);
            col.push_back(0.55);
            col.push_back(0.1);
            col.push_back(1);
        }
        else if(i>110000) //pocket
        {
            col.push_back(0.4);
            col.push_back(0.6);
            col.push_back(1);
            col.push_back(1);
        }
        else if(i>95000) //sweater
        {
            col.push_back(0);
            col.push_back(0.4);
            col.push_back(0.13);
            col.push_back(1);
        }
        else if(i>80000) //eye
        {
            col.push_back(0);
            col.push_back(0);
            col.push_back(0);
            col.push_back(1);
        }
        else if(i>35000) //skin
        {
            col.push_back(1);
            col.push_back(0.9);
            col.push_back(0.8);
            col.push_back(1);
        }
        else if(i>30000) //left foot
        {
            col.push_back(1);
            col.push_back(0.55);
            col.push_back(0.1);
            col.push_back(1);
        }
        else if(i<1500) //mouth
        {
            col.push_back(1);
            col.push_back(0);
            col.push_back(0);
            col.push_back(1);
        }
        else // jeans
        {
            col.push_back(0);
            col.push_back(0.48);
            col.push_back(0.8);
            col.push_back(1);
        }
    }
    
    glVertexPointer(3,GL_FLOAT,0,stlVtx.data());
    glNormalPointer(GL_FLOAT,0,stlNom.data());
    glColorPointer(4,GL_FLOAT,0,col.data());
    glDrawArrays(GL_TRIANGLES,0,stlVtx.size()/3-5392);
}

DrawPlayer::DrawPlayer(GamePlayer &player):stlVtx(player.getVtx()), stlNom(player.getNom())
{
}
DrawPlayer::~DrawPlayer()
{

}


float DrawPlayer::getWidthPlayerX()
{
    return widthPlayerX;
}
float DrawPlayer::getWidthPlayerY()
{
    return widthPlayerY;
}
float DrawPlayer::getHeightPlayer()
{
    return heightPlayer;
}