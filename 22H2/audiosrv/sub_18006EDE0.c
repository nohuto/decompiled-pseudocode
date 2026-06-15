/*
 * XREFs of sub_18006EDE0 @ 0x18006EDE0
 * Callers:
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_18006EDE0(struct _RTL_CRITICAL_SECTION *a1, unsigned __int64 *a2)
{
  bool v4; // cf
  unsigned __int64 *result; // rax

  v4 = TryEnterCriticalSection(a1);
  result = a2;
  *a2 = (unsigned __int64)a1 & -(__int64)v4;
  return result;
}
