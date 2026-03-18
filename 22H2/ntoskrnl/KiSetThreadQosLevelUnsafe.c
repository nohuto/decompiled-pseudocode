/*
 * XREFs of KiSetThreadQosLevelUnsafe @ 0x140461FF8
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KeApplyWobBamQos @ 0x140259C50 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2760 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BDE28 (KiInitializeForegroundBoostThread.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034DCD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x140356AB0 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x14035977C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366580 (KeUpdateThreadTag.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140460FE8 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14046163C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x140462160 (KzHeteroRefreshWorkloadProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E73C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
