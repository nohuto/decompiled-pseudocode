/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$1 @ 0x1800F69CA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 224) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 224) &= ~2u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(a2 + 40);
  }
  return result;
}
