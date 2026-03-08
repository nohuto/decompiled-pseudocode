/*
 * XREFs of KdpSysReadBusData @ 0x140AB1CC4
 * Callers:
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x140AB1028 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140370350 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140C01A40)(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
