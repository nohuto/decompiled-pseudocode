/*
 * XREFs of sub_1800DD7A0 @ 0x1800DD7A0
 * Callers:
 *     sub_1800DDD90 @ 0x1800DDD90 (sub_1800DDD90.c)
 *     sub_180132B98 @ 0x180132B98 (sub_180132B98.c)
 *     sub_180134E68 @ 0x180134E68 (sub_180134E68.c)
 * Callees:
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 */

__int64 __fastcall sub_1800DD7A0(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
    result = sub_180065DC0(a1, a2, a3);
  else
    result = 2147942487LL;
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
