/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1801D781C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x1801DA9F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1801DA9F0.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180012708 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180012E10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180016380 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801E2308 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  HWND v4; // r12
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  int v7; // edi
  HWND v8; // r14
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+90h] [rbp+50h] BYREF
  HWND v19; // [rsp+98h] [rbp+58h] BYREF

  v17 = a2;
  v3 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  v7 = v6(v5, &v18);
  if ( v7 >= 0 )
  {
    v15[0] = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v18,
           (__int64)v15);
    if ( v7 >= 0 )
    {
      v7 = WindowFromViewWrapper(
             (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v18,
             &v19);
      v4 = v19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  }
  v16 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    v7 = v10(v9, &v16);
    if ( v7 >= 0 )
    {
      v7 = WindowFromViewWrapper(
             (__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v16,
             &v19);
      v8 = v19;
    }
  }
  v17 = 0;
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v17);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v7 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 72LL))(*(_QWORD *)(a1 + 8), (unsigned int)v7);
  }
  else
  {
    v19 = *(HWND *)(a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v12);
      v13[2] = 0LL;
      if ( v13 + 2 != &v19 )
      {
        v13[2] = v11;
        v19 = 0LL;
      }
      *v13 = off_18050D7E8;
      v3 = v13;
    }
    v7 = CAppViewManager::_SwitchAsyncWorker(*(_QWORD *)a1, v4, v8, v17, v16, v3, v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v7;
}
