/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140280140
 * Callers:
 *     EtwpPsProvTraceThread @ 0x1406F61A4 (EtwpPsProvTraceThread.c)
 *     EtwTraceThread @ 0x1406F653C (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
