/*
 * XREFs of KdpSysWriteBusData @ 0x140AB1D2C
 * Callers:
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     KdpSetBusData @ 0x140AB1B1C (KdpSetBusData.c)
 * Callees:
 *     HalSetBusDataByOffset @ 0x140370180 (HalSetBusDataByOffset.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140C01A48)(a2, a3, Buffer);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}
