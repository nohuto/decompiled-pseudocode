/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C000B614
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000B9E8 (RaUnitPnpIrp.c)
 *     StorpLogPerUnitStatistics @ 0x1C000CA50 (StorpLogPerUnitStatistics.c)
 *     RaUnitPowerIrp @ 0x1C0012B08 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0012D78 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0012EDC (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013718 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015604 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B790 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C004A2D4 (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C007B500 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C000B678 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // ebx
  __int64 v7; // r10

  v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v4 = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 32));
  while ( (v4 & 1) == 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 32)), v4 + 2, v4);
    if ( v5 == v4 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 912), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
