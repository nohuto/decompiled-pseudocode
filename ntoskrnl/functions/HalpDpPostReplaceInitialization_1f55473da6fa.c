__int64 __fastcall HalpDpPostReplaceInitialization(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char CpuInfo; // al
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v13 = 0;
  HalpInterruptReinitializeThisProcessor();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  __writemsr(0x10u, *a2);
  HalpMcaResumeProcessorConfig(1);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  v10 = (unsigned int)_InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < (int)v10 )
    _mm_pause();
  HalpMcUpdateMicrocode(v10, v8, v9);
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v13);
  v13 &= -(CpuInfo != 0);
  if ( v13 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType == 15 )
      __writemsr(0xC001001F, __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL);
    if ( KeGetCurrentPrcb()->CpuType == 18 )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 0x80000000);
  }
  _InterlockedIncrement(a1 + 16);
  while ( a1[16] < v2 )
    _mm_pause();
  HalpRestartProfiling();
  return HalpInterruptEnableNmi();
}
