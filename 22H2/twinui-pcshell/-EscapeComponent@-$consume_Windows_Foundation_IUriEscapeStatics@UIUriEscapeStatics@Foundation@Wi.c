/*
 * XREFs of ?EscapeComponent@?$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800B2AA8
 * Callers:
 *     ??$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@Z @ 0x1800B0D08 (--$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::EscapeComponent(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  winrt::check_hresult(v5);
  *a2 = v7;
  return a2;
}
