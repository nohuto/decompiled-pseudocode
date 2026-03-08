/*
 * XREFs of ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1800F346C
 * Callers:
 *     ?Channel_SetDescription@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x1800F3428 (-Channel_SetDescription@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@D@std@@$0A@@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F34D4 (--$-4U-$default_delete@$$BY0A@D@std@@$0A@@-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@.c)
 *     ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x1800F350C (--$make_unique@$$BY0A@D$0A@@std@@YA-AV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@0@_K.c)
 */

void __fastcall CChannelContext::SetOwnerProcessName(CChannelContext *this, const char *a2, int a3)
{
  void **v4; // rdi
  size_t v5; // rbx
  __int64 v6; // rax
  void *lpMem; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void **)((char *)this + 24);
  v5 = (unsigned int)(a3 + 1);
  v6 = std::make_unique<char [0],0>(&lpMem, v5);
  std::unique_ptr<char [0]>::operator=<std::default_delete<char [0]>,0>(v4, v6);
  if ( lpMem )
    operator delete(lpMem);
  memcpy_0(*v4, a2, v5);
}
