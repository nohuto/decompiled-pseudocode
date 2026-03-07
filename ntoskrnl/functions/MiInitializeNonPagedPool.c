__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbx

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ (__rdtsc() >> 4) ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v4 = v3 | (unsigned int)ExGenRandom(0);
  v5 = 0;
  v6 = v4 ^ v2;
  qword_140C695B0 = 0x100000000LL;
  if ( !v6 )
    v6 = 1LL;
  qword_140C69550 = v6;
  v7 = qword_140C6A168;
  v8 = (0x800000uLL / (unsigned __int16)KeNumberNodes) << 21;
  if ( KeNumberNodes )
  {
    do
    {
      v9 = v7;
      v10 = 376LL * v5;
      v11 = qword_140C65720;
      *(_QWORD *)(v10 + qword_140C65720 + 96) = v7;
      v7 += v8;
      *(_QWORD *)(v10 + v11 + 104) = v7;
      if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)(v10 + qword_140C65720), v9, v8) )
        return 0LL;
    }
    while ( ++v5 < (unsigned __int16)KeNumberNodes );
  }
  v12 = MiSystemVaToDynamicBitmap(15);
  if ( !(unsigned int)MiBuildDynamicRegion(v12, v13, 0x8000000000uLL) )
    return 0LL;
  v14 = MmPfnDatabase + (MxPfnAllocation << 12);
  v15 = MI_IS_PHYSICAL_ADDRESS(v14 - 1);
  if ( v15 )
  {
    LODWORD(v16) = 2;
    do
    {
      v16 = (unsigned int)(v16 - 1);
      --v15;
    }
    while ( v15 );
    v17 = MiLargePageSizes[v16] << 12;
    v18 = v14 & (v17 - 1);
    if ( v18 )
    {
      v19 = MiVaToPfnEx(v14);
      MiConvertEntireLargePageToSmall(48 * (v19 - (v18 >> 12)) - 0x220000000000LL, v16, 0, 6, 0LL, 0LL, 0LL);
      MiAddExpansionNonPagedPool(v19, (v17 - v18) >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
