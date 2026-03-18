/*
 * XREFs of PsReferenceEffectiveToken @ 0x14071D75C
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D5C (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x1402979F8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E40 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureAtomTableCallout @ 0x140355F10 (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x14035ACFC (SeLogAccessFailure.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036E6B8 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403AC540 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B845C (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714AE0 (ExpWnfQueryCurrentUserSID.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x14071D810 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, _BYTE *a4, __int64 a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rbx
  _BYTE *v11; // rdi
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  v11 = a6;
  v12 = PsReferenceImpersonationTokenEx(a1, 0LL, a2, &v15, a4, a5, a6);
  if ( v12 )
  {
    *a3 = 2;
  }
  else
  {
    v13 = PsReferencePrimaryTokenWithTag(Process, a2);
    *a3 = 1;
    v12 = v13;
    *a4 = 0;
    if ( v11 )
      *v11 = *(_BYTE *)(Process + 2170);
  }
  return v12;
}
