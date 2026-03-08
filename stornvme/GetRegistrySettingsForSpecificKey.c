/*
 * XREFs of GetRegistrySettingsForSpecificKey @ 0x1C00276D0
 * Callers:
 *     NVMeControllerValidateFirmwareActivateCapability @ 0x1C0014EF0 (NVMeControllerValidateFirmwareActivateCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0027934 (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C0027B00 (UlongToHex.c)
 */

__int64 __fastcall GetRegistrySettingsForSpecificKey(__int64 a1)
{
  bool v1; // zf
  unsigned int v3; // r11d
  int v4; // r11d
  void *v5; // r10
  unsigned int v6; // ecx
  char *v7; // rax
  int v8; // edi
  int v9; // r8d
  unsigned int v11; // [rsp+50h] [rbp+17h] BYREF
  unsigned int v12; // [rsp+54h] [rbp+1Bh] BYREF
  unsigned int v13; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+60h] [rbp+27h] BYREF
  char v15[32]; // [rsp+68h] [rbp+2Fh] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  strcpy(v15, "VEN_vvvv&DEV_dddd&REV_rr");
  v11 = 512;
  if ( !v1 )
    return 0LL;
  v14 = StorPortAllocateRegistryBuffer(a1, &v11);
  if ( !v14 )
    return 0LL;
  UlongToHex(&v15[4], *(unsigned __int16 *)(a1 + 4), 4LL);
  UlongToHex(&v15[13], *(unsigned __int16 *)(a1 + 6), v3);
  UlongToHex(&v15[22], *(unsigned __int8 *)(a1 + 8), (unsigned int)(v4 - 2));
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
    (unsigned int)"DisableActivateFWWithoutReset",
    v9,
    (unsigned int)&v14,
    (__int64)&v11,
    (__int64)&v13,
    (__int64)v15,
    v8,
    (__int64)&v12);
  if ( v14 )
    StorPortFreeRegistryBuffer(a1);
  return v12;
}
