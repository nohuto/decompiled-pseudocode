void __fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  struct _SLIST_ENTRY *Pool2; // rax
  struct _SLIST_ENTRY *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  struct _SLIST_ENTRY **v13; // rax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = 0LL;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a3) )
  {
    Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, 0x28uLL, 0x61436656u);
    v7 = Pool2;
    if ( Pool2 )
    {
      Pool2[1].Next = a2;
      *((_QWORD *)&Pool2[1].Next + 1) = a3;
      v8 = 0;
      Pool2[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)&v14, 0);
      v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v14, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_140C36F50 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 248);
          *(_QWORD *)(v10 + 248) = v11;
          if ( *(_QWORD *)(v10 + 256) < v11 )
            *(_QWORD *)(v10 + 256) = v11;
          v12 = v10 + 264;
          v13 = *(struct _SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (struct _SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      VfAvlCleanupLockContext((__int64)&v14);
      if ( !v8 )
        VfUtilFreePoolCheckIRQL(v7);
    }
  }
}
