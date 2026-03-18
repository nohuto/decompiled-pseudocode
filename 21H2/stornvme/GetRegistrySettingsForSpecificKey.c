/*
 * XREFs of GetRegistrySettingsForSpecificKey @ 0x1C0025594
 * Callers:
 *     NVMeControllerValidateFirmwareActivateCapability @ 0x1C001CAB0 (NVMeControllerValidateFirmwareActivateCapability.c)
 * Callees:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0001870 (ReadMultiSzRegistryValueAndCompareId.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     UlongToHex @ 0x1C000C9E8 (UlongToHex.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

__int64 __fastcall GetRegistrySettingsForSpecificKey(__int64 a1)
{
  bool v1; // zf
  int v3; // r11d
  int v4; // r11d
  void *v5; // r10
  unsigned int v6; // ecx
  char *v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned int v11; // [rsp+50h] [rbp+17h] BYREF
  unsigned int v12; // [rsp+54h] [rbp+1Bh] BYREF
  unsigned int v13; // [rsp+58h] [rbp+1Fh] BYREF
  char *v14; // [rsp+60h] [rbp+27h] BYREF
  char v15[32]; // [rsp+68h] [rbp+2Fh] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  strcpy(v15, "VEN_vvvv&DEV_dddd&REV_rr");
  v11 = 512;
  if ( !v1 )
    return 0LL;
  v14 = (char *)StorPortAllocateRegistryBuffer(a1, &v11);
  if ( !v14 )
    return 0LL;
  UlongToHex((__int64)&v15[4], *(unsigned __int16 *)(a1 + 4), 4);
  UlongToHex((__int64)&v15[13], *(unsigned __int16 *)(a1 + 6), v3);
  UlongToHex((__int64)&v15[22], *(unsigned __int8 *)(a1 + 8), v4 - 2);
  v6 = 0;
  v7 = v15;
  v8 = 29;
  while ( *v7 )
  {
    ++v6;
    ++v7;
    if ( v6 >= 0x1D )
      goto LABEL_8;
  }
  v8 = v6;
LABEL_8:
  v13 = v11;
  NVMeZeroMemory(v5, v11);
  v12 = 0;
  ReadMultiSzRegistryValueAndCompareId(
    a1,
    (__int64)"DisableActivateFWWithoutReset",
    v9,
    &v14,
    &v11,
    &v13,
    (__int64)v15,
    v8,
    (__int64)&v12);
  if ( v14 )
    StorPortFreeRegistryBuffer(a1, v14);
  return v12;
}
