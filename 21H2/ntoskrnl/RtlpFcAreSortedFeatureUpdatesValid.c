/*
 * XREFs of RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x14091A644 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpIsImmutableFeatureConfigurationPriority @ 0x1403F88B8 (RtlpIsImmutableFeatureConfigurationPriority.c)
 *     RtlpIsValidFeatureConfigurationPriority @ 0x14058F5E8 (RtlpIsValidFeatureConfigurationPriority.c)
 *     RtlpIsValidFeatureEnabledState @ 0x14058F5F8 (RtlpIsValidFeatureEnabledState.c)
 *     RtlpIsValidFeatureEnabledStateOptions @ 0x14058F608 (RtlpIsValidFeatureEnabledStateOptions.c)
 *     RtlpIsValidFeatureVariant @ 0x14058F618 (RtlpIsValidFeatureVariant.c)
 *     RtlpIsValidFeatureVariantPayloadKind @ 0x14058F628 (RtlpIsValidFeatureVariantPayloadKind.c)
 */

char __fastcall RtlpFcAreSortedFeatureUpdatesValid(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  _DWORD *v3; // r8
  unsigned int *v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r10

  v2 = 1LL;
  if ( a2 <= 1 )
  {
LABEL_6:
    if ( !a2 )
      return 1;
    v4 = a1 + 1;
    while ( 1 )
    {
      v5 = v4[6];
      if ( (v5 & 4) != 0 && v5 != 4 )
        break;
      if ( !RtlpIsValidFeatureConfigurationPriority(*v4)
        || RtlpIsImmutableFeatureConfigurationPriority(v6)
        || !RtlpIsValidFeatureEnabledState(*(_DWORD *)(v7 + 4))
        || !RtlpIsValidFeatureEnabledStateOptions(*(_DWORD *)(v8 + 8))
        || !RtlpIsValidFeatureVariant(*(unsigned __int8 *)(v9 + 12))
        || !RtlpIsValidFeatureVariantPayloadKind(*(_DWORD *)(v10 + 16)) )
      {
        break;
      }
      v4 = (unsigned int *)(v11 + 32);
      if ( v12 + 1 >= v13 )
        return 1;
    }
  }
  else
  {
    v3 = a1;
    while ( v3[8] != *v3 || v3[9] != v3[1] )
    {
      ++v2;
      v3 += 8;
      if ( v2 >= a2 )
        goto LABEL_6;
    }
  }
  return 0;
}
