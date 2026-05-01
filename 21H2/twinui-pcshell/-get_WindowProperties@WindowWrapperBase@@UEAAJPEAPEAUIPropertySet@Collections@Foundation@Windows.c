/*
 * XREFs of ?get_WindowProperties@WindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180351280
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a593a494a4aebc1c108e45eda2022239___ @ 0x18034CBE4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a593a494a4aebc1c108e45eda2022239.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::get_WindowProperties(
        WindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  struct Windows::Foundation::Collections::IPropertySet **v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    if ( *((_QWORD *)this + 14) )
    {
      *(_QWORD *)v9 = (char *)this - 16;
      *(_QWORD *)&v9[2] = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a593a494a4aebc1c108e45eda2022239___(
             v6,
             CurrentThreadId,
             (__int128 *)v9);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1363LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x558,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
