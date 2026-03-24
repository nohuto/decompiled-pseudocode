/*
 * XREFs of PspEmptyPropertySet @ 0x1406C5908
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1402EFB98 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
