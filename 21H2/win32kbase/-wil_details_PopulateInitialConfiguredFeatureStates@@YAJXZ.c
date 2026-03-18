/*
 * XREFs of ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C02E5B54
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C02E5A60 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00B7DE8 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates(void)
{
  unsigned int v0; // edi
  const struct wil_details_FeatureDescriptor *i; // rbx
  int v2; // eax
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v0 = 0;
  for ( i = wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
        i;
        i = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)i + 6) )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( *((_BYTE *)i + 21) || *((_BYTE *)i + 22) )
      goto LABEL_6;
    v2 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
           *((unsigned int *)i + 4),
           (unsigned __int8)(*((_BYTE *)i + 20) - 2) > 1u,
           &v7,
           &v8,
           v6);
    if ( v2 == -2147483614 )
    {
      v5 = 131LL;
      do
      {
        **(_QWORD **)i = v5;
        i = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)i + 6);
      }
      while ( i );
      return v0;
    }
    v3 = 0;
    if ( v2 == -1073741275 )
    {
LABEL_6:
      HIDWORD(v6) = 0;
      v3 = 0;
    }
    else
    {
      HIDWORD(v6) = 0;
      if ( !v2 )
      {
        LODWORD(v6) = (2 * (BYTE4(v8) & 0xB0 | (4 * (BYTE4(v8) & 0x40)))) | 0x83;
        goto LABEL_8;
      }
      if ( v2 == 279 )
      {
        LODWORD(v6) = (2 * (BYTE4(v8) & 0x80)) | 0x83;
        goto LABEL_8;
      }
      v3 = v2;
    }
    LODWORD(v6) = 131;
LABEL_8:
    if ( !v3 )
      v3 = v0;
    v0 = v3;
    **(_QWORD **)i = v6;
  }
  return v0;
}
