/*
 * XREFs of VfDriverApplyDifVerification @ 0x140AC72D8
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE503C (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExSetPoolFlags @ 0x1406056B8 (ExSetPoolFlags.c)
 *     MmIsVerifierApplicableToImage @ 0x140619C10 (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140ABF7CC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140AD7288 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLookupName @ 0x140AD79F4 (VfSuspectDriversLookupName.c)
 */

__int64 __fastcall VfDriverApplyDifVerification(__int64 a1, __int64 a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  int v6; // r15d
  unsigned int v7; // esi
  int IsVerifierApplicableToImage; // edi
  __int64 *v9; // rax
  int IsProtectedDriver; // eax
  int v11; // eax

  v3 = 0LL;
  *a3 = 0;
  v6 = 0;
  v7 = 0;
  IsVerifierApplicableToImage = 0;
  VfDriverLock();
  if ( (unsigned int)VfSuspectDriversLookupName(a1 + 24) )
    goto LABEL_27;
  if ( RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(a1 + 24), 1u) )
  {
    KernelVerifier = 1;
    goto LABEL_4;
  }
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (PVOID *)PsLoadedModuleList;
  v6 = 1;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v3 + 11), 1u) )
      goto LABEL_11;
    v3 = (PVOID *)*v3;
    ++v7;
  }
  v3 = 0LL;
LABEL_11:
  if ( !KernelVerifier )
  {
    if ( !v3 )
    {
      IsVerifierApplicableToImage = -1073738629;
      goto LABEL_26;
    }
    IsProtectedDriver = VfUtilIsProtectedDriver();
    if ( v7 <= 1 || IsProtectedDriver )
    {
      IsVerifierApplicableToImage = -1073738739;
      goto LABEL_26;
    }
    IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)v3);
    if ( IsVerifierApplicableToImage < 0 )
    {
LABEL_26:
      ExReleaseResourceLite(&PsLoadedModuleResource);
      goto LABEL_27;
    }
  }
LABEL_4:
  v9 = (__int64 *)qword_140C36FB8;
  if ( *(__int64 **)qword_140C36FB8 != &VfSuspectDriversList )
    __fastfail(3u);
  *(_QWORD *)a1 = &VfSuspectDriversList;
  *(_QWORD *)(a1 + 8) = v9;
  *v9 = a1;
  qword_140C36FB8 = a1;
  if ( KernelVerifier
    || (IsVerifierApplicableToImage = VfSuspectApplyDifVolatileVerification(v3, a1), IsVerifierApplicableToImage >= 0) )
  {
    v11 = dword_140C138A0 + 1;
    *a3 = 1;
    dword_140C138A0 = v11;
    if ( KernelVerifier && ((VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0) )
      ExSetPoolFlags(8u);
  }
  if ( v6 )
    goto LABEL_26;
LABEL_27:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
