/*
 * XREFs of PsReferenceEffectiveToken @ 0x1406D657C
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     SeCaptureAtomTableCallout @ 0x1402EA5D0 (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x1402EE66C (SeLogAccessFailure.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140302D18 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403A70B0 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140718888 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14078194C (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406D6630 (PsReferenceImpersonationTokenEx.c)
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
