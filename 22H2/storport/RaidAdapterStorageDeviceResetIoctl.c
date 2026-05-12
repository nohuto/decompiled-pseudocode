/*
 * XREFs of RaidAdapterStorageDeviceResetIoctl @ 0x1C0030388
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6C8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidAdapterDeviceReset @ 0x1C002C554 (RaidAdapterDeviceReset.c)
 */

__int64 __fastcall RaidAdapterStorageDeviceResetIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 4u )
    v3 = RaidAdapterDeviceReset(a1, **(_WORD **)(a2 + 24));
  else
    v3 = -1073741811;
  return RaidCompleteRequestEx((PIRP)a2, 0, v3);
}
