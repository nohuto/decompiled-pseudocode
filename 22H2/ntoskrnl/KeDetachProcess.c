/*
 * XREFs of KeDetachProcess @ 0x140325E20
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}
