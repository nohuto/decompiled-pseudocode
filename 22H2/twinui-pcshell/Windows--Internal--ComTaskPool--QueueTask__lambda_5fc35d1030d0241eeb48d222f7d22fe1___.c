/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___ @ 0x1800CE08C
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDB60 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1_____lambda_5fc35d1030d0241eeb48d222f7d22fe1___ @ 0x1800CDB94 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1_____lambda_5fc35d1030d0241eeb48d222f7d22fe1___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
