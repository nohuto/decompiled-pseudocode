/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14025FB10
 * Callers:
 *     EtwTraceThread @ 0x14062997C (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140629CD8 (EtwpPsProvTraceThread.c)
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
