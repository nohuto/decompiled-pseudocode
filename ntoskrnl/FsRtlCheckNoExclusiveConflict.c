/*
 * XREFs of FsRtlCheckNoExclusiveConflict @ 0x140200C64
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x1402C8110 (FsRtlFastCheckLockForWrite.c)
 *     FsRtlFastCheckLockForRead @ 0x1402C8270 (FsRtlFastCheckLockForRead.c)
 * Callees:
 *     RtlRealSuccessor @ 0x1402C1970 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1402C2B50 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1402C3018 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

char __fastcall FsRtlCheckNoExclusiveConflict(
        __int64 a1,
        _RTL_SPLAY_LINKS **a2,
        _RTL_SPLAY_LINKS **a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // bl
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // r9
  _RTL_SPLAY_LINKS *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  PRTL_SPLAY_LINKS Links; // [rsp+60h] [rbp+8h] BYREF

  Links = 0LL;
  v10 = 1;
  FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                      *(_QWORD *)(a1 + 16),
                                                      (_DWORD)a2,
                                                      (_DWORD)a3,
                                                      (unsigned int)&Links,
                                                      0LL);
  if ( FirstOverlappingExclusiveNode )
  {
    v13 = *a3;
    v14 = a6;
    v15 = a5;
    while ( v13 >= FirstOverlappingExclusiveNode[1].Parent )
    {
      if ( *a2 <= FirstOverlappingExclusiveNode[2].RightChild
        && (FirstOverlappingExclusiveNode[2].Parent != (_RTL_SPLAY_LINKS *)v15
         || FirstOverlappingExclusiveNode[2].LeftChild != (_RTL_SPLAY_LINKS *)v14
         || HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) != a4) )
      {
        v10 = 0;
        break;
      }
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( !FirstOverlappingExclusiveNode )
        break;
    }
  }
  if ( Links )
    *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  return v10;
}
