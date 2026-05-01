/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d35354d926b4f7c0d2efe226c9ec2890___ @ 0x1800CE11C
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803B8294 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890___::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890_____lambda_d35354d926b4f7c0d2efe226c9ec2890___ @ 0x1800CDC38 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d35354d926b4f7c0d2efe226c9ec2890___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890___::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890_____lambda_d35354d926b4f7c0d2efe226c9ec2890___(
           (__int64)v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
