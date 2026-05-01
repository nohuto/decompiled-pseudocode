/*
 * XREFs of __anonymous_namespace_::GetScreenClippingAUMID_::_1_::dtor$0 @ 0x1802579CE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall _anonymous_namespace_::GetScreenClippingAUMID_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  HRESULT result; // eax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(HSTRING **)(a2 + 80));
  }
  return result;
}
