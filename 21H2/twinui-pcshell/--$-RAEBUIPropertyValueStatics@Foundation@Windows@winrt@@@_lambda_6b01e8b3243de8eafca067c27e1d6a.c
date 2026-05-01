/*
 * XREFs of ??$?RAEBUIPropertyValueStatics@Foundation@Windows@winrt@@@_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIPropertyValueStatics@234@@Z @ 0x180146C98
 * Callers:
 *     ??$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@Z @ 0x180146DE8 (--$call@AEAV_lambda_6b01e8b3243de8eafca067c27e1d6a44_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 * Callees:
 *     ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@_N@Z @ 0x180148354 (-CreateBoolean@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundat.c)
 */

__int64 __fastcall _lambda_6b01e8b3243de8eafca067c27e1d6a44_::operator()<winrt::Windows::Foundation::IPropertyValueStatics const &>(
        _BYTE **a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = **a1;
  winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
    &`winrt::impl::call_factory<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics,_lambda_6b01e8b3243de8eafca067c27e1d6a44_>'::`2'::factory,
    a2,
    a3);
  return a2;
}
