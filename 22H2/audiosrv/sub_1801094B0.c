/*
 * XREFs of sub_1801094B0 @ 0x1801094B0
 * Callers:
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_18010933C @ 0x18010933C (sub_18010933C.c)
 */

__int64 __fastcall sub_1801094B0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    sub_18010933C(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = sub_180008EAC(0x10uLL);
    v5 = a1[1];
  }
  v7 = *(_QWORD **)(v5 + 8 * v6);
  *v7 = 0LL;
  v7[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *v7 = *a2;
  result = a2[1];
  v7[1] = result;
  ++a1[4];
  return result;
}
