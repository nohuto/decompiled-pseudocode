/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838
 * Callers:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010160 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0025160 (xxxFlushDeferredWindowEvents.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C007078C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     _SetWinEventHook @ 0x1C0070AC4 (_SetWinEventHook.c)
 *     DestroyEventHook @ 0x1C0070D40 (DestroyEventHook.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00713C4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     _UnhookWinEvent @ 0x1C0071B04 (_UnhookWinEvent.c)
 *     FreeThreadsWinEvents @ 0x1C0072010 (FreeThreadsWinEvents.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C009CDF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C009E648 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     MapDesktop @ 0x1C00E4A20 (MapDesktop.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00E7CDC (xxxProcessNotifyWinEvent.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1C01B2F94 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01BF9E0 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C01BFAF8 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01BFFF8 (xxxProcessTSFEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
