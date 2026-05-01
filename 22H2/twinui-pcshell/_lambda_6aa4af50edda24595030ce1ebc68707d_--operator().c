/*
 * XREFs of _lambda_6aa4af50edda24595030ce1ebc68707d_::operator() @ 0x18006BC18
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6aa4af50edda24595030ce1ebc68707d___::Run @ 0x18006BBF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6aa4af50edda24595030ce1ebc68707d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB4C8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18034B91C (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_6aa4af50edda24595030ce1ebc68707d_::operator()(_DWORD **a1)
{
  HWND v1; // rbx
  __int64 v2; // rdi
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  HSTRING v7; // rcx
  wil::details::in1diag3 *v8; // rcx
  _QWORD **v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  _QWORD **v13; // rbx
  HSTRING v14; // rcx
  wil::details::in1diag3 *v15; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  HSTRING string; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING newString; // [rsp+50h] [rbp+8h] BYREF
  __int64 v27; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v28; // [rsp+60h] [rbp+18h] BYREF
  __int64 v29; // [rsp+68h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)*a1 + 13) + 112LL))(*((_QWORD *)*a1 + 13), *a1 + 28);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      (int)string);
    goto LABEL_18;
  }
  string = 0LL;
  v2 = *((_QWORD *)*a1 + 41);
  v1 = *(HWND *)(*(_QWORD *)v2 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, HSTRING *))v1)(v2, &string);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x81,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      (int)string);
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x82,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      (int)string);
LABEL_20:
    (*a1)[76] = *a1[1];
    WindowReadyState::SetWindow(*a1 + 92, v1, (unsigned int)*a1[2]);
    goto LABEL_7;
  }
  v1 = (HWND)*a1;
  LODWORD(v2) = WindowsDuplicateString(string, &newString);
  if ( (int)v2 >= 0 )
  {
    v7 = (HSTRING)*((_QWORD *)v1 + 39);
    *((_QWORD *)v1 + 39) = newString;
    WindowsDeleteString(v7);
  }
  v8 = retaddr;
  if ( (int)v2 < 0 )
    goto LABEL_19;
  if ( *((_QWORD *)*a1 + 16) )
  {
    v1 = (HWND)(int)*a1[1];
    EnumPropsExW(v1, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 52));
    if ( IsWindowVisible(v1) )
      goto LABEL_20;
  }
LABEL_7:
  v9 = (_QWORD **)*a1;
  if ( (*a1)[84] != 1 )
    goto LABEL_13;
  newString = 0LL;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
    v9 + 41,
    &v27);
  v10 = v27;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 192LL);
  WindowsDeleteString(newString);
  newString = 0LL;
  v12 = v11(v10, &newString);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v12,
      (int)string);
  }
  else
  {
    v13 = (_QWORD **)*a1;
    LODWORD(v11) = WindowsDuplicateString(newString, &v28);
    if ( (int)v11 >= 0 )
    {
      v14 = (HSTRING)v13[71];
      v13[71] = v28;
      WindowsDeleteString(v14);
    }
    v15 = retaddr;
    if ( (int)v11 >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      WindowsDeleteString(newString);
LABEL_13:
      if ( *a1[2] != 1 )
        goto LABEL_14;
      goto LABEL_23;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v15,
    (void *)0x9B,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)(unsigned int)v11,
    (int)string);
LABEL_23:
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))*a1 + 41))(
    *((_QWORD *)*a1 + 41),
    &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
    v24);
  if ( v24[0] )
  {
    v29 = 0LL;
    v17 = *(_QWORD *)v24[0];
    v29 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v17 + 112))(v24[0], &v29);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA5,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v18,
        (int)string);
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 48LL))(v29, &newString);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA8,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v19,
        (int)string);
    if ( (_DWORD)newString )
    {
      (*a1)[120] = (_DWORD)newString;
      *((_BYTE *)*a1 + 484) = 1;
    }
    v28 = 0LL;
    v20 = *(_QWORD *)v24[0];
    v28 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(v20 + 304))(v24[0], &v28);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB1,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v21,
        (int)string);
    v22 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v28 + 216LL))(v28, &v27);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v22,
        (int)string);
    if ( (_DWORD)v27 )
    {
      *((_BYTE *)*a1 + 486) = 0;
      *((_BYTE *)*a1 + 485) = 1;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v24);
LABEL_14:
  WindowsDeleteString(string);
  return 0LL;
}
