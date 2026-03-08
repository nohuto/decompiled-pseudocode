/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14035E230
 * Callers:
 *     EtwTraceThread @ 0x1407EBAB0 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1409E372C (EtwpPsProvTraceThread.c)
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
