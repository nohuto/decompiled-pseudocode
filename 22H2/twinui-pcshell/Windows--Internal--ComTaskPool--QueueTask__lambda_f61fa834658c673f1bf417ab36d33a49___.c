/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f61fa834658c673f1bf417ab36d33a49___ @ 0x1800CE1A8
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803BCB80 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49___::CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49_____lambda_f61fa834658c673f1bf417ab36d33a49___ @ 0x1800CDC9C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f61fa834658c673f1bf417ab36d33a49___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49___::CTaskWrapper__lambda_f61fa834658c673f1bf417ab36d33a49_____lambda_f61fa834658c673f1bf417ab36d33a49___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
