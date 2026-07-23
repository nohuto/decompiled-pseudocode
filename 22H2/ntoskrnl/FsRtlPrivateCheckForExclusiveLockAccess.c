/*
 * XREFs of FsRtlPrivateCheckForExclusiveLockAccess @ 0x1403052A4
 * Callers:
 *     FsRtlPrivateLock @ 0x1402D8B40 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402D9C10 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x1402D9F50 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14030540C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1404EF634 (FsRtlFindFirstOverlapInNode.c)
 */

char __fastcall FsRtlPrivateCheckForExclusiveLockAccess(__int64 a1, unsigned __int64 *a2)
{
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rax
  __int64 FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v7; // rax
  __int64 v8; // rax
  __int64 FirstOverlappingExclusiveNode; // rax
  __int64 v11; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Links = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v5, a2, a2 + 5, &Links, 0LL);
    if ( FirstOverlappingSharedNode )
    {
      v11 = *(_BYTE *)(FirstOverlappingSharedNode - 16)
          ? FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a2 + 5)
          : *(_QWORD *)(FirstOverlappingSharedNode - 24);
      if ( v11 && (a2[1] || *(_QWORD *)(v11 + 16)) )
        return 0;
    }
    v4 = Links;
    if ( Links )
    {
      v7 = RtlSplay(Links);
      v4 = 0LL;
      *(_QWORD *)(a1 + 8) = v7;
      Links = 0LL;
    }
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    FirstOverlappingExclusiveNode = FsRtlFindFirstOverlappingExclusiveNode(
                                      v8,
                                      (_DWORD)a2,
                                      (int)a2 + 40,
                                      (unsigned int)&Links,
                                      0LL);
    if ( !FirstOverlappingExclusiveNode || !a2[1] && !*(_QWORD *)(FirstOverlappingExclusiveNode + 32) )
    {
      v4 = Links;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  if ( v4 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v4);
  return 1;
}
