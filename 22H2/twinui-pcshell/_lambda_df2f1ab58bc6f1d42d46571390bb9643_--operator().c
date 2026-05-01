/*
 * XREFs of _lambda_df2f1ab58bc6f1d42d46571390bb9643_::operator() @ 0x18034DDCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df2f1ab58bc6f1d42d46571390bb9643___::Run @ 0x18034F460 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_df2f1ab58bc6f1d42d46571390bb9643___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB58C (--$query@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_df2f1ab58bc6f1d42d46571390bb9643_::operator()(_QWORD **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 **); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // r9
  __int64 result; // rax
  HSTRING string; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v27[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  char v30; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v31; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v26 = 0LL;
  v2 = (*a1)[16];
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1477LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::query<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
      &v26,
      (__int64)v27);
    v25 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*a1[1];
    v5 = *v4;
    v25 = 0LL;
    v6 = (*v5)(v4, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v25);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1482LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    v31 = 0LL;
    v7 = *v25;
    v31 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v7 + 48))(v25, &v31);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1485LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8);
    v30 = 0;
    LOBYTE(v29) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v31 + 56))(v31, &v29);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1490LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    while ( (_BYTE)v29 )
    {
      v24 = 0LL;
      v10 = *v31;
      v24 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v31, &v24);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1495LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v11);
      string = 0LL;
      v32 = 0LL;
      v12 = v24;
      v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v14 = v13(v12, &string);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1499LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14);
      v15 = v24;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL);
      v17 = v32;
      v32 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v18 = v16(v15, &v32);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1500LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v18);
      v19 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64, char *))(*(_QWORD *)v27[0] + 80LL))(
              v27[0],
              string,
              v32,
              &v30);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1501LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v19);
      v20 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v31 + 64))(v31, &v29);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1503LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
    if ( v25 )
      (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
    if ( v27[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E2,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v21);
  }
  return result;
}
