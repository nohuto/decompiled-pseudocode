/*
 * XREFs of KdpSysReadBusData @ 0x1409B8E98
 * Callers:
 *     KdSystemDebugControl @ 0x1408B9BB0 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x1409B7560 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039E280 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
    BusDataByOffset = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140C00630)(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
