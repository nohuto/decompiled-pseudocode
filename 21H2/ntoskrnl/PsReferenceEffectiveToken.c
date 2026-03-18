/*
 * XREFs of PsReferenceEffectiveToken @ 0x1407B3B60
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14023B484 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureAtomTableCallout @ 0x140241C40 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x140244198 (RtlpAllowsLowBoxAccess.c)
 *     SeLogAccessFailure @ 0x14024429C (SeLogAccessFailure.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E12C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x1402EF324 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x1402F8F70 (SepReferenceTokenByHandle.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066A21C (EtwpGetSidExtendedHeaderItem.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14066A57C (ExpWnfQueryCurrentUserSID.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140695CF8 (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdi
  unsigned __int64 result; // rax
  void *v13; // r12
  struct _KTHREAD *v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1376) & 8) == 0 )
    goto LABEL_4;
  v15 = *(_QWORD *)(a1 + 544);
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
  v13 = 0LL;
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    v13 = (void *)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v13, a2);
    *a5 = *(_DWORD *)(a1 + 1272) & 3;
    *a4 = (*(_BYTE *)(a1 + 1272) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v15 + 2170);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1360));
  KeAbPostRelease(a1 + 1360);
  KeLeaveCriticalRegionThread((__int64)v14);
  if ( v13 )
  {
    *a3 = 2;
    return (unsigned __int64)v13;
  }
  else
  {
LABEL_4:
    result = PsReferencePrimaryTokenWithTag(Process, a2);
    *a3 = 1;
    *a4 = 0;
    if ( a6 )
      *a6 = *(_BYTE *)(Process + 2170);
  }
  return result;
}
