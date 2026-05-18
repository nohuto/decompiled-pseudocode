/*
 * XREFs of sub_1800752F4 @ 0x1800752F4
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007A0C8 @ 0x18007A0C8 (sub_18007A0C8.c)
 *     sub_18007A284 @ 0x18007A284 (sub_18007A284.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800752F4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 976);
  }
  *a2 = *(_QWORD *)(a1 + 968);
  result = a2;
  a2[1] = v2;
  return result;
}
