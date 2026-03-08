/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x14092FDE0
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1404FC00C (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1402F02B0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v7 = 0;
  v8 = RtlQueryFeatureConfiguration(a2, a3 == 0, &v11, (__int64)&v12);
  if ( v8 )
  {
    if ( v8 != 279 )
      goto LABEL_6;
    v9 = HIDWORD(v12);
    v7 = 1;
  }
  else
  {
    v9 = HIDWORD(v12);
    v7 = 1;
    *(_DWORD *)a1 = (HIDWORD(v12) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v9) & 0x3F;
    *(_DWORD *)(a1 + 12) = v13;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v9 >> 14;
    *(_DWORD *)(a1 + 20) = (v9 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v9 >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v4) = v8 != -2147483614;
    *a4 = v4;
  }
  return v7;
}
