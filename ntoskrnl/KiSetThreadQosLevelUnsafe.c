/*
 * XREFs of KiSetThreadQosLevelUnsafe @ 0x14045A058
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeApplyWobBamQos @ 0x140227F40 (KeApplyWobBamQos.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x140238B34 (KiInitializeForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x1402EB020 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x1402ED02C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x140342350 (KiComputeEffectivePriority.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140459048 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14045969C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x14045A1C0 (KzHeteroRefreshWorkloadProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetThreadQosLevelUnsafe(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v3; // ett

  do
  {
    v3 = *(_DWORD *)(a1 + 512);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), a2 | v3 & 0xFFFFFF00, v3);
  }
  while ( v3 != (_DWORD)result );
  return result;
}
