/*
 * XREFs of SeCreateClientSecurity @ 0x1406D61E0
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x1406D4C70 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     NtImpersonateThread @ 0x140773790 (NtImpersonateThread.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x140247C30 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406D6630 (PsReferenceImpersonationTokenEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  __int64 *v9; // rsi
  int v10; // r15d
  char v11; // r12
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v16[2]; // [rsp+62h] [rbp-36h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  v17 = 0;
  v19 = 0;
  v15 = 0;
  v18 = 0LL;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = (__int64 *)PsReferenceImpersonationTokenEx(ClientThread, 0LL, 1665361235LL, v16, &v14, &v17, &v19);
  if ( v9 )
  {
    v11 = v14;
    v10 = 2;
  }
  else
  {
    v9 = (__int64 *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
    v10 = 1;
    v11 = 0;
    v19 = BYTE2(Process[2].Header.WaitListHead.Flink);
  }
  SepReconcileTrustSidWithProcessProtection(v9[138], (__int64)&v19, &v15, &v18);
  result = SepCreateClientSecurityEx(
             (__int64)v9,
             (__int64)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v17,
             0,
             0LL,
             v15,
             v18,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObjectWithTag(v9, 0x63436553u);
    return v13;
  }
  return result;
}
