/*
 * XREFs of ScsiInquiryRequest @ 0x1C00056F8
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     FormInquiryBlockLimitsData @ 0x1C0002824 (FormInquiryBlockLimitsData.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     FormInquiryStandardData @ 0x1C000CF58 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C000D738 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000D864 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C000E4A4 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C000E56C (FormInquiryVpdSupportedPagesData.c)
 */

__int64 __fastcall ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  void *v7; // rcx
  unsigned int *v8; // rax
  _DWORD *v9; // r14
  _DWORD *v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v18; // ecx
  __int64 v19; // rax

  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) == 0 )
  {
    if ( !*(_BYTE *)(a3 + 2) )
      return (unsigned int)FormInquiryStandardData();
LABEL_29:
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v5, a2, a3, a4);
    return (unsigned int)-1056964602;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(void **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
    v9 = (_DWORD *)(a2 + 60);
    v10 = (_DWORD *)(a2 + 16);
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
    v10 = (_DWORD *)(a2 + 16);
    v9 = (_DWORD *)(a2 + 60);
  }
  v11 = 0;
  if ( v7 )
  {
    a2 = *v8;
    if ( (_DWORD)a2 )
      NVMeZeroMemory(v7, a2);
  }
  v12 = *(unsigned __int8 *)(v4 + 2);
  if ( !*(_BYTE *)(v4 + 2) )
    return (unsigned int)FormInquiryVpdSupportedPagesData(v12, v5);
  v13 = v12 - 128;
  if ( !v13 )
    return (unsigned int)FormInquirySerialNumberData(a1, v5);
  v14 = v13 - 3;
  if ( !v14 )
    return (unsigned int)FormInquiryDeviceIdentifiersData(a1, v5);
  v15 = v14 - 45;
  if ( v15 )
  {
    v18 = v15 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
        return (unsigned int)FormInquiryBlockProvisioningData(a1, v5);
    }
    else
    {
      if ( *(_BYTE *)(v5 + 2) == 40 )
        v19 = *(_QWORD *)(v5 + 64);
      else
        v19 = *(_QWORD *)(v5 + 24);
      if ( *(_BYTE *)(v5 + 2) != 40 )
        v9 = v10;
      if ( *v9 >= 8u )
      {
        *(_BYTE *)(v19 + 7) &= 0xF0u;
        *(_WORD *)v19 = -20224;
        *(_WORD *)(v19 + 3) = 60;
        *(_BYTE *)(v19 + 5) = 1;
        *(_BYTE *)(v5 + 3) = 1;
        return v11;
      }
    }
    goto LABEL_29;
  }
  return (unsigned int)FormInquiryBlockLimitsData(a1, v5, a3);
}
