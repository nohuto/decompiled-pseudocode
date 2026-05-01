/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1803FC520
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABBA4 (-complete@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QE.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D3910 (--1-$test_data_control@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@1@XZ @ 0x1800D3978 (--C-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA-AV-$.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist@@@details@wil@@QEAA_NXZ @ 0x1800D4624 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist@@@detai.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801B7670 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021892C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18021B3F4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___ @ 0x18037FB58 (wil--details--ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___--_ScopeExitFn__lambda_371a.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1803FBE74 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1803FC924 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x1803FCDA0 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1803FCDF0 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAltTabViewHost::Show(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  int v14; // eax
  char v15; // bl
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  WINBOOL v22; // edx
  __int64 v24; // rdx
  void *v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  char v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v33[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v30 = (a1 + 24) & -(__int64)(a1 != 0);
  v31 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v30, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"ShowAltTab");
  v33[0] = &MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v33);
  v28 = a1;
  v29 = 1;
  v8 = CMultitaskingViewHostBase<IAltTabViewHost>::_RegisterForMonitorEvents(a1, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 176), (__int64)a2);
    v11 = *a2;
    v32 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v11 + 88))(a2, &v32);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 225LL;
      goto LABEL_7;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(
           *(_QWORD *)(a1 + 152),
           &v32,
           3LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 228LL;
      goto LABEL_7;
    }
    v27 = 0LL;
    if ( !a4 )
      goto LABEL_17;
    v12 = *(_QWORD *)(a1 + 136);
    v26 = 0LL;
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 24LL))(v12, &v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v14 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v13)(
            *v13,
            &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6,
            &v26);
    if ( v14 >= 0 )
    {
      v15 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v14);
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    if ( v15 )
    {
      v16 = v26;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      (*(void (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
        v16,
        a4,
        &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
        &v27);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( v27
      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 104LL))(*(_QWORD *)(a1 + 152), 1LL) >= 0 )
    {
      v17 = (unsigned int)((a3 & 2) != 0) + 5;
    }
    else
    {
LABEL_17:
      v17 = (unsigned int)((a3 & 2) != 0) + 7;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 152) + 96LL))(*(_QWORD *)(a1 + 152), 1LL, v17);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 56LL))(*(_QWORD *)(a1 + 152));
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 258LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v18);
LABEL_31:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v27);
      goto LABEL_32;
    }
    v20 = *(_QWORD *)(a1 + 152);
    *(_BYTE *)(a1 + 112) = 1;
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 88LL))(v20);
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 262LL;
      goto LABEL_22;
    }
    *(_BYTE *)(a1 + 200) = a3 & 1;
    if ( (a3 & 4) != 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(*(_QWORD *)(a1 + 160)) )
        goto LABEL_26;
    }
    else if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
    {
LABEL_26:
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
        *(_QWORD *)(a1 + 88),
        *(unsigned int *)(a1 + 72));
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::GetImpl'::`2'::impl) )
      {
        v21 = *tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::operator->(
                 a1 + 208,
                 (__int64 *)&v25);
        *(_BYTE *)(v21 + 264) = 1;
        tip::test_data_control<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::~test_data_control<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>(
          &v25,
          v21);
      }
LABEL_28:
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::GetImpl'::`2'::impl) )
        tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::complete((__int64 *)(a1 + 208));
      v29 = 0;
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v33,
        v22);
      v9 = 0;
      goto LABEL_31;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TIPForAltTabAndSnapAssist>::GetImpl'::`2'::impl) )
    {
      *(_BYTE *)(*tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::operator->(
                    a1 + 208,
                    (__int64 *)&v25)
               + 265) = 1;
      tip::test_data_control<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::~test_data_control<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>(
        &v25,
        v24);
    }
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_28;
  }
  v10 = 221LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
    (const char *)(unsigned int)v8);
LABEL_32:
  wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___((__int64)&v28);
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab((MultitaskingViewTelemetry::ShowAltTab *)v33);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v30);
  return v9;
}
