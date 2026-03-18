/*
 * XREFs of ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0042094 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C006D1B8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     CleanupInputDelegation @ 0x1C0097BF0 (CleanupInputDelegation.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0144930 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0166AC0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(*this) != 0;
}
