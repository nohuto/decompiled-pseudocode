/*
 * XREFs of VfTargetDriversRemove @ 0x14020A7FC
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABDED4 (VfDriverUnloadImage.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14020A930 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x140ABDE78 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140ACCC50 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140ACCCCC (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140ADB08C (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  unsigned __int64 v2; // r14
  void *v3; // rbx
  __m128i *v4; // rax
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
    v4 = (__m128i *)VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v10, v2, 1LL);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4[3].m128i_u64[1];
      if ( v6 )
      {
        CarUnloadingDriverData = v4[3].m128i_i64[1];
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
        --dword_140C37348;
      v3 = (void *)VfAvlDeleteTreeNode((__int64)&ViTargetDriversAvl, (__int64)&v10, v2, 1LL);
    }
    VfAvlCleanupLockContext((__int64)&v10);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v11);
      if ( *((_QWORD *)&v11[3] + 1) )
        ExFreePoolWithTag(*((PVOID *)&v11[3] + 1), 0x44566656u);
      if ( dword_140C37340 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}
