/*
 * XREFs of PspEmptyPropertySet @ 0x140641968
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x140210268 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
