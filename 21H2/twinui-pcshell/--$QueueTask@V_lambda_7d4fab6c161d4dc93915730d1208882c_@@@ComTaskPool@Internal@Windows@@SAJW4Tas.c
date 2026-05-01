/*
 * XREFs of ??$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x18037EEA4
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180380E60 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?0V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@?$CTaskWrapper@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x18037E704 (--$-0V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@-$CTaskWrapper@V_lambda_7d4fab6c161d4dc9391573.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_7d4fab6c161d4dc93915730d1208882c_>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
