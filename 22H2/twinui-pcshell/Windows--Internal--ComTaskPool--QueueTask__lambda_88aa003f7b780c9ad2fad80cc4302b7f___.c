/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_88aa003f7b780c9ad2fad80cc4302b7f___ @ 0x1802F49E4
 * Callers:
 *     ?OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F7810 (-OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composabl.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f_____lambda_88aa003f7b780c9ad2fad80cc4302b7f___ @ 0x1802F401C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_88aa003f7b780c9ad2fad80cc4302b7f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f_____lambda_88aa003f7b780c9ad2fad80cc4302b7f___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
