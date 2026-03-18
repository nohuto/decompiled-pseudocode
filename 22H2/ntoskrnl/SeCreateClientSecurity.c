/*
 * XREFs of SeCreateClientSecurity @ 0x14071D3C0
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     AlpcpCreateClientPort @ 0x1407177B4 (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14071CA38 (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x14071CE70 (AlpcpImpersonateMessage.c)
 *     NtImpersonateThread @ 0x1407F62F0 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402B32E4 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsReferenceImpersonationTokenEx @ 0x14071D810 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
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
  int v17; // [rsp+64h] [rbp-34h] BYREF
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
             (_DWORD)v9,
             (_DWORD)ClientSecurityQos,
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
