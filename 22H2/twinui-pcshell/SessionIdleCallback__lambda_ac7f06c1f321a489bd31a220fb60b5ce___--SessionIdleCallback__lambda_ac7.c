/*
 * XREFs of SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___ @ 0x1804E6124
 * Callers:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____lambda_ac7f06c1f321a489bd31a220fb60b5ce__&_ @ 0x1804E6094 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce_____l.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_18053FF70;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 24) = a2[1];
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
