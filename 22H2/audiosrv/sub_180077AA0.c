/*
 * XREFs of sub_180077AA0 @ 0x180077AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 */

__int64 __fastcall sub_180077AA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_1800C2A10(a2 + 328);
  }
  return result;
}
