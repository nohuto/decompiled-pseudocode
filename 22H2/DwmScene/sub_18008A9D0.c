/*
 * XREFs of sub_18008A9D0 @ 0x18008A9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 *     sub_1800EB1E0 @ 0x1800EB1E0 (sub_1800EB1E0.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

bool __fastcall sub_18008A9D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  bool result; // al

  result = 0;
  if ( (unsigned __int8)sub_1800EB1E0() )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Light `RTTI Type Descriptor',
           1);
    v5 = v4;
    if ( *(_DWORD *)(v4 + 128) == *(_DWORD *)(a1 + 128)
      && *(_DWORD *)(v4 + 120) == *(_DWORD *)(a1 + 120)
      && *(_BYTE *)(v4 + 124) == *(_BYTE *)(a1 + 124)
      && !sub_18008A608((__m128 *)(v4 + 88), (__m128 *)(a1 + 88))
      && *(float *)(v5 + 104) == *(float *)(a1 + 104)
      && *(float *)(v5 + 116) == *(float *)(a1 + 116)
      && *(float *)(v5 + 112) == *(float *)(a1 + 112)
      && *(_DWORD *)(v5 + 108) == *(_DWORD *)(a1 + 108) )
    {
      return 1;
    }
  }
  return result;
}
