/*
 * XREFs of sub_180115510 @ 0x180115510
 * Callers:
 *     sub_18011571C @ 0x18011571C (sub_18011571C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180115510(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *result; // rax
  __int64 v7; // rcx

  result = operator new(0x48uLL);
  v7 = *a4;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)v7;
  *((_OWORD *)result + 3) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 15LL;
  *(_BYTE *)v7 = 0;
  result[8] = 0LL;
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
