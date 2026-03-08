/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x140459048
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v2 = KiComputeHeteroThreadQos(a1, &v5);
  v3 = (int)v2;
  if ( v2 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1, v2);
  return (unsigned int)KiDynamicHeteroCpuPolicy[2 * v3 + v5];
}
