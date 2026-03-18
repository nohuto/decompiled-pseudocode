/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x140911780
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1409116D0 (wil_details_OnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 */

__int64 *wil_details_UpdateFeatureConfiguredStates()
{
  __int64 *i; // rcx
  unsigned int v1; // ecx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 *result; // rax
  volatile signed __int32 **v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(v6 + 6) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 21) && !*((_BYTE *)result + 22) && !*((_BYTE *)result + 20) )
    {
      v1 = *((_DWORD *)result + 4);
      v7 = 0LL;
      v8 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1u, &v9, (__int64)&v7);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = BYTE4(v7) & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 131;
      }
      else
      {
        v3 = BYTE4(v7) & 0xB0 | (4 * (BYTE4(v7) & 0x40));
LABEL_11:
        v4 = (2 * v3) | 0x83;
      }
      _InterlockedXor(*v6, ((unsigned __int16)**v6 ^ (unsigned __int16)v4) & 0x3E0);
      continue;
    }
  }
  return result;
}
