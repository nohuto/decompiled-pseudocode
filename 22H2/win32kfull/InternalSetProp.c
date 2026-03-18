/*
 * XREFs of InternalSetProp @ 0x1C00C671C
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     _SetTouchWindowFlags @ 0x1C0017060 (_SetTouchWindowFlags.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0048B40 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BAFA0 (NtUserSetBrokeredForeground.c)
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C00C6000 (NtUserRegisterTouchHitTestingWindow.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C609C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C00C62CC (FeedbackSetWindowSetting.c)
 *     SetRedrawProp @ 0x1C00C638C (SetRedrawProp.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01509EA (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     FeedbackClearWindowSetting @ 0x1C01ADB9C (FeedbackClearWindowSetting.c)
 *     UserAssociateHwnd @ 0x1C01BDD30 (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C01DA450 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C01E0470 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3D04 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3DB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F9620 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C022CDDC (SetDisplayAffinity.c)
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00BE880 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00C66F4 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C021C6C8 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  unsigned int v10; // ebx
  __int64 GlobalAtomTableOfWindow; // rax
  int v13; // esi
  tagObjLock **v14; // rbx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-59h] BYREF
  char v18; // [rsp+28h] [rbp-51h]
  __int128 v19; // [rsp+30h] [rbp-49h] BYREF
  char v20; // [rsp+40h] [rbp-39h]
  char v21; // [rsp+48h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-29h] BYREF

  v4 = *(LIST_ENTRY **)(a1 + 144);
  v17 = gDomainDummyLock;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  Flink = v4[1].Flink;
  ApcState.ApcListHead[0] = *v4;
  v21 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v21 = 1;
    if ( v4 == (LIST_ENTRY *)gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v19 = v4;
    v13 = 0;
    v14 = (tagObjLock **)&v19;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v13;
      ++v14;
    }
    while ( !v13 );
    v20 = 1;
  }
  if ( !word_1C035E350 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      word_1C035E350 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  if ( (a4 & 1) == 0 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    if ( (_WORD)a2 == word_1C035E350 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    }
    else if ( (*(_DWORD *)(a1 + 324) & 1) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v15 + 424), &ApcState);
      v16 = SetSharedPropForFilteredProcesses(a1, a2, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v16 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)&v17);
        return 1LL;
      }
    }
  }
  v10 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4);
  if ( v21 && v20 )
  {
    if ( (_QWORD)v19 )
      tagObjLock::UnLockExclusive((tagObjLock *)v19);
  }
  return v10;
}
