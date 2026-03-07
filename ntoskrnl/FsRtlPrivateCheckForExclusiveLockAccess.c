char __fastcall FsRtlPrivateCheckForExclusiveLockAccess(__int64 a1, unsigned __int64 *a2)
{
  RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rax
  __int64 FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v7; // rax
  _QWORD *v8; // rax
  _QWORD *FirstOverlappingExclusiveNode; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Links = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v5, a2, a2 + 5, &Links, 0LL);
    if ( FirstOverlappingSharedNode )
    {
      v11 = (_QWORD *)(FirstOverlappingSharedNode - 24);
      v12 = *(_BYTE *)(FirstOverlappingSharedNode - 24 + 8) ? FsRtlFindFirstOverlapInNode(v11, a2, a2 + 5) : *v11;
      if ( v12 && (a2[1] || *(_QWORD *)(v12 + 16)) )
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
  v8 = *(_QWORD **)(a1 + 16);
  if ( v8 )
  {
    FirstOverlappingExclusiveNode = FsRtlFindFirstOverlappingExclusiveNode(v8, a2, a2 + 5, &Links, 0LL);
    if ( !FirstOverlappingExclusiveNode || !a2[1] && !FirstOverlappingExclusiveNode[4] )
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
