/*
 * XREFs of GetFirmwareGranularity @ 0x1C0012A5C
 * Callers:
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015A60 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1840) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
