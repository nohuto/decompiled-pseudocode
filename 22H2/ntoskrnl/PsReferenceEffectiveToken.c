/*
 * XREFs of PsReferenceEffectiveToken @ 0x1406D5B10
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14024FE28 (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x14025A448 (RtlpQueryLowBoxId.c)
 *     SeLogAccessFailure @ 0x1403139A0 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x140314314 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403204C8 (RtlpAllowsLowBoxAccess.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140346CA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596390 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406107B4 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140654EBC (EtwpGetSidExtendedHeaderItem.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14070E660 (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
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
