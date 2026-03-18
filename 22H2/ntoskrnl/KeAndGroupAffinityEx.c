/*
 * XREFs of KeAndGroupAffinityEx @ 0x140254360
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CF00 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiIpiSendRequest @ 0x140253F00 (KiIpiSendRequest.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     PnpSetDeviceAffinityThread @ 0x140322660 (PnpSetDeviceAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     PpmEventDomainPerfStateChange @ 0x14035282C (PpmEventDomainPerfStateChange.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1409999E0 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  char v8; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v8;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  v5 = 0;
  if ( *a1 <= (unsigned __int16)v4 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
