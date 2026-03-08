/*
 * XREFs of DpiFdoRebootWorkItem @ 0x1C0398550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRebootWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // ebx

  v4 = (unsigned int)Context;
  IoFreeWorkItem(IoWorkItem);
  if ( NtShutdownSystem(ShutdownReboot) < 0 )
    WdLogSingleEntry5(
      0LL,
      275LL,
      25LL,
      v4,
      *(unsigned int *)(IoObject[8] + 1124LL),
      *(unsigned int *)(IoObject[8] + 1128LL));
}
