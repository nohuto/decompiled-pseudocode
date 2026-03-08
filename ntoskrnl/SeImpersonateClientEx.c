/*
 * XREFs of SeImpersonateClientEx @ 0x140773900
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x1406D4A10 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpDelayCreate @ 0x1407725F4 (EtwpDelayCreate.c)
 *     NtImpersonateThread @ 0x140773790 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1409CC150 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
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
