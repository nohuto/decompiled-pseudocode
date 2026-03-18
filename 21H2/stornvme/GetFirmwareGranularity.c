/*
 * XREFs of GetFirmwareGranularity @ 0x1C00056D0
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002BF0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1640) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
