/*
 * XREFs of PspEmptyPropertySet @ 0x14064CB48
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1402922F8 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
