/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x18011B008
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x18009C268 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x18005E0C0 (RtlQueryFeatureConfiguration.c)
 */

__int64 wil_RtlStagingConfig_QueryFeatureState(__int64 a1, RTL_FEATURE_ID a2, int a3, ...)
{
  unsigned int v4; // edi
  NTSTATUS v5; // eax
  ULONG Flags; // ecx
  _RTL_FEATURE_CONFIGURATION v8; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = 0;
  *(_QWORD *)&v8.FeatureId = 0LL;
  v8.VariantPayload = 0;
  v5 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), (PRTL_FEATURE_CHANGE_STAMP)va, &v8);
  if ( !v5 )
  {
    Flags = v8.Flags;
    v4 = 1;
    *(_DWORD *)a1 = (v8.Flags >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(Flags) & 0x3F;
    *(_DWORD *)(a1 + 12) = v8.VariantPayload;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)Flags >> 14;
    *(_DWORD *)(a1 + 20) = (Flags >> 6) & 1;
LABEL_5:
    *(_DWORD *)(a1 + 16) = (Flags >> 7) & 1;
    return v4;
  }
  if ( v5 == 279 )
  {
    Flags = v8.Flags;
    goto LABEL_5;
  }
  return v4;
}
