/*
 * XREFs of RtlDelete @ 0x140359960
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14029FA64 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x14029FE0C (FsRtlRemoveNodeFromTunnel.c)
 *     RtlDeleteElementGenericTable @ 0x1402B8D50 (RtlDeleteElementGenericTable.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140358CEC (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140359208 (FsRtlFastUnlockSingleShared.c)
 *     RtlRemoveUnicodePrefix @ 0x1406BA500 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x140911F00 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x1402A0094 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x1402A0200 (RtlSubtreePredecessor.c)
 *     RtlSplay @ 0x140359770 (RtlSplay.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx

  result = Links->LeftChild;
  if ( result )
  {
    if ( Links->RightChild )
    {
      v6 = RtlSubtreePredecessor(Links);
      SwapSplayLinks(v6, Links);
      result = Links->LeftChild;
    }
    if ( result )
      goto LABEL_3;
  }
  result = Links->RightChild;
  if ( result )
  {
LABEL_3:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    v7 = 8LL;
    if ( Parent->LeftChild != Links )
      v7 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
    v4 = Links->Parent;
    result->Parent = Links->Parent;
  }
  else
  {
    v4 = Links->Parent;
    if ( Links->Parent == Links )
      return 0LL;
    v5 = 8LL;
    if ( v4->LeftChild != Links )
      v5 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v5) = 0LL;
  }
  return RtlSplay(v4);
}
