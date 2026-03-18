/*
 * XREFs of SeCreateClientSecurity @ 0x1407271D0
 * Callers:
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     NtImpersonateThread @ 0x1406BFD10 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x1407B0C70 (AlpcpImpersonateMessage.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402F8EF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x14072A6B0 (PsReferenceImpersonationTokenEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 *v9; // rbx
  int v10; // ebp
  char v11; // r14
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v16[2]; // [rsp+62h] [rbp-36h] BYREF
  int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  v14 = 0;
  v17 = 0;
  v19 = 0;
  v15 = 0;
  v18 = 0LL;
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
