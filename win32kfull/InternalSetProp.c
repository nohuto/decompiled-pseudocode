/*
 * XREFs of InternalSetProp @ 0x1C01011E0
 * Callers:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     _SetTouchWindowFlags @ 0x1C00168D0 (_SetTouchWindowFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002D938 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C002DAB8 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00961D0 (NtUserSetBrokeredForeground.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00EA2E0 (NtUserShutdownBlockReasonCreate.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C0100BD0 (NtUserRegisterTouchHitTestingWindow.c)
 *     FeedbackSetWindowSetting @ 0x1C0100DCC (FeedbackSetWindowSetting.c)
 *     SetRedrawProp @ 0x1C0100E8C (SetRedrawProp.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0143CEA (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     FeedbackClearWindowSetting @ 0x1C01AED8C (FeedbackClearWindowSetting.c)
 *     UserAssociateHwnd @ 0x1C01BEED0 (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C01DB480 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C01E1520 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4F04 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4FB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01FA810 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01FB15C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C022FAFC (SetDisplayAffinity.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C01011B8 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012F0E4 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C021F288 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 GlobalAtomTableOfWindow; // rax
  int v14; // esi
  tagObjLock **v15; // rbx
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-59h] BYREF
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int128 v20; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+40h] [rbp-39h]
  char v22; // [rsp+48h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-29h] BYREF

  v4 = *(LIST_ENTRY **)(a1 + 144);
  v18 = gDomainDummyLock;
  LOBYTE(v19) = 0;
  v20 = 0LL;
  LOBYTE(v21) = 0;
  Flink = v4[1].Flink;
  ApcState.ApcListHead[0] = *v4;
  v22 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1) && IS_USERCRIT_OWNED_AT_ALL(v10) )
  {
    v22 = 1;
    if ( v4 == (LIST_ENTRY *)gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v20 = v4;
    v14 = 0;
    v15 = (tagObjLock **)&v20;
    do
    {
      if ( *v15 )
        tagObjLock::LockExclusive(*v15);
      ++v14;
      ++v15;
    }
    while ( !v14 );
    LOBYTE(v21) = 1;
  }
  if ( !word_1C0361338 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      word_1C0361338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  if ( (a4 & 1) == 0 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    if ( (_WORD)a2 == word_1C0361338 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    }
    else if ( (*(_DWORD *)(a1 + 324) & 1) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v16 + 424), &ApcState);
      v17 = SetSharedPropForFilteredProcesses(a1, a2, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v17 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v18);
        return 1LL;
      }
    }
  }
  v11 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4, v18, v19, v20, *((_QWORD *)&v20 + 1), v21);
  if ( v22 && (_BYTE)v21 )
  {
    if ( (_QWORD)v20 )
      tagObjLock::UnLockExclusive((tagObjLock *)v20);
  }
  return v11;
}
