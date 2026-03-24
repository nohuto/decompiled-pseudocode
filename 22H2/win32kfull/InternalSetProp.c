/*
 * XREFs of InternalSetProp @ 0x1C0038408
 * Callers:
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003CA0 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxFlashWindow @ 0x1C002AFD8 (xxxFlashWindow.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0031D60 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SetWindowCompositionInfo @ 0x1C00374B4 (SetWindowCompositionInfo.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C003819C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C0038384 (FeedbackSetWindowSetting.c)
 *     CkptRestore @ 0x1C00411F0 (CkptRestore.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEC48 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D6EB0 (NtUserSetBrokeredForeground.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C010A7F0 (NtUserShutdownBlockReasonCreate.c)
 *     _SetTargetingWindowValue @ 0x1C011FAAC (_SetTargetingWindowValue.c)
 *     FeedbackClearWindowSetting @ 0x1C01DAAB0 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01DC784 (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E0CE8 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     UserAssociateHwnd @ 0x1C01E84FC (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C0200F40 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C02045D0 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0209828 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021A358 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021AB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0247B60 (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C00031DC (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C0035238 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 AtomFromAtomTable; // ax
  __int64 v5; // r15
  unsigned int v10; // edi
  unsigned int DLT; // eax
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v14; // rax
  int v15; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  AtomFromAtomTable = word_1C0339F44;
  v5 = a1 + 144;
  if ( !word_1C0339F44 )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C0339F44 = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_1C0339F44;
    }
  }
  v10 = 1;
  if ( (a4 & 1) != 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  if ( (_WORD)a2 == AtomFromAtomTable )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  }
  if ( (*(_DWORD *)(a1 + 328) & 0x40) == 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  v14 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v14 + 424), &ApcState);
  v15 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v15 != 1 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  return v10;
}
