/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140227310
 * Callers:
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140228820 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectIdleProcessor @ 0x14057528C (KiSelectIdleProcessor.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140230830 (HalRequestSoftwareInterrupt.c)
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  bool v8; // zf
  __int64 FrequencyBucket; // r9
  __int64 v10; // r11
  char v11; // cl
  __int64 v12; // rdx

  v4 = a2;
  v5 = a1;
  result = __rdtsc();
  v7 = result;
  *(_QWORD *)(a1 + 33400) += result - *(_QWORD *)(a1 + 33152);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    FrequencyBucket = (unsigned int)PoGetFrequencyBucket(a1);
    if ( KeHeteroSystem )
      v11 = *(_BYTE *)(v5 + 34056);
    else
      v11 = *(_BYTE *)(v5 + 34059);
    result = 8LL;
    if ( !v11 )
      result = 0LL;
    v12 = result + 16 * (FrequencyBucket + 2088);
    a1 = v10 + *(_QWORD *)(v12 + v5);
    *(_QWORD *)(v12 + v5) = a1;
  }
  if ( (*(_BYTE *)(v4 + 2) & 0x40) != 0 )
  {
    result = *(_QWORD *)(v4 + 968);
    if ( result )
      *(_BYTE *)(result + 64) = 1;
  }
  *(_QWORD *)(v5 + 33152) = v7;
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL);
  v8 = *(_BYTE *)(v5 + 6) == 0;
  *(_BYTE *)(v5 + 32) = 0;
  if ( !v8 )
  {
    *(_BYTE *)(v5 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(a1) = 2;
      return HalRequestSoftwareInterrupt(a1);
    }
  }
  return result;
}
