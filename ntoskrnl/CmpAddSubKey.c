/*
 * XREFs of CmpAddSubKey @ 0x1408A734E
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1407A4094 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
