/*
 * XREFs of RtlSplay @ 0x1402D9F50
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x1402D9CF8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402D9E4C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlLookupElementGenericTable @ 0x1402D9ED0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x1402DA140 (RtlDelete.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1403052A4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlInsertElementGenericTableFull @ 0x140310570 (RtlInsertElementGenericTableFull.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036B5E8 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14036C1D0 (FsRtlCheckNoSharedConflict.c)
 *     RtlEnumerateGenericTable @ 0x140381AD0 (RtlEnumerateGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x14058BBD0 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x140677BB0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140677D10 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x140911D30 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140911E30 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v6; // rdx
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS *v9; // r8
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *v13; // r8
  _RTL_SPLAY_LINKS *v14; // r8
  _RTL_SPLAY_LINKS **v15; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS **v17; // r8

  while ( 1 )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
      return Links;
    LeftChild = Parent->LeftChild;
    v4 = Parent->Parent;
    if ( LeftChild == Links )
    {
      if ( v4 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
        goto LABEL_8;
      }
      if ( v4->LeftChild == Parent )
      {
        v7 = Links->RightChild;
        Parent->LeftChild = v7;
        if ( v7 )
          v7->Parent = Parent;
        v8 = Parent->RightChild;
        v4->LeftChild = v8;
        if ( v8 )
          v8->Parent = v4;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          p_LeftChild = &v4->Parent->LeftChild;
          if ( *p_LeftChild != v4 )
            p_LeftChild = &v4->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v4;
        goto LABEL_21;
      }
      v10 = Links->LeftChild;
      v4->RightChild = v10;
      if ( v10 )
        v10->Parent = v4;
      v11 = Links->RightChild;
      Parent->LeftChild = v11;
      if ( v11 )
        v11->Parent = Parent;
      if ( v4->Parent == v4 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v4->Parent;
        p_RightChild = &v4->Parent->LeftChild;
        if ( *p_RightChild != v4 )
          p_RightChild = &v4->Parent->RightChild;
        *p_RightChild = Links;
      }
      Links->LeftChild = v4;
      v4->Parent = Links;
      Links->RightChild = Parent;
      Parent->Parent = Links;
    }
    else if ( v4 == Parent )
    {
      v6 = Links->LeftChild;
      Parent->RightChild = v6;
      if ( v6 )
        v6->Parent = Parent;
      Links->LeftChild = Parent;
LABEL_8:
      Parent->Parent = Links;
      Links->Parent = Links;
    }
    else if ( v4->RightChild == Parent )
    {
      v4->RightChild = LeftChild;
      if ( LeftChild )
        LeftChild->Parent = v4;
      v9 = Links->LeftChild;
      Parent->RightChild = v9;
      if ( v9 )
        v9->Parent = Parent;
      if ( v4->Parent == v4 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v4->Parent;
        v17 = &v4->Parent->LeftChild;
        if ( *v17 != v4 )
          v17 = &v4->Parent->RightChild;
        *v17 = Links;
      }
      Links->LeftChild = Parent;
      Parent->LeftChild = v4;
LABEL_21:
      Parent->Parent = Links;
      v4->Parent = Parent;
    }
    else
    {
      v13 = Links->LeftChild;
      Parent->RightChild = v13;
      if ( v13 )
        v13->Parent = Parent;
      v14 = Links->RightChild;
      v4->LeftChild = v14;
      if ( v14 )
        v14->Parent = v4;
      if ( v4->Parent == v4 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v4->Parent;
        v15 = &v4->Parent->LeftChild;
        if ( *v15 != v4 )
          v15 = &v4->Parent->RightChild;
        *v15 = Links;
      }
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->RightChild = v4;
      v4->Parent = Links;
    }
  }
}
