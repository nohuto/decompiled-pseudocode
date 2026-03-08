/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C0007A5C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     FormInquiryBlockLimitsData @ 0x1C0011F6C (FormInquiryBlockLimitsData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015A60 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[54];
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
