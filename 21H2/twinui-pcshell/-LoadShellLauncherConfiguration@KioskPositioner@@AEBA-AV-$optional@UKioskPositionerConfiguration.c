/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D6D4C
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x18044CAB4 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18021DA40 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18021EFDC (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180449154 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x180449D58 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KioskPositioner::LoadShellLauncherConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  unsigned __int16 *StringRawBuffer; // rsi
  Win32PrimaryAppProxy *v11; // rdi
  int v12; // eax
  bool v13; // al
  HSTRING string; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-28h] BYREF
  Win32PrimaryAppProxy *v17; // [rsp+30h] [rbp-20h]
  Win32PrimaryAppProxy *v18; // [rsp+38h] [rbp-18h]
  bool v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  int v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+48h] BYREF

  v21 = a1;
  if ( !IsShellLauncherEnabledForCurrentUser() )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_BYTE *)a2 = 0;
    *(_BYTE *)(a2 + 16) = 0;
    return a2;
  }
  v18 = 0LL;
  v19 = 0;
  wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(&v16);
  v23 = 0LL;
  v3 = *v16;
  v23 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v3 + 48))(v16, 0LL, &v23);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v5,
      1081LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v22 = -1;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v23 + 80))(v23, &v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1083LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v6);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v9,
      1085LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  string = 0LL;
  v7 = *v23;
  string = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v7 + 64))(v23, &string);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_18;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
  if ( v22 == 1 )
  {
    v17 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
    v11 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v17, StringRawBuffer);
  }
  else
  {
    v11 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
    v17 = v11;
    *(_QWORD *)v11 = &UwpPrimaryAppProxy::`vftable';
    std::wstring::wstring((__int64)v11 + 8, StringRawBuffer);
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
    *((_QWORD *)v11 + 9) = -1LL;
  }
  v18 = v11;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v23 + 96))(v23, &v21);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1096LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_16;
  }
  v13 = (_BYTE)v21 != 0;
  v19 = (_BYTE)v21 != 0;
  v18 = 0LL;
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = v13;
  *(_BYTE *)(a2 + 16) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  if ( v16 )
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  return a2;
}
