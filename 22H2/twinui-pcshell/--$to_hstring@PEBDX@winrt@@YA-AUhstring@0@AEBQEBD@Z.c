/*
 * XREFs of ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x18021CF68
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180221B6B (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180221C3A (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x180221CDD (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180221D80 (_winrt--to_hresult_--_1_--catch$29.c)
 * Callees:
 *     MultiByteToWideChar_0 @ 0x1800917F3 (MultiByteToWideChar_0.c)
 *     WindowsDeleteStringBuffer_0 @ 0x1800948EE (WindowsDeleteStringBuffer_0.c)
 *     ??0hstring_builder@impl@winrt@@QEAA@I@Z @ 0x18021D65C (--0hstring_builder@impl@winrt@@QEAA@I@Z.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x180221E28 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::to_hstring<char const *,void>(_QWORD *a1, const CHAR **a2)
{
  const CHAR *v3; // rsi
  __int64 v4; // rdi
  UINT32 v5; // eax
  int cchWideChar; // ebp
  LPWSTR charBuffer; // [rsp+30h] [rbp-18h] BYREF
  HSTRING_BUFFER bufferHandle; // [rsp+38h] [rbp-10h]

  v3 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    winrt::impl::hstring_builder::hstring_builder(&charBuffer, v5);
    MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, charBuffer, cchWideChar);
    winrt::impl::hstring_builder::to_hstring(&charBuffer, a1);
    if ( bufferHandle )
      WindowsDeleteStringBuffer_0(bufferHandle);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
