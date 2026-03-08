/*
 * XREFs of KeDetachProcess @ 0x1402FEBA0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600);
}
