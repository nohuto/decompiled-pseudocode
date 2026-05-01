/*
 * XREFs of __security_check_cookie @ 0x1800062A0
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180001424 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180001840 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180001F10 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x18000258C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z @ 0x1800029B8 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x180002D50 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800037A4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     DllMain @ 0x180003E4C (DllMain.c)
 *     MsixvcAddPackageAsync @ 0x180003FD0 (MsixvcAddPackageAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180004100 (MsixvcUpdatePolicyInternal.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x1800047A0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcAddGameToGCS @ 0x1800048A0 (MsixvcAddGameToGCS.c)
 *     GetExpandedResourceExclusiveCpuCount @ 0x180004E90 (GetExpandedResourceExclusiveCpuCount.c)
 *     ReleaseExclusiveCpuSets @ 0x180004F90 (ReleaseExclusiveCpuSets.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800051FC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800056D0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __GSHandlerCheckCommon @ 0x180006A6C (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
