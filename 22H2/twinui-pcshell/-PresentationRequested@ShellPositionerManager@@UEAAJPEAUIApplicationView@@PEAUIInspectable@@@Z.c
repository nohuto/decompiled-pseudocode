/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180443F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18001C768 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800326D8 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800691E4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180082968 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D5EFC (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D5F4C (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180442CCC (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180443DB0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180444B14 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x180446000 (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  int PositionerPriorityForView; // eax
  unsigned int v7; // ebx
  struct IShellPositionerPriority *v8; // rdi
  int v9; // r12d
  __int64 (__fastcall *v10)(struct IApplicationView *, IUnknown **); // rbx
  int v11; // eax
  _QWORD *v12; // rax
  char v13; // r13
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  int v20; // eax
  __int64 v21; // rdx
  struct IShellPositionerPriority *v22; // rbx
  __int64 (__fastcall *v23)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rsi
  unsigned int v24; // r14d
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, _QWORD, struct IShellPositionerPriority **); // rbx
  struct IShellPositionerPriority *v27; // rbx
  __int64 (__fastcall *v28)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rsi
  int PositionerForMonitor; // eax
  __int64 v30; // rdx
  struct IInspectable *v31; // rsi
  __int64 (__fastcall *v32)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rbx
  int updated; // eax
  ShellPositionerManager *v34; // rcx
  __int64 v35; // rdx
  int v36; // edi
  int v37; // eax
  __int64 v38; // rdx
  struct IShellPositionerPriority *v40; // [rsp+40h] [rbp-C0h] BYREF
  void *v41; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v42; // [rsp+50h] [rbp-B0h] BYREF
  IUnknown *v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-A0h] BYREF
  void *v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  int v47[2]; // [rsp+78h] [rbp-88h] BYREF
  struct IShellPositionerPriority *v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v50; // [rsp+8Ch] [rbp-74h] BYREF
  struct IInspectable *v51; // [rsp+90h] [rbp-70h]
  ShellPositionerManager *v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  _QWORD v54[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v51 = a3;
  v52 = this;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v54,
    (__int64)"PresentationRequested");
  v54[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v54);
  v48 = 0LL;
  v53 = (__int64)this - 128;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v48);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v8 = v48;
    v9 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v48 + 24LL))(v48);
    v43 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
    v11 = v10(a2, &v43);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x246,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
      goto LABEL_58;
    }
    v12 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v41,
            (__int64)a3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(v12, (__int64)v47);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
    v42 = (struct IImmersiveMonitor *)v43;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v42);
    v13 = 0;
    v46 = 0LL;
    v14 = *(_QWORD *)v47;
    v15 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v47 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    if ( v15(v14, &v46) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v40,
        v46);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v40,
        (__int64)&v41);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v40);
      v16 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v41 + 56LL))(v41, &v49);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 595LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_31;
      }
      if ( v49 )
      {
        v13 = 1;
        if ( v49 > 1 )
        {
          v7 = -2147024809;
LABEL_31:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
LABEL_56:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v47);
          goto LABEL_57;
        }
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned int *))(*(_QWORD *)v41 + 48LL))(v41, 0LL, &v44);
        v7 = v16;
        if ( v16 < 0 )
        {
          v17 = 602LL;
          goto LABEL_13;
        }
        v40 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v47 + 40LL))(*(_QWORD *)v47, &v50) < 0 )
        {
          if ( v9 == 5 )
          {
            v7 = -2147467263;
            goto LABEL_30;
          }
          v24 = (*((_DWORD *)this + 4) == 1) + 1;
          v25 = *((_QWORD *)v52 + 6);
          v26 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v25 + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
          v20 = v26(v25, v24, &v40);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 623LL;
            goto LABEL_24;
          }
          v27 = v40;
          v28 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v40 + 88LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
          v20 = v28(v27, v44, &v42);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 624LL;
            goto LABEL_24;
          }
        }
        else
        {
          v18 = *((_QWORD *)this + 6);
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v18 + 40LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
          v20 = v19(v18, v50, &v40);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 608LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v20);
LABEL_30:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
            goto LABEL_31;
          }
          v22 = v40;
          v23 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v40 + 88LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
          v20 = v23(v22, v44, &v42);
          v7 = v20;
          if ( v20 < 0 )
          {
            v21 = 609LL;
            goto LABEL_24;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
    }
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v9,
                             v43,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v45);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v30 = 631LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_55:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
      goto LABEL_56;
    }
    if ( v13 && v9 && v9 != 6 )
    {
      v31 = v51;
    }
    else
    {
      v31 = v51;
      if ( (*(unsigned int (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v45 + 72LL))(
             v45,
             a2,
             v51) )
      {
        PositionerForMonitor = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v45 + 80LL))(
                                 v45,
                                 a2,
                                 v31);
        v7 = PositionerForMonitor;
        if ( PositionerForMonitor < 0 )
        {
          v30 = 642LL;
          goto LABEL_38;
        }
LABEL_54:
        wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v54);
        v7 = 0;
        goto LABEL_55;
      }
    }
    v40 = 0LL;
    v32 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    updated = v32(v8, &v40);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(v34, v40, a2, v42, v31);
      v7 = updated;
      if ( updated >= 0 )
      {
        v36 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v40 + 24LL))(v40);
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
        v37 = ShellPositionerManager::GetPositionerForMonitor(
                v36,
                (IUnknown *)v42,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v41);
        v7 = v37;
        if ( v37 >= 0 )
        {
          v37 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v40);
          v7 = v37;
          if ( v37 >= 0 )
          {
            v37 = ShellPositionerManager::PerformPositionerHandoff(
                    v53,
                    a2,
                    (__int64)v43,
                    (__int64)v42,
                    *(__int64 *)v47,
                    v9,
                    v36);
            v7 = v37;
            if ( v37 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
              goto LABEL_54;
            }
            v38 = 666LL;
          }
          else
          {
            v38 = 662LL;
          }
        }
        else
        {
          v38 = 659LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
LABEL_52:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
        goto LABEL_55;
      }
      v35 = 654LL;
    }
    else
    {
      v35 = 651LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v54);
  return v7;
}
