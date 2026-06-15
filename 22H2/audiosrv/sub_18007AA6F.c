/*
 * XREFs of sub_18007AA6F @ 0x18007AA6F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 */

__int64 __fastcall sub_18007AA6F(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 208) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 208) &= ~1u;
    return sub_1800C2A10(a2 + 56);
  }
  return result;
}
