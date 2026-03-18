/*
 * XREFs of ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C
 * Callers:
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C007078C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     GetPowerTransitionsState @ 0x1C0071E30 (GetPowerTransitionsState.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1C01B2F94 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BB430 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(*this) != 0;
}
