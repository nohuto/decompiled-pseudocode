/*
 * XREFs of WPP_SF_q @ 0x1C0033618
 * Callers:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00111A0 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0016C0C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017CA4 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C00344E0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0039CF0 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003B75C (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C003C4B0 (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C00457B0 (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0046DC0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0046F64 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0047608 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047910 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047E14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048458 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0049CD0 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1C8 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0074474 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
