/*
 * XREFs of PsReferenceEffectiveToken @ 0x14065CD50
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402504F4 (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x14025ABE8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14027DC90 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeLogAccessFailure @ 0x1402BAB40 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x1402BB4B4 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x1402C7068 (RtlpAllowsLowBoxAccess.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596450 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140610354 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14070782C (EtwpGetSidExtendedHeaderItem.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407174C0 (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rbx
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1280);
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1192) & 3;
    *a3 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v16 + 2170);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v15);
  if ( v11 )
  {
    *a2 = 2;
    return v11;
  }
  else
  {
LABEL_4:
    v12 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v12 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v12 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].Header.WaitListHead.Flink);
    return (void *)v12;
  }
}
