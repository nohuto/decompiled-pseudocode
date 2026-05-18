/*
 * XREFs of sub_1800A4A30 @ 0x1800A4A30
 * Callers:
 *     sub_18008C68C @ 0x18008C68C (sub_18008C68C.c)
 *     sub_18008CB54 @ 0x18008CB54 (sub_18008CB54.c)
 *     sub_180094970 @ 0x180094970 (sub_180094970.c)
 *     sub_180096830 @ 0x180096830 (sub_180096830.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A4A30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 464);
  }
  *a2 = *(_QWORD *)(a1 + 456);
  result = a2;
  a2[1] = v2;
  return result;
}
