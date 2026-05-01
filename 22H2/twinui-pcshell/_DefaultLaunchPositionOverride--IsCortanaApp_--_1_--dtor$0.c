/*
 * XREFs of _DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor$0 @ 0x180175383
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  HRESULT result; // eax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>((HSTRING *)(a2 + 32));
  }
  return result;
}
