/*
 * XREFs of _lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator() @ 0x1801FD4C4
 * Callers:
 *     wistd::__function::__func__lambda_0d2ae2ebb58457bb6356c5e49aa852a2__void___cdecl(void)_::operator() @ 0x1801FDA20 (wistd--__function--__func__lambda_0d2ae2ebb58457bb6356c5e49aa852a2__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID v3; // rsi
  RTL_SRWLOCK *i; // rax
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h]

  v2 = *a1 + 84;
  v9 = v2;
  AcquireSRWLockShared(v2);
  v3 = 0LL;
  for ( i = *a1; v3 < (*a1)[86].Ptr; i = *a1 )
  {
    v8 = 0LL;
    Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))i[85].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v6 = (**Ptr[(_QWORD)v3])(Ptr[(_QWORD)v3], &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v8);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v3 = (char *)v3 + 1;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
