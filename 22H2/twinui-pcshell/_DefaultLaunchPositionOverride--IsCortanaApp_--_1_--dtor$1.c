/*
 * XREFs of _DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor$1 @ 0x1801753B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  HRESULT result; // eax

  result = *(_DWORD *)(a2 + 104) & 2;
  if ( result )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>((HSTRING *)(a2 + 120));
  }
  return result;
}
