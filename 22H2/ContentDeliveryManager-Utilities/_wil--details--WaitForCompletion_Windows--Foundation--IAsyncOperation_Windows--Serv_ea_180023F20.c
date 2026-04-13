/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_______::_2_::CompletionDelegate::_scalar_deleting_destructor_ @ 0x180023F20
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_______::_2_::CompletionDelegate::_scalar_deleting_destructor_(
        __int64 a1,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx
  __int64 v5; // rcx

  v2 = (char)a2;
  v4 = *(wil::details **)(a1 + 56);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *(_DWORD *)(a1 + 44) = -1073741823;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (v2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
