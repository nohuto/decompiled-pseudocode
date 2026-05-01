/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18006B310
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x18006B2F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x18006B460 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18006B5AC (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18008768C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadDataFromStateRepository(const unsigned __int16 *a1, HSTRING *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, PVOID, struct Windows::Internal::StateRepository::IApplication **); // rdi
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  int LocalizedDisplayNameForApp; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v15; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v16 = a1;
  wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v17);
  v15 = 0LL;
  v3 = v17;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v17 + 240LL);
  v15 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16, v5);
  v7 = v4(v3, 0LL, v6[1].Reserved.Reserved1, &v15);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x67,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v7,
      v13);
  }
  else
  {
    WindowsDeleteString(*a2);
    *a2 = 0LL;
    LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v15, a2);
    v9 = retaddr;
    if ( LocalizedDisplayNameForApp >= 0 )
      goto LABEL_3;
  }
  wil::details::in1diag3::_Log_Hr(
    v9,
    (void *)0x69,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)LocalizedDisplayNameForApp);
  v12 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2, &v16);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_3:
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v15 + 160LL))(
          v15,
          v14);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v10);
  else
    *((_BYTE *)a2 + 26) = v14[0] != 0;
  if ( v15 )
    (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
