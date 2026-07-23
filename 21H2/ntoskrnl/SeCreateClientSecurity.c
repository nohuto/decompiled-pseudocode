/*
 * XREFs of SeCreateClientSecurity @ 0x140652B90
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x1406B8050 (NtImpersonateThread.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 *     AlpcpImpersonateMessage @ 0x1406D9340 (AlpcpImpersonateMessage.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14026BE00 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v9; // rdi
  int v10; // esi
  char v11; // r12
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-36h] BYREF
  int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 0;
  v21 = 0LL;
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = (ULONG_PTR)PsReferenceImpersonationTokenEx((__int64)ClientThread, 0, v19, (bool *)&v17, &v20, &v22);
  if ( v9 )
  {
    v11 = v17;
    v10 = 2;
  }
  else
  {
    v9 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v9 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v9 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
    }
    v10 = 1;
    v22 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v9 + 1104), (__int64)&v22, &v18, &v21);
  result = SepCreateClientSecurityEx(
             v9,
             (_DWORD)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v20,
             0,
             0LL,
             v18,
             v21,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v13;
  }
  return result;
}
