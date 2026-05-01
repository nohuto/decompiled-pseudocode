/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___ @ 0x1800CE2C8
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803BEA80 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f_____lambda_43e2ea7707e3cc3476f49dcfffc6812f___ @ 0x1800CD948 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi

  v5 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f_____lambda_43e2ea7707e3cc3476f49dcfffc6812f___(
           v5,
           a4);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 10000LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
