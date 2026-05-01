/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId_::_1_::dtor$2 @ 0x1800F249B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a2 + 56));
  }
  return result;
}
