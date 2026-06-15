/*
 * XREFs of sub_1800D401C @ 0x1800D401C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B7A3C @ 0x1800B7A3C (sub_1800B7A3C.c)
 */

__int64 __fastcall sub_1800D401C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 152) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    return sub_1800B7A3C((_QWORD *)(a2 + 56));
  }
  return result;
}
