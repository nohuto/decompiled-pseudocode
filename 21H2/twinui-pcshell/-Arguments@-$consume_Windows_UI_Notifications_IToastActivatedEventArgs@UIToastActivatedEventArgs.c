/*
 * XREFs of ?Arguments@?$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180148220
 * Callers:
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator() @ 0x180147F1C (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, &v6);
  winrt::check_hresult(v4);
  result = a2;
  *a2 = v6;
  return result;
}
