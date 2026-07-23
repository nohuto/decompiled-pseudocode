/*
 * XREFs of SeCreateClientSecurityEx @ 0x140652D80
 * Callers:
 *     AlpcpGetEffectiveTokenMessage @ 0x1405E350C (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1406D7FB0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1406D9340 (AlpcpImpersonateMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14026BE00 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409227C8 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r14
  ULONG_PTR v10; // rsi
  int v11; // ebp
  char v12; // r13
  __int64 result; // rax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentServerSilo; // rbx
  unsigned int v19; // ebx
  char v20; // [rsp+60h] [rbp-38h] BYREF
  char v21; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v22[2]; // [rsp+62h] [rbp-36h] BYREF
  int v23; // [rsp+64h] [rbp-34h] BYREF
  __int64 v24; // [rsp+68h] [rbp-30h] BYREF
  char v25; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v20 = 0;
  v23 = 0;
  v25 = 0;
  v21 = 0;
  v24 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v10 = (ULONG_PTR)PsReferenceImpersonationTokenEx(a1, 0, v22, (bool *)&v20, &v23, &v25);
  if ( v10 )
  {
    v12 = v20;
    v11 = 2;
  }
  else
  {
    v10 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v10 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v10 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16, v17);
    }
    v11 = 1;
    v25 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v12 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v10 + 1104), (__int64)&v25, &v21, &v24);
  result = SepCreateClientSecurityEx(v10, a2, a3, v11, v12, v23, 1, a1, v21, v24, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v19 = result;
  if ( (int)result < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v19;
  }
  return result;
}
