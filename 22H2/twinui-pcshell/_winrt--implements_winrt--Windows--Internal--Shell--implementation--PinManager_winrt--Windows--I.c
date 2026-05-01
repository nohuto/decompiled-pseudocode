/*
 * XREFs of _winrt::implements_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::PinManager_IPinManagerInterop_winrt::immersive_shell_component_::get_weak_::_1_::dtor$2 @ 0x18014585D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::implements_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::PinManager_IPinManagerInterop_winrt::immersive_shell_component_::get_weak_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 48));
  }
  return result;
}
