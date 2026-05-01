/*
 * XREFs of _lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator() @ 0x180025C58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_946ff4b2cd2342ecd6351b66005f8fb8___::Run @ 0x180025C30 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_946ff4b2cd2342ecd6351b66005f8fb8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D038 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180025ED0 (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18008508C (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB3F8 (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator()(unsigned int **a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, __int64 *); // r15
  unsigned int v5; // edi
  int *v6; // rax
  int v7; // r12d
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64 *); // r14
  __int64 v34; // rcx
  int v35; // eax
  int v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v40; // [rsp+80h] [rbp+8h] BYREF
  __int64 v41; // [rsp+88h] [rbp+10h] BYREF
  __int64 v42; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v43; // [rsp+98h] [rbp+20h] BYREF

  v5 = **a1;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>(
    a1[1] + 12,
    &v37);
  v6 = (int *)a1[2];
  v7 = *v6;
  v41 = 0LL;
  if ( *v6 )
  {
    if ( *v6 > 0 )
    {
      if ( *v6 <= 2 )
      {
        v14 = (__int64 *)*((_QWORD *)a1[1] + 6);
        v15 = *v14;
        v41 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v15 + 48))(v14, v5, 0LL, &v41);
        v17 = retaddr;
        if ( v16 >= 0 )
          goto LABEL_6;
LABEL_31:
        wil::details::in1diag3::Throw_Hr(
          v17,
          (void *)0xC4,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v16,
          v36);
        goto LABEL_32;
      }
      switch ( *v6 )
      {
        case 4:
          v8 = (__int64 *)*((_QWORD *)a1[1] + 6);
          v9 = *v8;
          v41 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v9 + 48))(v8, v5, 1LL, &v41);
          v11 = retaddr;
          if ( v10 >= 0 )
            goto LABEL_6;
          goto LABEL_26;
        case 3:
          v40 = 1;
          v1 = 0LL;
          v43 = 0LL;
          v42 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v42);
          v18 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                  &v42,
                  &v40);
          v2 = (unsigned int)v18;
          if ( v18 >= 0 )
          {
            v1 = v42;
            v42 = 0LL;
            v43 = (__int64 *)v1;
            v2 = 0LL;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v42);
          v19 = retaddr;
          if ( (int)v2 >= 0 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v37 + 56LL))(v37, v5, v1);
            v21 = retaddr;
            if ( v20 >= 0 )
            {
              v2 = *((_QWORD *)a1[1] + 6);
              v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
              v22 = v41;
              v41 = 0LL;
              if ( !v22 )
              {
LABEL_21:
                v23 = v3(v2, v5, 0LL, &v41);
                if ( v23 >= 0 )
                {
                  if ( v1 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
                  goto LABEL_6;
                }
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xCF,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                  (const char *)(unsigned int)v23,
                  v36);
                goto LABEL_31;
              }
LABEL_29:
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              goto LABEL_21;
            }
LABEL_28:
            wil::details::in1diag3::Throw_Hr(
              v21,
              (void *)0xCC,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v20,
              v36);
            goto LABEL_29;
          }
LABEL_27:
          wil::details::in1diag3::Throw_Hr(
            v19,
            (void *)0xCB,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v2,
            v36);
          goto LABEL_28;
        case 5:
          goto LABEL_6;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)0x8000FFFFLL,
      v36);
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0xD4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v10,
      v36);
    goto LABEL_27;
  }
LABEL_32:
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)a1[1] + 35) + 192LL))(
    *((_QWORD *)a1[1] + 35),
    v38,
    v5);
  v40 = 0;
  v24 = v38[0];
  if ( v38[0] )
    goto LABEL_42;
  v43 = 0LL;
  v25 = (__int64 *)*((_QWORD *)a1[1] + 6);
  v26 = *v25;
  v43 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v26 + 80))(v25, v5, &v43);
  if ( v27 >= 0 )
  {
    v42 = 0LL;
    v28 = *v43;
    v42 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v28 + 64))(v43, &v42);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAD,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v29,
        v36);
LABEL_37:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      goto LABEL_38;
    }
    if ( !v42 )
      goto LABEL_37;
    v31 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 80LL))(v42, &v40);
    if ( v31 >= 0 )
      goto LABEL_37;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v31,
      v36);
LABEL_42:
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 256LL))(v24);
    v40 = v30;
    goto LABEL_43;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xAA,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
    (const char *)(unsigned int)v27,
    v36);
LABEL_38:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
  v30 = v40;
LABEL_43:
  if ( v30 )
  {
    v32 = *((_QWORD *)a1[1] + 23);
    v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 56LL);
    v34 = v41;
    v41 = 0LL;
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v30 = v40;
    }
    v35 = v33(v32, v30, &v41);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBC,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v35,
        v36);
  }
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v38);
LABEL_6:
  if ( v7 != 3 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 56LL))(v37, v5, 0LL);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE9,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12,
        v36);
      JUMPOUT(0x180182847LL);
    }
  }
  ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
    *a1,
    a1[2]);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  return 0LL;
}
