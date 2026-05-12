/*
 * XREFs of RaidRestartIoQueue @ 0x1C00078C8
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C000289C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E8 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006164 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013718 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F04 (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015604 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0016510 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C001AC04 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002C4A0 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C00308B0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004A104 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C004B9C0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0007998 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000AEC4 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1, char a2)
{
  KIRQL v4; // di
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v8, 0, 32);
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    v4 = KfRaiseIrql(2u);
  v6 = RaidNormalizeDeviceQueue(a1 + 656);
  if ( v6 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 664)) )
  {
    LOBYTE(v7) = a2;
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(a1 + 648))(*(_QWORD *)(a1 + 640), v6 - 120, v8, v7);
  }
  if ( CurrentIrql != 2 )
    KeLowerIrql(v4);
}
