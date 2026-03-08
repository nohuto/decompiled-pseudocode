/*
 * XREFs of CmpConstructName @ 0x1406BD1BC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  CmpConstructNameWithStatus(a1, &v2);
  return v2;
}
