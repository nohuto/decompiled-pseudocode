/*
 * XREFs of _wil::MakeOrThrow_WindowingEnvironmentSettings__::_1_::dtor$0 @ 0x18031F69C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180321788 (--1-$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_WindowingEnvironmentSettings__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentSettings>::~ComPtr<WindowingEnvironmentSettings>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
