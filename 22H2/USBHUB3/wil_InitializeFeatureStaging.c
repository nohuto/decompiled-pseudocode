/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0092008
 * Callers:
 *     DriverEntry @ 0x1C0092234 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0075138 (wil_details_EvaluateFeatureDependencies.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int **v0; // rdi
  unsigned int v1; // esi
  int **v2; // rbx
  int v3; // eax
  int v4; // edx
  _QWORD *v5; // rcx
  int *v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]

  v0 = &wil_details_featureDescriptors_a;
  v9 = RtlQueryFeatureConfigurationChangeStamp();
  v1 = 0;
  v2 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (int **)&wil_details_featureDescriptors_z )
  {
    while ( !*v2 )
    {
      if ( ++v2 >= (int **)&wil_details_featureDescriptors_z )
        goto LABEL_32;
    }
    if ( v2 )
    {
LABEL_6:
      v8 = 0LL;
      v10 = 0LL;
      v11 = 0;
      if ( *((_BYTE *)v2 + 21) || *((_BYTE *)v2 + 22) )
      {
        v4 = 0;
        goto LABEL_16;
      }
      v3 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
             *((unsigned int *)v2 + 4),
             (unsigned __int8)(*((_BYTE *)v2 + 20) - 2) > 1u,
             &v8,
             &v10);
      if ( v3 != -2147483614 )
      {
        v4 = 0;
        if ( v3 != -1073741275 )
        {
          v8 = 0LL;
          if ( !v3 )
          {
            LODWORD(v8) = (2 * (BYTE4(v10) & 0xB0 | (4 * (BYTE4(v10) & 0x40)))) | 0x83;
            goto LABEL_18;
          }
          if ( v3 == 279 )
          {
            LODWORD(v8) = (2 * (BYTE4(v10) & 0x80)) | 0x83;
            goto LABEL_18;
          }
          v4 = v3;
LABEL_17:
          LODWORD(v8) = 131;
LABEL_18:
          v5 = *v2;
          if ( !v4 )
            v4 = v1;
          v2 += 6;
          v1 = v4;
          *v5 = v8;
          while ( v2 < (int **)&wil_details_featureDescriptors_z )
          {
            if ( *v2 )
            {
              if ( !v2 )
                goto LABEL_32;
              goto LABEL_6;
            }
            ++v2;
          }
          goto LABEL_32;
        }
LABEL_16:
        v8 = 0LL;
        goto LABEL_17;
      }
      v8 = 131LL;
LABEL_27:
      v6 = *v2;
      v2 += 6;
      *(_QWORD *)v6 = 131LL;
      while ( v2 < (int **)&wil_details_featureDescriptors_z )
      {
        if ( *v2 )
        {
          if ( v2 )
            goto LABEL_27;
          break;
        }
        ++v2;
      }
    }
  }
LABEL_32:
  wil_details_EvaluateFeatureDependencies();
  if ( !v1 )
  {
    while ( 1 )
    {
      if ( v0 >= (int **)&wil_details_featureDescriptors_z )
        return 0;
      if ( *v0 )
        break;
      ++v0;
    }
LABEL_39:
    if ( !v0 )
      return 0;
    if ( *((_BYTE *)v0 + 21) || *((_BYTE *)v0 + 22) || *((_BYTE *)v0 + 20) )
    {
      for ( v0 += 6; v0 < (int **)&wil_details_featureDescriptors_z; ++v0 )
      {
        if ( *v0 )
          goto LABEL_39;
      }
      return 0;
    }
    v1 = RtlRegisterFeatureConfigurationChangeNotification(
           wil_details_OnFeatureConfigurationChange,
           0LL,
           &v9,
           &WPP_MAIN_CB.Queue);
    if ( v1 )
      WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  return v1;
}
