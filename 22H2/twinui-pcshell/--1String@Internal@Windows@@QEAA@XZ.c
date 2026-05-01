/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1801B7634
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$29 @ 0x1801738C0 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$29.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x1801742EE (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x18031B3CE (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
