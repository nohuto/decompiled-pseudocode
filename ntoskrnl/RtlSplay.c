/*
 * XREFs of RtlSplay @ 0x1402C2B50
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x140200C64 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x140200DCC (FsRtlCheckNoSharedConflict.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C255C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 *     RtlLookupElementGenericTable @ 0x1402C2820 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x1402C2940 (RtlDelete.c)
 *     RtlInsertElementGenericTableFull @ 0x1402C2A50 (RtlInsertElementGenericTableFull.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402C30F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlEnumerateGenericTable @ 0x1403B0050 (RtlEnumerateGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x1405AC0D0 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x1407520F0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140752230 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x1409B7AF0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1409B7BF0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // rax
  RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v4; // r8
  _RTL_SPLAY_LINKS *v5; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS **v9; // r8
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS **v12; // r8
  _RTL_SPLAY_LINKS *v13; // r8
  _RTL_SPLAY_LINKS *v14; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v17; // rdx

  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent == i )
      {
        RightChild = Links->RightChild;
        i->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = i;
        Links->RightChild = i;
        i->Parent = Links;
        Links->Parent = Links;
      }
      else if ( Parent->LeftChild == i )
      {
        v4 = Links->RightChild;
        i->LeftChild = v4;
        if ( v4 )
          v4->Parent = i;
        v5 = i->RightChild;
        Parent->LeftChild = v5;
        if ( v5 )
          v5->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_LeftChild = &Parent->Parent->LeftChild;
          if ( *p_LeftChild != Parent )
            p_LeftChild = &Parent->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = i;
        i->Parent = Links;
        i->RightChild = Parent;
        Parent->Parent = i;
      }
      else
      {
        v13 = Links->LeftChild;
        Parent->RightChild = v13;
        if ( v13 )
          v13->Parent = Parent;
        v14 = Links->RightChild;
        i->LeftChild = v14;
        if ( v14 )
          v14->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_RightChild = &Parent->Parent->LeftChild;
          if ( *p_RightChild != Parent )
            p_RightChild = &Parent->Parent->RightChild;
          *p_RightChild = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
      }
    }
    else if ( Parent == i )
    {
      v17 = Links->LeftChild;
      i->RightChild = v17;
      if ( v17 )
        v17->Parent = i;
      Links->LeftChild = i;
      i->Parent = Links;
      Links->Parent = Links;
    }
    else if ( Parent->RightChild == i )
    {
      Parent->RightChild = LeftChild;
      if ( LeftChild )
        LeftChild->Parent = Parent;
      v8 = Links->LeftChild;
      i->RightChild = v8;
      if ( v8 )
        v8->Parent = i;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v9 = &Parent->Parent->LeftChild;
        if ( *v9 != Parent )
          v9 = &Parent->Parent->RightChild;
        *v9 = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
    }
    else
    {
      v10 = Links->LeftChild;
      i->RightChild = v10;
      if ( v10 )
        v10->Parent = i;
      v11 = Links->RightChild;
      Parent->LeftChild = v11;
      if ( v11 )
        v11->Parent = Parent;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v12 = &Parent->Parent->LeftChild;
        if ( *v12 != Parent )
          v12 = &Parent->Parent->RightChild;
        *v12 = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
  }
  return Links;
}
