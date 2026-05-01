/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180465390
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032684 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800691E4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180082824 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180082968 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180465FF8 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18046A580 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18046C3A0 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18046F000 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180475048 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  const struct _GUID *v11; // r8
  int Instance; // eax
  HRESULT v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TMPControlLost");
  v21[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v21, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 == 3 )
  {
    v19 = 0LL;
    v8 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 192LL))(
           v8,
           &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
           &v19);
    if ( v9 >= 0 )
    {
      TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 80LL))(v19, 5LL) > 1 )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL))(
                a2,
                0LL,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &ppvOut);
        if ( v10 >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v19 + 184LL))(v19, ppvOut) )
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 136), &v19);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3C6,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v10);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BA,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
    }
    goto LABEL_29;
  }
  if ( ((a3 - 4) & 0xFFFFFFFD) == 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v19);
    v17 = retaddr;
    if ( v16 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              v19) )
        goto LABEL_29;
      v16 = TabletModePositioner::EvictAppHelper(a1 - 128, v19, 8LL);
      v17 = retaddr;
      if ( v16 >= 0 )
        goto LABEL_29;
      v18 = 982LL;
    }
    else
    {
      v18 = 980LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v16);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_30;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v19);
  if ( (_DWORD)v19 != *(_DWORD *)(a1 + 108) )
  {
    if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
      DwmpEndTransitionRequest(91LL);
    Instance = TabletModePositionerHandoffContext_CreateInstance(
                 *(struct IAppLayout **)(a1 + 120),
                 *(_BYTE *)(a1 + 112),
                 v11,
                 a4);
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3EC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)Instance);
    TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v19);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *(IUnknown **)(a1 - 112),
            (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
            &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
            &ppvOut);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
      v14 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_30;
      }
      v15 = 1011LL;
    }
    else
    {
      v15 = 1009LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_22;
  }
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21);
  v21[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
}
