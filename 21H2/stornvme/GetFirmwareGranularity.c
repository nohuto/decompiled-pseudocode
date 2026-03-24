/*
 * XREFs of GetFirmwareGranularity @ 0x1C0005D14
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002470 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x1C00119E4 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C0015C4C (NVMeWriteBufferFirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1624) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
