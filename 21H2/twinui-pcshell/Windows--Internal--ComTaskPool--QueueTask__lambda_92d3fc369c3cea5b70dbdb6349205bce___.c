/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___ @ 0x1802D4A00
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802E2550 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce_____lambda_92d3fc369c3cea5b70dbdb6349205bce___ @ 0x1802D2D90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce_____lambda_92d3fc369c3cea5b70dbdb6349205bce___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
