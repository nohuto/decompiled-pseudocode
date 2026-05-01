/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_IAsyncOperation_winrt::Windows::Foundation::IAsyncOperation_winrt::hstring__winrt::hstring_::GetResults_::_1_::dtor$0 @ 0x18009C974
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation_winrt::Windows::Foundation::IAsyncOperation_winrt::hstring__winrt::hstring_::GetResults_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(_QWORD *)(a2 + 72));
  }
  return result;
}
