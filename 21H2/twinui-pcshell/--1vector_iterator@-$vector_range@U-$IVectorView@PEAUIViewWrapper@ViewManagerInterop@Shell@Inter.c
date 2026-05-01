/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801B7840
 * Callers:
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x1801C7B6E (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x1801C7B7A (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x18032474E (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x18032475A (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 16));
}
