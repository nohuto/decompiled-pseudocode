/*
 * XREFs of InternalRemoveProp @ 0x1C00C94BC
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C0016FC0 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C0017060 (_SetTouchWindowFlags.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0048B40 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserShutdownReasonDestroy @ 0x1C00BA100 (NtUserShutdownReasonDestroy.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00C0B54 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C00C6000 (NtUserRegisterTouchHitTestingWindow.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     UserAssociateHwnd @ 0x1C01BDD30 (UserAssociateHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CBD60 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4044 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4524 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F47A8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021C300 (UserRemoveWindowedSwapChain.c)
 *     SetDisplayAffinity @ 0x1C022CDDC (SetDisplayAffinity.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0122AC8 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  tagObjLock *v9; // [rsp+30h] [rbp-48h]
  char v10; // [rsp+40h] [rbp-38h]
  char v11; // [rsp+48h] [rbp-30h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v8,
    *(_QWORD *)(a1 + 144));
  if ( (_WORD)a2 == word_1C035E350 )
  {
    LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v6 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v11 && v10 && v9 )
    tagObjLock::UnLockExclusive(v9);
  return v6;
}
