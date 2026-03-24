/*
 * XREFs of DDCCICleanUpWrap @ 0x1C0134EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C0134EDC (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C033A068 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C033A068, a2);
  qword_1C033A068 = 0LL;
  return result;
}
