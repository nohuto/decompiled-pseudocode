/*
 * XREFs of CmpQueryKeyName @ 0x1406BD190
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x140A14640 (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
