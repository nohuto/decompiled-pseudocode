/*
 * XREFs of ScsiInquiryRequest @ 0x1C0019C74
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     FormInquiryBlockLimitsData @ 0x1C0011F6C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012194 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0012284 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00122F8 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0012548 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0012754 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0012974 (FormInquiryVpdSupportedPagesData.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *SrbDataBuffer; // rax
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int *v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) == 0 )
  {
    if ( !*(_BYTE *)(a3 + 2) )
      return FormInquiryStandardData(a1, a2);
    goto LABEL_4;
  }
  v14 = 0LL;
  SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v14);
  if ( SrbDataBuffer )
  {
    a2 = *v14;
    if ( (_DWORD)a2 )
      NVMeZeroMemory(SrbDataBuffer, a2);
  }
  v9 = *(unsigned __int8 *)(v4 + 2);
  if ( !*(_BYTE *)(v4 + 2) )
    return FormInquiryVpdSupportedPagesData(v9, v5);
  v10 = v9 - 128;
  if ( !v10 )
    return FormInquirySerialNumberData(a1, v5);
  v11 = v10 - 3;
  if ( !v11 )
    return FormInquiryDeviceIdentifiersData(a1, v5);
  v12 = v11 - 45;
  if ( !v12 )
    return FormInquiryBlockLimitsData(a1, v5);
  v13 = (unsigned int)(v12 - 1);
  if ( !(_DWORD)v13 )
    return FormInquiryDeviceCharacteristicsData(v13, v5);
  if ( (_DWORD)v13 != 1 )
  {
LABEL_4:
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return 3238002694LL;
  }
  return FormInquiryBlockProvisioningData(a1, v5);
}
