/*
 * XREFs of SeCreateClientSecurityEx @ 0x14065DF60
 * Callers:
 *     AlpcpExposeTokenAttribute @ 0x1405E8850 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1405E9BE0 (AlpcpImpersonateMessage.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14062D47C (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14027DE60 (SepReconcileTrustSidWithProcessProtection.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     PsIsHostSilo @ 0x140354A80 (PsIsHostSilo.c)
 *     PsReferenceImpersonationTokenEx @ 0x140656960 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140922668 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r14
  ULONG_PTR v10; // rsi
  int v11; // ebp
  char v12; // r13
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 CurrentServerSilo; // rbx
  unsigned int v17; // ebx
  char v18; // [rsp+60h] [rbp-38h] BYREF
  char v19; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v20[2]; // [rsp+62h] [rbp-36h] BYREF
  int v21; // [rsp+64h] [rbp-34h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h] BYREF
  char v23; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v21 = 0;
  v23 = 0;
  v19 = 0;
  v22 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v10 = (ULONG_PTR)PsReferenceImpersonationTokenEx(a1, 0, v20, (bool *)&v18, &v21, &v23);
  if ( v10 )
  {
    v12 = v18;
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v11 = 1;
    v23 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v12 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v10 + 1104), (__int64)&v23, &v19, &v22);
  result = SepCreateClientSecurityEx(v10, a2, a3, v11, v12, v21, 1, a1, v19, v22, a4);
  v15 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v15;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo((__int64)PsInitialSystemProcess, v14);
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v15;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v17 = result;
  if ( (int)result < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v17;
  }
  return result;
}
