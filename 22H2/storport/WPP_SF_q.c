/*
 * XREFs of WPP_SF_q @ 0x1C00335F8
 * Callers:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0011130 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0016B9C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017C34 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C00344C0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0039CD0 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003B73C (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C003C490 (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C0045790 (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0046DA0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0046F44 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C00475E8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C00478F0 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047DF4 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048438 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0049CB0 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1A8 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0074474 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
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
