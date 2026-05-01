/*
 * XREFs of ?SetShellCloak@WindowWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180083C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::SetShellCloak(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 288);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                     *(_QWORD *)(a1 + 288),
                     &v9);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, *(int *)(a1 + 304), a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCF,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
