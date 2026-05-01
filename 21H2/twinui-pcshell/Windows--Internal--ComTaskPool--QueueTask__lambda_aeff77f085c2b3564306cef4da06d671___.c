/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_aeff77f085c2b3564306cef4da06d671___ @ 0x1804A2014
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@Z @ 0x1804A24DC (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV-$ComPtr@UIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671___::CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671_____lambda_aeff77f085c2b3564306cef4da06d671___ @ 0x1804A1994 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_aeff77f085c2b3564306cef4da06d671___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671___::CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671_____lambda_aeff77f085c2b3564306cef4da06d671___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
