/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010AD6C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C012CDB8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int ProfileValue; // eax
  char *v5; // rbx
  __int64 v6; // rdi
  int Src; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  ProfileValue = FastGetProfileValue(
                   a1,
                   *((unsigned int *)&gpviCPUserPreferences + 1),
                   *((_QWORD *)&gpviCPUserPreferences + 1),
                   0LL,
                   &Src,
                   8,
                   a2);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memmove(gpdwCPUserPreferencesMask, &Src, ProfileValue);
  }
  v5 = (char *)&gpviCPUserPreferences + 16;
  v6 = 26LL;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *((unsigned int *)v5 + 1), *((_QWORD *)v5 + 1), 0LL, &Src, 4, a2) )
      *(_DWORD *)v5 = Src;
    v5 += 16;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7004LL)) & 4;
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 8;
  *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7004LL)) & 0x20;
  if ( (gdwPUDFlags & 0x20000) != 0 )
    _InterlockedOr(gpsi, 0x80u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFF7F);
  *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8198LL);
  *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8206LL);
  *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8208LL);
  *(_DWORD *)(gpsi + 7004LL) = (unsigned int)gpdwCPUserPreferencesMask ^ ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x7FFFFFFF;
  EnforceColorDependentSettings();
  v9 = (unsigned int)Feature_ForegroundLockTimeout__private_featureState;
  if ( (Feature_ForegroundLockTimeout__private_featureState & 0x10) == 0 )
  {
    LODWORD(v9) = Feature_ForegroundLockTimeout__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_ForegroundLockTimeout__private_descriptor, v9, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v9,
      3LL,
      &Feature_ForegroundLockTimeout__private_descriptor);
  }
  *(_DWORD *)UPDWORDPointer(8193LL) = 0x7FFFFFFF;
  return 1LL;
}
