//
//  StartController.h
//  Four
//
//  Created by 王选易 on 14-5-2.
//
//

#ifndef __Four__StartController__
#define __Four__StartController__

#include "cocos2d.h"

using namespace cocos2d;

class StartController : public CCLayer {
    
public:
    bool init();
    CREATE_FUNC(StartController);
    
    // 进行人人对战
    void onH2H();
    // 进行人机对战
    void onH2C();
};



#endif /* defined(__Four__StartController__) */