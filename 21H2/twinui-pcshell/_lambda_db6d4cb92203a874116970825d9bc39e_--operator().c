/*
 * XREFs of _lambda_db6d4cb92203a874116970825d9bc39e_::operator() @ 0x1801F8D14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::Run @ 0x1801F99E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___--Run.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1801CA020 (WPP_SF_qd.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F993C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QE.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801F9DEC (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x1801FA8C8 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_db6d4cb92203a874116970825d9bc39e_::operator()(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-68h]
  _BYTE v6[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v7[24]; // [rsp+50h] [rbp-38h] BYREF
  int v8; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v6);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(*(_QWORD *)(a1[1] + 120LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetImpl'::`2'::impl,
    v2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 104LL) + 208LL))(
    **(_QWORD **)(a1[1] + 104LL),
    *(_QWORD *)(a1[1] + 128LL),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
    (struct CFrameApplicationPresentation *)a1[1],
    0LL,
    **(HWND **)(a1[1] + 112LL));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = *(_DWORD *)(a1[1] + 48LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    v5 = v3;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids, v4, v5);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v6);
}
