/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$5 @ 0x1801C7B86
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
