/*
 * XREFs of _lambda_ef1ee2ad9bb2cc2c534b77abec71acbc_::operator() @ 0x1800CAEF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___::Run @ 0x1800CB270 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18031F93C (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ef1ee2ad9bb2cc2c534b77abec71acbc_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rdi
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0LL;
  v1 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
    v3 = *(_QWORD *)v2;
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(**(_QWORD **)v2 + 64LL);
    v5 = v14;
    v14 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
    v6 = v4(v3, &v14);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2123LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      v7 = (__int64)v14;
      LOBYTE(v13) = 0;
      v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v14);
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v13);
      v9 = retaddr;
      if ( v8 >= 0 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      1594LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800CAFE3LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x850,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
