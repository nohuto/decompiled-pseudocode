/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x140230760
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeStartThread @ 0x140340A7C (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035C2A8 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x14035CE24 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14035D000 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035D8C8 (KeUpdateThreadSchedulingProperties.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v2 = *(_QWORD *)(a1 + 33856);
  v3 = 0;
  if ( v2 )
    LOBYTE(v3) = (v2 & *(_QWORD *)(a2 + 576)) == v2;
  if ( v3 != ((*(_DWORD *)(a2 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return v3;
}
