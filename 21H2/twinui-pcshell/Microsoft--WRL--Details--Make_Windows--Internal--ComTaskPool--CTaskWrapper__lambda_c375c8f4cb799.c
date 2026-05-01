/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c_____lambda_c375c8f4cb799a2f5bee00a6619de85c___ @ 0x18006BB10
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___ @ 0x18006B9F4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c_____lambda_c375c8f4cb799a2f5bee00a6619de85c___(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdi

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[2] = 0LL;
    if ( v6 + 2 != a2 )
    {
      v6[2] = *a2;
      *a2 = 0LL;
    }
    v7 = a2[1];
    v8 = a2 + 2;
    v6[3] = v7;
    v6[4] = 0LL;
    if ( v6 + 4 != v8 )
    {
      v6[4] = *v8;
      *v8 = 0LL;
    }
    v6[5] = v8[1];
    *v6 = off_1804FE2F0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v5);
    *a1 = (__int64)v6;
  }
  return a1;
}
