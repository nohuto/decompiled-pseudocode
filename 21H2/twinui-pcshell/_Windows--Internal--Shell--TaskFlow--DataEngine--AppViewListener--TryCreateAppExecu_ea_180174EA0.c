/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$4 @ 0x180174EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056C6C (--1-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>(*(__int64 **)(a2 + 408));
  }
  return result;
}
