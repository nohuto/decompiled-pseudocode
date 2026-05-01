/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_51d6f8f9b06e99048dd25aff80a12ac0___ @ 0x1800CDF6C
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803BD6BC (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0_____lambda_51d6f8f9b06e99048dd25aff80a12ac0___ @ 0x1800CDA68 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_51d6f8f9b06e99048dd25aff80a12ac0___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0_____lambda_51d6f8f9b06e99048dd25aff80a12ac0___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
