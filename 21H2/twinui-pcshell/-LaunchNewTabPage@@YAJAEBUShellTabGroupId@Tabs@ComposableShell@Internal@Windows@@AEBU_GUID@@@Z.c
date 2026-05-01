/*
 * XREFs of ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x180301D64
 * Callers:
 *     ?OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z @ 0x1803029F4 (-OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002A8A8 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E98 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BEF18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x1802DF954 (-GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILaunc.c)
 */

__int64 __fastcall LaunchNewTabPage(
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a1,
        GUID *rguid)
{
  int ActivationFactory; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64 *); // r14
  unsigned __int64 v11; // rdi
  UINT32 v12; // eax
  int v13; // eax
  int LauncherOptions; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64 *); // rdi
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::System::ILauncherOptions2 *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  OLECHAR sz[40]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Buffer[200]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v23 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  ActivationFactory = RoGetActivationFactory(v27, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v23);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 190LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_24;
  }
  StringFromGUID2(rguid, sz, 39);
  ActivationFactory = StringCchPrintfW(Buffer, 200LL, L"microsoft-edge:about:compass?correlationId=%s", sz);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 196LL;
    goto LABEL_5;
  }
  v9 = v23;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 48LL);
  v20 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( Buffer[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x1803020C0LL);
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11, v7, v8);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, Buffer, v12, v11);
  v13 = v10(v9, v27, &v20);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v21 = 0LL;
    LauncherOptions = GetLauncherOptions(a1, &v21);
    v5 = LauncherOptions;
    if ( LauncherOptions >= 0 )
    {
      v22 = 0LL;
      v27 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.System.Launcher",
        0x18u,
        0x17u);
      v15 = RoGetActivationFactory(v27, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v22);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v16 = v22;
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v22 + 72LL);
        v24 = 0LL;
        v18 = (**(__int64 (__fastcall ***)(struct Windows::System::ILauncherOptions2 *, GUID *, __int64 *))v21)(
                v21,
                &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
                &v25);
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            5481LL,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v18);
        v5 = v17(v16, v20, v25, &v24);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        if ( v5 >= 0 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCF,
          (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
          (const char *)(unsigned int)v5);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCC,
          (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
          (const char *)(unsigned int)v15);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)LauncherOptions);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)(unsigned int)v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
LABEL_24:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  return (unsigned int)v5;
}
