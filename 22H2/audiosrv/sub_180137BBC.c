/*
 * XREFs of sub_180137BBC @ 0x180137BBC
 * Callers:
 *     sub_180060188 @ 0x180060188 (sub_180060188.c)
 * Callees:
 *     sub_180133EDC @ 0x180133EDC (sub_180133EDC.c)
 *     sub_180137CBC @ 0x180137CBC (sub_180137CBC.c)
 *     sub_180137DB0 @ 0x180137DB0 (sub_180137DB0.c)
 *     sub_180137DD0 @ 0x180137DD0 (sub_180137DD0.c)
 */

_QWORD *__fastcall sub_180137BBC(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *result; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  if ( 2 * v5 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( (unsigned __int64)(2 * v5) > 0x1FFFFFFFFFFFFFFFLL )
      sub_180137DB0();
    sub_180137CBC(a1 + 3, 2 * v5);
  }
  v10 = a1[1];
  sub_180137DD0(a1 + 3, 2 * v5, &v10);
  a1[7] = v5;
  a1[6] = v5 - 1;
  result = (_QWORD *)a1[1];
  if ( (_QWORD *)*result != result )
  {
    v7 = (__int64 *)result[1];
    do
    {
      v8 = *(__int64 **)a1[1];
      result = (_QWORD *)sub_180133EDC(a1, (__int64)v9, v8 + 2, v8);
    }
    while ( v8 != v7 );
  }
  return result;
}
