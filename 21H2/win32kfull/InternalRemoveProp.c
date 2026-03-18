/*
 * XREFs of InternalRemoveProp @ 0x1C0069510
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00B0BF8 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00FF170 (NtUserShutdownBlockReasonCreate.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     _SetTargetingWindowValue @ 0x1C010CE3C (_SetTargetingWindowValue.c)
 *     NtUserShutdownReasonDestroy @ 0x1C011F510 (NtUserShutdownReasonDestroy.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144914 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01510C0 (UserRemoveWindowedSwapChain.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151E84 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _SetTouchWindowFlags @ 0x1C01D73AC (_SetTouchWindowFlags.c)
 *     UserAssociateHwnd @ 0x1C01E318C (UserAssociateHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F0590 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0211880 (xxxRegisterSiblingFrostWindow.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C02439D4 (SetDisplayAffinity.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C006C4AC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  if ( (_WORD)a2 == word_1C0336250 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v6 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v11 && v10 && v9 )
    tagObjLock::UnLockExclusive(v9);
  return v6;
}
