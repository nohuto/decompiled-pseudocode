/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$23 @ 0x1800F68C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 224) & 0x40;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 224) &= ~0x40u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(a2 + 32);
  }
  return result;
}
