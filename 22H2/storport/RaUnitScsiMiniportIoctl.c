/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C0005C08
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0005CA4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D74 (RaidUnitPoFxActivateComponent.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0006438 (RaidGetSrbIoctlFromIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( (int)RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v7, (unsigned int)&v6, (unsigned int)&v8, 1) < 0 )
    return RaidCompleteRequestEx(a2);
  RaidUnitPoFxActivateComponent(a1, 0LL, 1LL);
  v4 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(unsigned __int8 *)(a1 + 96),
         *(unsigned __int8 *)(a1 + 97),
         *(unsigned __int8 *)(a1 + 98),
         1);
  RaidUnitPoFxIdleComponent(a1, 0LL, 0LL);
  return v4;
}
