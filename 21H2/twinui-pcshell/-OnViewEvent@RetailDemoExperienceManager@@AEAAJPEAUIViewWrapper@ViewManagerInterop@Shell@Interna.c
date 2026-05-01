/*
 * XREFs of ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18025C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015864 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D844 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D884 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025DB20 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall RetailDemoExperienceManager::OnViewEvent(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, char *); // rbx
  __int64 **v10; // r15
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  LONG WindowLongW; // eax
  LONG v26; // eax
  int v27; // eax
  _OWORD *v28; // rdi
  _OWORD *v29; // rax
  _OWORD *v30; // rbx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _WORD *v34; // rcx
  __int64 result; // rax
  int v36[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+28h] [rbp-60h] BYREF
  __int128 v38; // [rsp+30h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v40[24]; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v42; // [rsp+90h] [rbp+8h]
  __int64 *v43; // [rsp+A0h] [rbp+18h] BYREF
  HWND hWnd; // [rsp+A8h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 464));
  try
  {
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        640LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    if ( v42 )
    {
      if ( v42 == 4 )
      {
        RetailDemoExperienceManager::_RestoreWorkingArea(this);
        RetailDemoExperienceManager::_SetDefaults(this);
        v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 25));
        if ( v33 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            696LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v33);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 30);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 25);
        v34 = (_WORD *)((char *)this + 248);
        if ( *((_QWORD *)this + 34) >= 8uLL )
          v34 = (_WORD *)*((_QWORD *)this + 31);
        *((_QWORD *)this + 33) = 0LL;
        *v34 = 0;
        PulseEvent(*((HANDLE *)this + 57));
      }
    }
    else
    {
      v8 = *((_QWORD *)this + 24);
      v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL);
      v10 = (__int64 **)((char *)this + 200);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 25);
      v11 = v9(v8, (char *)this + 200);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          644LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      v43 = 0LL;
      v12 = *v10;
      v13 = **v10;
      v43 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v13 + 32))(v12, &v43);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          648LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v14);
      v15 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 34) >= 8uLL )
        v15 = (_QWORD *)*v15;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*v43 + 72))(v43, v15, 1LL);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
      *(_QWORD *)v36 = 0LL;
      v17 = *v43;
      *(_QWORD *)v36 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, int *))(v17 + 144))(v43, v36);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          655LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v18);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v36 + 48LL))(*(_QWORD *)v36, 1LL, 1LL);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          656LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v36 + 32LL))(*(_QWORD *)v36, 0LL);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          657LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
      v21 = *((_QWORD *)this + 30);
      *((_QWORD *)this + 30) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v10 + 104))(*v10, *((_QWORD *)this + 30));
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          661LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v10 + 128))(*v10, 0LL);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          664LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v23);
      hWnd = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(*v43 + 24))(v43, &hWnd);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          668LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
      WindowLongW = GetWindowLongW(hWnd, -16);
      SetWindowLongW(hWnd, -16, WindowLongW & 0xFF30FFFF);
      v26 = GetWindowLongW(hWnd, -20);
      SetWindowLongW(hWnd, -20, v26 & 0xFFFFFEFF);
      v37 = 0LL;
      v27 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
              *((_QWORD *)this + 30),
              &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
              &v37);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5495LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v27);
      *(_QWORD *)&v38 = RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v38) = 0;
      *(_QWORD *)v40 = this;
      *(_OWORD *)&v40[8] = v38;
      v28 = 0LL;
      v29 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = v29;
      if ( v29 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v29);
        v30[1] = *(_OWORD *)v40;
        *((_QWORD *)v30 + 4) = *(_QWORD *)&v40[16];
        *(_QWORD *)v30 = off_180511D38;
        v28 = v30;
      }
      *(_QWORD *)&v38 = v28;
      v31 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v37 + 80LL))(v37, v28, (char *)this + 440);
      if ( v31 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          684LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v31);
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 392LL))(*((_QWORD *)this + 30), 4LL);
      if ( v32 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          687LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v32);
      RetailDemoExperienceManager::_Show(this);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v36);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C3,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v7);
  }
  return result;
}
