/*
 * XREFs of InternalSetProp @ 0x1C00384A8
 * Callers:
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003CA0 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0031E00 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C003823C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C0038424 (FeedbackSetWindowSetting.c)
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEFA8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D7200 (NtUserSetBrokeredForeground.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C010AB70 (NtUserShutdownBlockReasonCreate.c)
 *     _SetTargetingWindowValue @ 0x1C011FE2C (_SetTargetingWindowValue.c)
 *     FeedbackClearWindowSetting @ 0x1C01DB070 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01DCD44 (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E12A8 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     UserAssociateHwnd @ 0x1C01E8ABC (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C0201500 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0204B90 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0209DE8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021A918 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021B138 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0248120 (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C00031DC (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00352D8 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
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

  AtomFromAtomTable = word_1C033AF44;
  v5 = a1 + 144;
  if ( !word_1C033AF44 )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C033AF44 = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_1C033AF44;
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
