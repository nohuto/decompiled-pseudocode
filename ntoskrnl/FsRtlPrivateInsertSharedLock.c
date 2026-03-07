char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS **p_Parent; // r14
  PRTL_SPLAY_LINKS *v4; // r15
  __int64 v5; // rcx
  __int64 FirstOverlappingSharedNode; // rax
  RTL_SPLAY_LINKS *v7; // rbp
  RTL_SPLAY_LINKS *v8; // rax
  PRTL_SPLAY_LINKS v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
  __int64 v11; // rbx
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS **v13; // rcx
  unsigned __int64 LeftChild; // r8
  PRTL_SPLAY_LINKS v15; // rdi
  PRTL_SPLAY_LINKS v16; // rax
  RTL_SPLAY_LINKS *v17; // rsi
  char v19; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v20; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v20 = 0LL;
  v19 = 0;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 v5,
                                 (int)a2 + 8,
                                 (int)a2 + 48,
                                 (unsigned int)&v20,
                                 (__int64)&v19);
  v7 = (RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( FirstOverlappingSharedNode )
  {
    v11 = FirstOverlappingSharedNode - 24;
    v12 = *(_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v13 = (_RTL_SPLAY_LINKS **)v11;
    if ( v12 )
    {
      LeftChild = (unsigned __int64)a2->LeftChild;
      do
      {
        if ( (_RTL_SPLAY_LINKS *)LeftChild < v12->LeftChild
          || (_RTL_SPLAY_LINKS *)LeftChild == v12->LeftChild && (!a2->RightChild || v12->RightChild) )
        {
          break;
        }
        v13 = &v12->Parent;
        v12 = v12->Parent;
      }
      while ( v12 );
    }
    if ( !*v13 )
      *(_QWORD *)(v11 + 48) = a2;
    a2->Parent = *v13;
    *v13 = a2;
    *v4 = RtlSplay(v7);
    if ( (unsigned __int64)*p_Parent > *(_QWORD *)(v11 + 16) )
    {
      *(_QWORD *)(v11 + 16) = *p_Parent;
      while ( 1 )
      {
        v16 = RtlRealSuccessor(v7);
        v17 = v16;
        if ( !v16 )
          break;
        v15 = v16 - 1;
        if ( v16[-1].Parent->LeftChild > (_RTL_SPLAY_LINKS *)*(_QWORD *)(v11 + 16) )
          break;
        if ( !*(_BYTE *)(v11 + 8) && LOBYTE(v15->LeftChild) )
          FsRtlSplitLocks(&v16[-1], 0LL, 0LL, 0LL);
        **(_QWORD **)(v11 + 48) = v15->Parent;
        *(_QWORD *)(v11 + 48) = v15[2].Parent;
        if ( v15->RightChild > (_RTL_SPLAY_LINKS *)*(_QWORD *)(v11 + 16) )
        {
          if ( LOBYTE(v15->LeftChild) )
            *(_BYTE *)(v11 + 8) = 1;
          *(_QWORD *)(v11 + 16) = v15->RightChild;
        }
        RtlDeleteNoSplay(v17, v4);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v17[-1]);
      }
    }
    if ( *(_BYTE *)(v11 + 8) )
      FsRtlSplitLocks(v11, 0LL, 0LL, 0LL);
  }
  else
  {
    v8 = (RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
    if ( !v8 )
      return (char)v8;
    v9 = v8 + 1;
    LOBYTE(v8->LeftChild) = 0;
    v8[2].Parent = a2;
    v8->Parent = a2;
    v8[1].Parent = v8 + 1;
    v8[1].LeftChild = 0LL;
    v8[1].RightChild = 0LL;
    v8->RightChild = *p_Parent;
    v10 = v20;
    a2->Parent = 0LL;
    if ( v10 )
    {
      if ( v19 )
        v10->LeftChild = v9;
      else
        v10->RightChild = v9;
      v9->Parent = v10;
      v9 = RtlSplay(v9);
    }
    *v4 = v9;
  }
  LOBYTE(v8) = 1;
  return (char)v8;
}
