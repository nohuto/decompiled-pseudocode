/*
 * XREFs of PspEmptyPropertySet @ 0x1407D9CEC
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1403BED38 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty(a1, result[2], 0LL);
  return result;
}
