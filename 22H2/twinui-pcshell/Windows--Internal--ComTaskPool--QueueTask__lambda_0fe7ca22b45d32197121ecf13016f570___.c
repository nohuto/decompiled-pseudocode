/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0fe7ca22b45d32197121ecf13016f570___ @ 0x1804E0E5C
 * Callers:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1804E10E0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570_____lambda_0fe7ca22b45d32197121ecf13016f570___ @ 0x1804E0DD8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0fe7ca22b45d32197121ecf13016f570___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570_____lambda_0fe7ca22b45d32197121ecf13016f570___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
