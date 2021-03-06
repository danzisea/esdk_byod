/******************************************************************************

                  版权所有 (C), 2001-2014, 华为技术有限公司

 ******************************************************************************
  文 件 名   : tools_hashstream.h
  版 本 号   : 初稿
  作    者   : zhangyantao 00103873
  生成日期   : 2014年7月8日
  最近修改   :
  功能描述   : 
  函数列表   :

  修改历史   :
  1.日    期   : 2014年7月8日
    作    者   : zhangyantao 00103873
    修改内容   : 创建文件

******************************************************************************/
#ifndef __TOOLS_HASH_STREAM_H__
#define __TOOLS_HASH_STREAM_H__

/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/

#include "tools_common.h"
#include "tools_hash.h"

#ifdef __cplusplus
extern "C" {
#endif

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部结构定义                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 函数声明                                     *
 *----------------------------------------------*/

ULONG Tools_HashStream_FromHash(HASH_S* pstHash, CHAR **ppcHashStream);


ULONG Tools_HashStream_ToHash(CHAR *pcHashStream, HASH_S **ppstHash);




#ifdef __cplusplus
}
#endif

#endif


