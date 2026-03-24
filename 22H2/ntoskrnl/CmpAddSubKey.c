/*
 * XREFs of CmpAddSubKey @ 0x14087A3E8
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1406E19D4 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
