/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_ @ 0x1803F9BEC
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1803FA180 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&___lambda_1837cd2421f43b992ba1f4107d6eca8c__&_ @ 0x1803F99EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1837cd2421f43b992ba1f4107d6eca8c____(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c____::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c______lambda_1837cd2421f43b992ba1f4107d6eca8c____(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
