/*
 * XREFs of KiFlushProcessTbWorker @ 0x1402EBB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 KiFlushProcessTbWorker()
{
  unsigned __int64 result; // rax

  result = __readcr3();
  __writecr3(result);
  return result;
}
