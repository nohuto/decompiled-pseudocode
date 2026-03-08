/*
 * XREFs of ExpScanSystemLookasideList @ 0x1402C5D38
 * Callers:
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x1402C5EFC (ExpComputeLookasideDepth.c)
 *     RtlpDynamicLookasideRebalance @ 0x1402C5F90 (RtlpDynamicLookasideRebalance.c)
 */

__int64 ExpScanSystemLookasideList()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int i; // edi
  __int64 v12; // rsi
  char *v13; // rbx
  __int64 result; // rax
  _GENERAL_LOOKASIDE **p_L; // rdi
  _GENERAL_LOOKASIDE *v16; // rcx
  __int64 v17; // rdx

  v0 = 9LL;
  v1 = 3 * KeNumberProcessors_0;
  if ( ExpPoolScanCount == (_DWORD)KeNumberProcessors_0 )
  {
    p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
    do
    {
      v16 = *p_L;
      if ( *p_L )
      {
        v17 = v16->AllocateMisses - v16->LastAllocateMisses;
        v16->LastAllocateMisses = v16->AllocateMisses;
        ExpComputeLookasideDepth(v16, v17, v1);
      }
      p_L += 2;
      --v0;
    }
    while ( v0 );
  }
  else
  {
    v2 = KiProcessorBlock[ExpPoolScanCount];
    v3 = (__int64 *)(v2 + 2048);
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = (unsigned int)(*(_DWORD *)(v4 + 24) - *(_DWORD *)(v4 + 84));
        *(_DWORD *)(v4 + 84) = *(_DWORD *)(v4 + 24);
        ExpComputeLookasideDepth(v4, v5, v1);
      }
      v3 += 2;
      --v0;
    }
    while ( v0 );
    v6 = (_DWORD *)(v2 + 2388);
    v7 = 32LL;
    do
    {
      v8 = (unsigned int)(*(v6 - 16) - *(v6 - 1) - (*(v6 - 15) - *v6));
      *v6 = *(v6 - 15);
      ExpComputeLookasideDepth(v6 - 21, v8, v1);
      v9 = (unsigned int)(v6[752] - v6[767] - (v6[753] - v6[768]));
      v6[768] = v6[753];
      ExpComputeLookasideDepth(v6 + 747, v9, v1);
      v10 = (unsigned int)(v6[1520] - v6[1535] - (v6[1521] - v6[1536]));
      v6[1536] = v6[1521];
      ExpComputeLookasideDepth(v6 + 1515, v10, v1);
      v6 += 24;
      --v7;
    }
    while ( v7 );
  }
  for ( i = 0; i < dword_140C74660; ++i )
  {
    v12 = 2LL;
    v13 = (char *)&unk_140C746C0 + 8384 * i;
    do
    {
      RtlpDynamicLookasideRebalance(v13);
      v13 += 4160;
      --v12;
    }
    while ( v12 );
  }
  ++ExpPoolScanCount;
  result = (unsigned int)KeNumberProcessors_0;
  if ( ExpPoolScanCount > (unsigned int)KeNumberProcessors_0 )
    ExpPoolScanCount = 0;
  return result;
}
