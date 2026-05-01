/*
 * XREFs of ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1804E0B2C
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1803A3830 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ??1?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1804DCB84 (--1-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1804E0688 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     GetSidStringFromToken @ 0x1804E7EC4 (GetSidStringFromToken.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804E8004 (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
