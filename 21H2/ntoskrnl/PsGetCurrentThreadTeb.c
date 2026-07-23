/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1402722C0
 * Callers:
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x14068FFBC (EtwpPsProvTraceThread.c)
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
