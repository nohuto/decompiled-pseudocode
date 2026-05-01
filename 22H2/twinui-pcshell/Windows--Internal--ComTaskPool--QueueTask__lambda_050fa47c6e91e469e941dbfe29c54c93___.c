/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___ @ 0x18009D8B4
 * Callers:
 *     ?TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AAAD4 (-TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93_____lambda_050fa47c6e91e469e941dbfe29c54c93___ @ 0x18009CC74 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93_____lambda_050fa47c6e91e469e941dbfe29c54c93___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
