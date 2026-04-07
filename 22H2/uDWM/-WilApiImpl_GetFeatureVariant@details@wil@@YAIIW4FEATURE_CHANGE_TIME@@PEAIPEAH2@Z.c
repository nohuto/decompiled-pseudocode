/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DCFC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4,
        int *a5)
{
  bool IsFeatureConfigured; // al
  bool v8; // zf
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int result; // eax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (int)&v13,
                          (int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1,
                          (__int64)a5);
  *a4 = v14;
  if ( IsFeatureConfigured )
  {
    v8 = DWORD2(v13) == 0;
    v9 = BYTE4(v13);
    v10 = BYTE4(v13);
    *a3 = HIDWORD(v13);
    v11 = v10 | 0x100;
    if ( v8 )
      v11 = v9;
    result = v11 | 0x80;
    if ( !HIDWORD(v14) )
      return v11;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
