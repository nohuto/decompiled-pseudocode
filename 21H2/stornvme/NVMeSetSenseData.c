/*
 * XREFs of NVMeSetSenseData @ 0x1C000E3C0
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C0002824 (FormInquiryBlockLimitsData.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C00037CC (ScsiReadCapacityRequest.c)
 *     NVMeHwStartIo @ 0x1C0003A70 (NVMeHwStartIo.c)
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 *     FormInquiryStandardData @ 0x1C000CF58 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C000D738 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000D864 (FormInquiryDeviceIdentifiersData.c)
 *     ProcessCommandNvmePacket @ 0x1C000DB08 (ProcessCommandNvmePacket.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000DC80 (ScsiSecurityProtocolInRequest.c)
 *     FormInquiryBlockProvisioningData @ 0x1C000E4A4 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C000E56C (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001C858 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiLogSenseRequest @ 0x1C00206FC (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0020788 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C002091C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C0020A04 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C0020C04 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0020E6C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0020F78 (ScsiStartStopUnitRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

void *__fastcall NVMeSetSenseData(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  void *result; // rax
  char *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 Src; // [rsp+38h] [rbp-18h] BYREF
  __int16 v11; // [rsp+48h] [rbp-8h]
  _BYTE *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 v13; // [rsp+78h] [rbp+28h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v11 = 0;
  Src = 0LL;
  WORD6(Src) = a4;
  v12 = 0LL;
  v9 = 0LL;
  v13 = 0;
  BYTE2(Src) = a3 & 0xF;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  result = (void *)GetSrbScsiData(a1, 0LL, &v12, &v9, &v13);
  if ( v12 )
    *v12 = 2;
  v6 = (char *)v9;
  if ( v9 && v13 )
  {
    v7 = 18;
    if ( v13 <= 0x12u )
      v7 = v13;
    result = memmove(v9, &Src, v7);
    v8 = v13;
    *(_BYTE *)(a1 + 3) |= 0x80u;
    if ( v8 > v7 )
      return NVMeZeroMemory(&v6[v7], v8 - v7);
  }
  return result;
}
