/*
 * XREFs of PspDetachThreadFromUmsCompletionList @ 0x140581AFC
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     KeUnInitializeUmsThread @ 0x1408BD848 (KeUnInitializeUmsThread.c)
 */

__int64 __fastcall PspDetachThreadFromUmsCompletionList(struct _KTHREAD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    return KeUnInitializeUmsThread();
  else
    return 3221225659LL;
}
