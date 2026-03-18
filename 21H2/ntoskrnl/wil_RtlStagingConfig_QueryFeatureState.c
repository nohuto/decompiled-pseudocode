/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x140907F90
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140502D50 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v11 = 0LL;
  v12 = 0;
  v7 = 0;
  v8 = RtlQueryFeatureConfiguration(a2, a3 == 0, &v13, (__int64)&v11);
  if ( v8 )
  {
    if ( v8 != 279 )
      goto LABEL_6;
    v9 = HIDWORD(v11);
    v7 = 1;
  }
  else
  {
    v9 = HIDWORD(v11);
    v7 = 1;
    *(_DWORD *)a1 = (HIDWORD(v11) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v9) & 0x3F;
    *(_DWORD *)(a1 + 12) = v12;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v9 >> 14;
    *(_DWORD *)(a1 + 20) = (v9 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v9 >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v5) = v8 != -2147483614;
    *a4 = v5;
  }
  return v7;
}
