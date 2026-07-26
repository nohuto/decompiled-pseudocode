/*
 * XREFs of NdisWritePciSlotInformation @ 0x1C00C1490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C11C0 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG SetBusConfigSpace; // edi

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x16u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((__int64)NdisAdapterHandle, Offset, (__int64)Buffer, Length, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x17u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      NdisAdapterHandle);
  return SetBusConfigSpace;
}
