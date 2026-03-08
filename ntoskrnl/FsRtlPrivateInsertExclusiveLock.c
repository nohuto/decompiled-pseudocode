/*
 * XREFs of FsRtlPrivateInsertExclusiveLock @ 0x1402C1C84
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x1402C247C (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x1402C1970 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1402C3018 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

PRTL_SPLAY_LINKS __fastcall FsRtlPrivateInsertExclusiveLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  PRTL_SPLAY_LINKS result; // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF
  RTL_SPLAY_LINKS *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  result = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                               *(_QWORD *)(a1 + 16),
                               (int)a2 + 24,
                               (int)a2 + 64,
                               (unsigned int)&v6,
                               (__int64)&v5);
  a2->LeftChild = 0LL;
  a2->RightChild = 0LL;
  a2->Parent = a2;
  if ( !result )
  {
    result = v6;
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 16) = a2;
      return result;
    }
    if ( !v5 )
      goto LABEL_5;
LABEL_7:
    result->LeftChild = a2;
    goto LABEL_6;
  }
  if ( result->RightChild )
  {
    if ( result->LeftChild )
      result = RtlRealSuccessor(result);
    goto LABEL_7;
  }
LABEL_5:
  result->RightChild = a2;
LABEL_6:
  a2->Parent = result;
  return result;
}
