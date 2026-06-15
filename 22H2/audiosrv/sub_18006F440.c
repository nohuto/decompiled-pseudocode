/*
 * XREFs of sub_18006F440 @ 0x18006F440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006F440(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18014A998;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
