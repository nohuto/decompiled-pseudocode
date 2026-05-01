/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___ @ 0x180096A24
 * Callers:
 *     _lambda_8d958b4643e24e2ce219100e0108e65c_::operator() @ 0x180096FE4 (_lambda_8d958b4643e24e2ce219100e0108e65c_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764_____lambda_2e6c0e67d25ef7981bec7826e7d1a764___ @ 0x1800964C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764_____lambda_2e6c0e67d25ef7981bec7826e7d1a764___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
