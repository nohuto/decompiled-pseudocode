/*
 * XREFs of _CortanaExperienceHelpers::GetStoreCortanaAumId_::_1_::dtor$0 @ 0x18026280B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall CortanaExperienceHelpers::GetStoreCortanaAumId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  HRESULT result; // eax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>((HSTRING *)(a2 + 64));
  }
  return result;
}
