/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180017270
 * Callers:
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180017108 (RtlpWin32NtNameToNtPathName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800463F4 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpSearchPath @ 0x18006032C (LdrpSearchPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A3F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C340 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180082DC4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800837F4 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA2DC (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC38 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F45D8 (RtlpHpOverrideGCInterval.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5A6C (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119A78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, const void **a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, a2[1], *(unsigned __int16 *)a2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
