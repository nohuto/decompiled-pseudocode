/*
 * XREFs of SeImpersonateClientEx @ 0x1406E0EE0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x1405E9A10 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpCreateLogFile @ 0x1406DFAAC (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1406E0D70 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x140922650 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
