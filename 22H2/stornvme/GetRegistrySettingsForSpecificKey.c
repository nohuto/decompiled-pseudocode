/*
 * XREFs of GetRegistrySettingsForSpecificKey @ 0x1C001E008
 * Callers:
 *     NVMeControllerValidateFirmwareActivateCapability @ 0x1C0014220 (NVMeControllerValidateFirmwareActivateCapability.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001E16C (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C001E338 (UlongToHex.c)
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

  v1 = *(_BYTE *)(a1 + 16) == 0;
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
  do
  {
    if ( !*v7 )
      break;
    ++v6;
    ++v7;
  }
  while ( v6 < 0x1D );
  v13 = v11;
  if ( v6 < 0x1D )
    v8 = v6;
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
