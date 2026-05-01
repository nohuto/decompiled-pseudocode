/*
 * XREFs of ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@_N@Z @ 0x1801481E4
 * Callers:
 *     ??$?RAEBUIPropertyValueStatics@Foundation@Windows@winrt@@@_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIPropertyValueStatics@234@@Z @ 0x180146B28 (--$-RAEBUIPropertyValueStatics@Foundation@Windows@winrt@@@_lambda_6b01e8b3243de8eafca067c27e1d6a.c)
 *     ??$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@Z @ 0x180146C78 (--$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  unsigned int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v3 = *a1;
  v4 = a2;
  v7 = 0LL;
  LOBYTE(a2) = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD **))(*(_QWORD *)v3 + 136LL))(v3, a2, &v7);
  winrt::check_hresult(v5);
  result = v4;
  *v4 = v7;
  return result;
}
