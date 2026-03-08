/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1C03025D0
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0155280 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v5 = RtlQueryFeatureConfiguration(a2, a3 == 0, &v8, &v9);
  if ( !v5 )
  {
    v6 = HIDWORD(v9);
    *(_DWORD *)a1 = (HIDWORD(v9) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v6) & 0x3F;
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v6 >> 14;
    *(_DWORD *)(a1 + 20) = (v6 >> 6) & 1;
    *(_DWORD *)(a1 + 16) = (v6 >> 7) & 1;
    return 1;
  }
  if ( v5 == 279 )
  {
    *(_DWORD *)(a1 + 16) = (HIDWORD(v9) >> 7) & 1;
    return 1;
  }
  return v4;
}
