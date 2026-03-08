/*
 * XREFs of FsRtlSplitLocks @ 0x1402C31DC
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402C1F78 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x1402C1970 (RtlRealSuccessor.c)
 */

void __fastcall FsRtlSplitLocks(__int64 a1, _RTL_SPLAY_LINKS *a2, unsigned __int64 *a3, _RTL_SPLAY_LINKS **a4)
{
  RTL_SPLAY_LINKS *v5; // rbp
  _RTL_SPLAY_LINKS *v6; // rbx
  unsigned __int64 v7; // rdi
  _RTL_SPLAY_LINKS *Parent; // r14
  unsigned __int64 v9; // r13
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  _RTL_SPLAY_LINKS *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  RTL_SPLAY_LINKS *v16; // r15
  int v17; // edx
  _RTL_SPLAY_LINKS *v18; // r14
  PRTL_SPLAY_LINKS v19; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  int v21; // [rsp+50h] [rbp+8h]

  v5 = (RTL_SPLAY_LINKS *)a1;
  v6 = 0LL;
  v21 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v7 = *(_QWORD *)(a1 + 16);
    a2 = (_RTL_SPLAY_LINKS *)a1;
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    v7 = *a3;
    v6 = *a4;
    if ( *a3 <= (unsigned __int64)*a4 || !*(_QWORD *)a1 )
      return;
  }
  Parent = a2->Parent;
  v9 = *(_QWORD *)(a1 + 16);
  if ( a2->Parent )
  {
    LeftChild = 0LL;
    v11 = a2->Parent;
    do
    {
      if ( v5->Parent == v11 )
      {
        v6 = Parent[2].Parent;
        LeftChild = Parent->LeftChild;
        if ( v9 <= v7 )
          v5->RightChild = v6;
        goto LABEL_10;
      }
      v12 = (unsigned __int64)Parent->LeftChild;
      v13 = v12;
      if ( v12 > (unsigned __int64)v6 && (Parent->RightChild || (_RTL_SPLAY_LINKS *)v12 != LeftChild) )
      {
        v15 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
        v16 = v15;
        if ( v15 )
        {
          v18 = v15 + 1;
          LOBYTE(v15->LeftChild) = 0;
          v15[1].Parent = v15 + 1;
          v19 = v5 + 1;
          v18->LeftChild = 0LL;
          v18->RightChild = 0LL;
          if ( v5[1].RightChild )
          {
            v19 = RtlRealSuccessor(v5 + 1);
            v19->LeftChild = v18;
          }
          else
          {
            v5[1].RightChild = v18;
          }
          v18->Parent = v19;
          Parent = v16;
          v16->Parent = a2->Parent;
          a2->Parent = 0LL;
          v16[2].Parent = v5[2].Parent;
          RightChild = v5->RightChild;
          v5[2].Parent = a2;
          v16->RightChild = RightChild;
          v5->RightChild = v6;
          if ( v21 )
            v21 = 0;
          else
            LOBYTE(v5->LeftChild) = 0;
          v5 = v16;
          goto LABEL_10;
        }
        v17 = v21;
        if ( LOBYTE(v5->LeftChild) )
          v17 = 1;
        LOBYTE(v5->LeftChild) = 1;
        v13 = (unsigned __int64)Parent->LeftChild;
        v21 = v17;
      }
      if ( v9 > v7 && v13 > v7 )
        return;
      v14 = Parent[2].Parent;
      if ( v6 < v14 )
      {
        v6 = Parent[2].Parent;
        if ( v9 <= v7 )
          v5->RightChild = v14;
      }
LABEL_10:
      a2 = Parent;
      Parent = Parent->Parent;
      v11 = Parent;
    }
    while ( Parent );
  }
  v5->RightChild = v6;
}
