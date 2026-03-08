/*
 * XREFs of InternalRemoveProp @ 0x1C002484C
 * Callers:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C0016830 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C00168D0 (_SetTouchWindowFlags.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0024800 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002D938 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00EA2E0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserShutdownReasonDestroy @ 0x1C00F1FF0 (NtUserShutdownReasonDestroy.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00FAC00 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C0100BD0 (NtUserRegisterTouchHitTestingWindow.c)
 *     UserAssociateHwnd @ 0x1C01BEED0 (UserAssociateHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CCE50 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5244 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F59A8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F65C4 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01FB15C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021EEC0 (UserRemoveWindowedSwapChain.c)
 *     SetDisplayAffinity @ 0x1C022FAFC (SetDisplayAffinity.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C004A1A8 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
  if ( (_WORD)a2 == word_1C0361338 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v6 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v11 && v10 && v9 )
    tagObjLock::UnLockExclusive(v9);
  return v6;
}
