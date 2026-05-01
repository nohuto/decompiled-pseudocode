/*
 * XREFs of _lambda_a9307fb14462ef19126b81021743ae0c_::operator() @ 0x180062BB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___::Run @ 0x180062BA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a9307fb14462ef19126b81021743ae0c_::operator()(_QWORD *a1)
{
  PCWSTR StringRawBuffer; // rdi
  int v3; // edx
  int v4; // edx
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 288LL) + 184LL))(*(_QWORD *)(*a1 + 288LL), &v7);
  if ( !v7 )
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 312LL), 0LL);
  v8 = -1LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 632LL))(*a1 + 8LL, &v8);
  v3 = *((_DWORD *)a1 + 6);
  if ( !v3 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v7 + 24LL))(
      v7,
      StringRawBuffer,
      v8,
      a1[2],
      0);
LABEL_5:
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 288LL) + 208LL))(
      *(_QWORD *)(*a1 + 288LL),
      &SRWLock);
    v5 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 136LL))(*a1) - 4 > 1) + 2;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
      v7,
      StringRawBuffer,
      v8,
      a1[2],
      v5);
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
      v7,
      StringRawBuffer,
      v8,
      a1[2],
      1);
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  if ( v4 == 1 )
    goto LABEL_5;
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
