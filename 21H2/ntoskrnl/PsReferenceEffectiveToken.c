/*
 * XREFs of PsReferenceEffectiveToken @ 0x140651B70
 * Callers:
 *     SeLogAccessFailure @ 0x140238D50 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x1402396C4 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x1402457A8 (RtlpAllowsLowBoxAccess.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14026BC30 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x14027C158 (RtlpQueryLowBoxId.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402F4D04 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596680 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14069FE04 (ExpWnfQueryCurrentUserSID.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1406C5B10 (MiIsUserQueryVmCallerTrusted.c)
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071EC0C (EtwpGetSidExtendedHeaderItem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    goto LABEL_4;
  v22 = *(_QWORD *)(a1 + 544);
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1280);
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1192) & 3;
    *a3 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v22 + 2170);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v21, v14, v15, v16);
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].Header.WaitListHead.Flink);
    return (void *)v12;
  }
}
