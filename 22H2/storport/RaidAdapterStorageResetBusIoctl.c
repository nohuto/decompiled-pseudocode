/*
 * XREFs of RaidAdapterStorageResetBusIoctl @ 0x1C00303CC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6C8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidAdapterResetBus @ 0x1C002E2C0 (RaidAdapterResetBus.c)
 */

__int64 __fastcall RaidAdapterStorageResetBusIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
    v3 = RaidAdapterResetBus(a1, **(_BYTE **)(a2 + 24));
  else
    v3 = -1073741811;
  return RaidCompleteRequestEx((PIRP)a2, 0, v3);
}
