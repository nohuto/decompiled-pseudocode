/*
 * XREFs of sub_180120EF8 @ 0x180120EF8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F264 @ 0x18000F264 (sub_18000F264.c)
 */

__int64 __fastcall sub_180120EF8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return sub_18000F264((__int64 *)(a2 + 80));
  }
  return result;
}
