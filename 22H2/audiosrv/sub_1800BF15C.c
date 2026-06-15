/*
 * XREFs of sub_1800BF15C @ 0x1800BF15C
 * Callers:
 *     sub_1800C1E20 @ 0x1800C1E20 (sub_1800C1E20.c)
 *     sub_1800C1F20 @ 0x1800C1F20 (sub_1800C1F20.c)
 *     sub_1800C78E0 @ 0x1800C78E0 (sub_1800C78E0.c)
 * Callees:
 *     sub_1800210FC @ 0x1800210FC (sub_1800210FC.c)
 */

bool __fastcall sub_1800BF15C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)sub_1800210FC(&v5, a2, 4uLL) < 0 )
    return 0;
  v4 = o_malloc(v5);
  *a1 = v4;
  return v4 != 0;
}
