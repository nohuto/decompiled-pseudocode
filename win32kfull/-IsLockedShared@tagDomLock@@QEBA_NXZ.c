/*
 * XREFs of ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4
 * Callers:
 *     zzzSetDesktop @ 0x1C0036340 (zzzSetDesktop.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0039408 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetPowerTransitionsState @ 0x1C00E7750 (GetPowerTransitionsState.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1C01B4154 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BC5D0 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(*this) != 0;
}
