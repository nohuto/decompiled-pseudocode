bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 FirstOverlappingSharedNode; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  Links = 0LL;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 *(_QWORD *)(a1 + 8),
                                 a2,
                                 a3,
                                 (unsigned int)&Links,
                                 0LL);
  if ( Links )
    *(_QWORD *)(a1 + 8) = RtlSplay(Links);
  if ( !FirstOverlappingSharedNode )
    return 1;
  if ( *(_BYTE *)(FirstOverlappingSharedNode - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a3) == 0;
  return 0;
}
