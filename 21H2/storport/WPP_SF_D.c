/*
 * XREFs of WPP_SF_D @ 0x1C0033528
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001367C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x1C00157EC (RaidStallDeviceQueue.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0015E28 (RaidLunQueueWaitForQuiescence.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017414 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017CA4 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterHack @ 0x1C002CD34 (RaidAdapterHack.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C0040D40 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C007C11C (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
