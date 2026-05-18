/*
 * XREFs of sub_18007FC40 @ 0x18007FC40
 * Callers:
 *     sub_18007FCE4 @ 0x18007FCE4 (sub_18007FCE4.c)
 *     sub_1800BCF20 @ 0x1800BCF20 (sub_1800BCF20.c)
 * Callees:
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 */

_QWORD *__fastcall sub_18007FC40(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  sub_1800839A4(a1);
  v4 = *(_QWORD **)(a1 + 32);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != *(_QWORD **)(a1 + 40) )
  {
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    *a2 = *v4;
    a2[1] = v5;
  }
  return a2;
}
