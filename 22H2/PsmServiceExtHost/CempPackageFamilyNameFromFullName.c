/*
 * XREFs of CempPackageFamilyNameFromFullName @ 0x180085AAC
 * Callers:
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180077910 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

LONG __fastcall CempPackageFamilyNameFromFullName(PCWSTR packageFullName, __int64 a2)
{
  LONG result; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int16 v11; // ax
  UINT32 packageFamilyNameLength[4]; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD packageFamilyName[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-28h]

  memset_0(packageFamilyName, 0, 0x82uLL);
  packageFamilyNameLength[0] = 65;
  result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, (PWSTR)packageFamilyName);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  else
  {
    v5 = packageFamilyName[1];
    *(_OWORD *)a2 = packageFamilyName[0];
    v6 = packageFamilyName[2];
    *(_OWORD *)(a2 + 16) = v5;
    v7 = packageFamilyName[3];
    *(_OWORD *)(a2 + 32) = v6;
    v8 = packageFamilyName[4];
    *(_OWORD *)(a2 + 48) = v7;
    v9 = packageFamilyName[5];
    *(_OWORD *)(a2 + 64) = v8;
    v10 = packageFamilyName[6];
    *(_OWORD *)(a2 + 80) = v9;
    *(_OWORD *)(a2 + 96) = v10;
    v11 = v14;
    *(_OWORD *)(a2 + 112) = packageFamilyName[7];
    *(_WORD *)(a2 + 128) = v11;
    return 0;
  }
  return result;
}
