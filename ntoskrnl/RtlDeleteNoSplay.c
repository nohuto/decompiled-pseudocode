/*
 * XREFs of RtlDeleteNoSplay @ 0x1402C1BB0
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x1402C1A0C (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlUninitializeFileLock @ 0x1402FFA90 (FsRtlUninitializeFileLock.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x1402C2E10 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1402C2E38 (SwapSplayLinks.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *v5; // rax
  __int64 v6; // rdx
  _RTL_SPLAY_LINKS *Parent; // rax
  __int64 v8; // rdx
  RTL_SPLAY_LINKS *v9; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v9 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v9;
    SwapSplayLinks(v9, Links);
  }
  LeftChild = Links->LeftChild;
  if ( LeftChild || (LeftChild = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      *Root = LeftChild;
    }
    else
    {
      v8 = 8LL;
      if ( Parent->LeftChild != Links )
        v8 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v8) = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
  }
  else
  {
    v5 = Links->Parent;
    if ( Links->Parent == Links )
    {
      *Root = 0LL;
    }
    else
    {
      v6 = 8LL;
      if ( v5->LeftChild != Links )
        v6 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v5->Parent + v6) = 0LL;
    }
  }
}
