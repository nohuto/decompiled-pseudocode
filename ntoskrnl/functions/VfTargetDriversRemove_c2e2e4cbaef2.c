void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v2; // r14
  struct _SLIST_ENTRY *v3; // rbx
  __int64 v4; // rax
  __m128i *v5; // rdi
  ULONG_PTR v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v11[4]; // [rsp+30h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v10 = 0LL;
    v3 = 0LL;
    BYTE9(v10) = 4;
    v4 = ((__int64 (__fastcall *)(void *, __int128 *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           &v10,
           v2,
           1LL);
    v5 = (__m128i *)v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 56);
      if ( v6 )
      {
        CarUnloadingDriverData = *(_QWORD *)(v4 + 56);
        ViTargetRemovingCheckEtwWmi(v6, v2);
        VfPoolCheckForLeaks(v6);
        ViTargetRemovingCheckContiguousMemory(v6);
        CarUnloadingDriverData = 0LL;
      }
      v7 = *v5;
      v11[1] = v5[1];
      v8 = v5[3];
      v11[0] = v7;
      v9 = v5[2];
      v11[3] = v8;
      v11[2] = v9;
      if ( _mm_srli_si128(v8, 8).m128i_u64[0] )
        --dword_140C36F48;
      v3 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, &v10, v2, 1LL);
    }
    VfAvlCleanupLockContext(&v10);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v11);
      if ( *((_QWORD *)&v11[3] + 1) )
        ExFreePoolWithTag(*((PVOID *)&v11[3] + 1), 0x44566656u);
      if ( dword_140C36F40 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}
