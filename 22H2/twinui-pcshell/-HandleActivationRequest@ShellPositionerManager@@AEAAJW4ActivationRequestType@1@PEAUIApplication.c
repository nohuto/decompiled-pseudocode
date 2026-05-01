/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180032784
 * Callers:
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180032460 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180038960 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180082670 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180032BE0 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180060330 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800719DC (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1804437D0 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x180444820 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180457E30 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 ShellPositionerManager::HandleActivationRequest(
        unsigned int *a1,
        int a2,
        ApplicationViewHelpers *a3,
        IUnknown *a4,
        struct IUnknown *a5,
        __int64 a6,
        int a7,
        ...)
{
  void *v10; // r12
  void *v11; // rdi
  struct IApplicationView *v12; // rdx
  int v13; // ebx
  int v14; // eax
  struct IUnknown *v15; // r13
  int updated; // eax
  __int64 v17; // r15
  IUnknown *v18; // rbx
  int v19; // eax
  void *v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  _DWORD *v23; // rcx
  void *v24; // rcx
  struct IShellPositionerPriority *v25; // rcx
  char v27; // r14
  void *v28; // rcx
  HWND WindowForView; // rax
  const struct _GUID *v30; // rdx
  unsigned int PropW; // eax
  void *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int Instance; // eax
  __int64 v37; // rdx
  HRESULT v38; // eax
  HRESULT v39; // r14d
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  int v44; // [rsp+20h] [rbp-30h]
  int v45; // [rsp+20h] [rbp-30h]
  void *ppvOut; // [rsp+30h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v47; // [rsp+38h] [rbp-18h] BYREF
  void *v48; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  void *v51; // [rsp+A0h] [rbp+50h] BYREF
  IUnknown *punk; // [rsp+A8h] [rbp+58h]
  void *fPending; // [rsp+C8h] [rbp+78h] BYREF
  va_list fPendinga; // [rsp+C8h] [rbp+78h]
  va_list va1; // [rsp+D0h] [rbp+80h] BYREF

  va_start(va1, a7);
  va_start(fPendinga, a7);
  fPending = va_arg(va1, void *);
  punk = a4;
  v10 = fPending;
  if ( fPending )
    *(_DWORD *)fPending = 0;
  v11 = 0LL;
  v48 = 0LL;
  fPending = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, void **))(*(_QWORD *)a3 + 264LL))(a3, (void **)fPendinga) >= 0 )
    goto LABEL_4;
  v28 = fPending;
  if ( fPending )
  {
    fPending = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  fPending = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a3, v12);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      Instance = PositionerPriority_CreateInstance(PropW, v30, (void **)fPendinga);
      if ( Instance >= 0 )
        goto LABEL_46;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x503,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance,
        v44);
    }
  }
  v32 = fPending;
  if ( fPending )
  {
    fPending = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = PositionerPriority_CreateInstance(a1[36], v30, (void **)fPendinga);
  v13 = v33;
  if ( v33 < 0 )
  {
    v37 = 1075LL;
    goto LABEL_59;
  }
LABEL_46:
  v33 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, void *))(*(_QWORD *)a3 + 272LL))(a3, fPending);
  v13 = v33;
  if ( v33 < 0 )
  {
    v37 = 1079LL;
LABEL_59:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v33,
      v44);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((void **)fPendinga);
    goto LABEL_9;
  }
LABEL_4:
  v11 = fPending;
  if ( fPending )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)fPending + 8LL))(fPending);
    v11 = fPending;
  }
  v48 = v11;
  if ( v11 )
  {
    fPending = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v13 = 0;
LABEL_9:
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B1,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v13,
      v44);
    goto LABEL_33;
  }
  LODWORD(fPending) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
  v47 = 0LL;
  v14 = (*(__int64 (__fastcall **)(void *, struct IShellPositionerPriority **))(*(_QWORD *)v11 + 64LL))(v11, &v47);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14,
      v44);
  }
  else
  {
    v15 = a5;
    updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(
                (ShellPositionerManager *)a1,
                v47,
                a3,
                (struct IImmersiveMonitor *)a4,
                a5);
    v13 = updated;
    if ( updated >= 0 )
    {
      v17 = (*(int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v47 + 24LL))(v47);
      v51 = 0LL;
      ppvOut = 0LL;
      v18 = punk;
      if ( IUnknown_QueryService(
             punk,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
             &ppvOut) < 0 )
      {
        v38 = IUnknown_QueryService(v18, &c_positionersSIDs + v17, &GUID_ee010e17_919a_4068_868b_675acf787303, &v51);
        v39 = v38;
        if ( v38 < 0 )
        {
          v13 = -2147467262;
          if ( v38 == -2147467262 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
            goto LABEL_67;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x534,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v38,
            v45);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          v13 = v39;
LABEL_17:
          if ( v13 >= 0 )
          {
            if ( (*(unsigned int (__fastcall **)(void *, ApplicationViewHelpers *, struct IUnknown *))(*(_QWORD *)v51 + 32LL))(
                   v51,
                   a3,
                   v15) )
            {
              v13 = -2147467260;
              v40 = 2147500036LL;
              v43 = 706LL;
            }
            else
            {
              v21 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL))(
                      a3,
                      v47);
              v13 = v21;
              if ( v21 < 0 )
              {
                v43 = 709LL;
              }
              else if ( a2 )
              {
                v22 = (unsigned int)fPending;
                if ( (_DWORD)v17 != (_DWORD)fPending )
                {
                  ppvOut = 0LL;
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
                  v45 = v17;
                  v42 = ShellPositionerManager::SendControlLostToPositioner(v41, a3, punk, v22);
                  v13 = v42;
                  if ( v42 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2CD,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                      (const char *)(unsigned int)v42,
                      v17);
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
                    goto LABEL_29;
                  }
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
                  v22 = (unsigned int)fPending;
                }
                ppvOut = 0LL;
                if ( InitOnceBeginInitialize(
                       &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                       0,
                       (PBOOL)fPendinga,
                       &ppvOut)
                  && (_DWORD)fPending )
                {
                  ppvOut = qword_180650F30;
                  qword_180650F30[0] = &IamTraceLogging::`vftable';
                  atexit(_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                  DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_180650F30);
                  InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_180650F30);
                }
                v23 = (_DWORD *)*((_QWORD *)ppvOut + 1);
                if ( v23 && *v23 )
                {
                  ppvOut = 0LL;
                  if ( InitOnceBeginInitialize(
                         &`ShellPositionerTelemetry::Instance'::`2'::wrapper,
                         0,
                         (PBOOL)fPendinga,
                         &ppvOut)
                    && (_DWORD)fPending )
                  {
                    ppvOut = qword_180650F30;
                    qword_180650F30[0] = &IamTraceLogging::`vftable';
                    atexit(_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
                    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_180650F30);
                    InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_180650F30);
                  }
                  ShellPositionerTelemetry::PositionViewForActivation_(v34, a3, (unsigned int)v17);
                }
                v21 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, _QWORD, struct IUnknown *))(*(_QWORD *)v51 + 48LL))(
                        v51,
                        a3,
                        v22,
                        v15);
                v13 = v21;
                if ( v21 >= 0 )
                  goto LABEL_28;
                v43 = 745LL;
              }
              else
              {
                v27 = 1;
                if ( v10 )
                {
                  (**(void (__fastcall ***)(void *, GUID *, void **))v51)(
                    v51,
                    &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12,
                    (void **)fPendinga);
                  if ( fPending )
                  {
                    v27 = 0;
                    v35 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, struct IUnknown *, __int64))(*(_QWORD *)fPending + 40LL))(
                            fPending,
                            a3,
                            v15,
                            a6);
                    v13 = v35;
                    if ( v35 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x2DC,
                        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                        (const char *)(unsigned int)v35,
                        (int)v10);
                      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)fPendinga);
                      goto LABEL_29;
                    }
                  }
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)fPendinga);
                  if ( !v27 )
                    goto LABEL_28;
                }
                v45 = a7;
                v21 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers *, struct IUnknown *, __int64))(*(_QWORD *)v51 + 40LL))(
                        v51,
                        a3,
                        v15,
                        a6);
                v13 = v21;
                if ( v21 >= 0 )
                {
LABEL_28:
                  v13 = 0;
                  goto LABEL_29;
                }
                v43 = 738LL;
              }
              v40 = (unsigned int)v21;
            }
LABEL_77:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v43,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)v40,
              v45);
LABEL_29:
            v24 = v51;
            if ( v51 )
            {
              v51 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
            }
            goto LABEL_31;
          }
LABEL_67:
          v40 = (unsigned int)v13;
          v43 = 703LL;
          goto LABEL_77;
        }
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, void **))(*(_QWORD *)ppvOut + 24LL))(
                ppvOut,
                (unsigned int)v17,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v51);
        v13 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x52C,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v19,
            v45);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          goto LABEL_17;
        }
      }
      v20 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v13 = 0;
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated,
      v45);
  }
LABEL_31:
  v25 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_33:
  if ( v11 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v13;
}
