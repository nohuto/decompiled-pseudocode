/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f68384705a080bb04b4187854264e75d___ @ 0x1800CE258
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BCCA0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d___::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d_____lambda_f68384705a080bb04b4187854264e75d___ @ 0x1800CDD44 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f68384705a080bb04b4187854264e75d___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d___::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d_____lambda_f68384705a080bb04b4187854264e75d___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
