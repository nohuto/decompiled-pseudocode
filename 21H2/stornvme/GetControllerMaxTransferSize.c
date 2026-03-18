/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C000569C
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     FormInquiryBlockLimitsData @ 0x1C0002824 (FormInquiryBlockLimitsData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002BF0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[52];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[10];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[15];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
