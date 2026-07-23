/*
 * XREFs of SeImpersonateClientEx @ 0x1406B81C0
 * Callers:
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1406B8050 (NtImpersonateThread.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1406D9170 (NtAlpcImpersonateClientOfPort.c)
 *     SeImpersonateClient @ 0x1409227B0 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
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
