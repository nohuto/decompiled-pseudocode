/*
 * XREFs of MiLookupDataTableEntry @ 0x14035ECF0
 * Callers:
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140388FBC (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MmPageEntireDriver @ 0x140729DE0 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14072A7E0 (MiImagePagable.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MiLogPinDriverAddress @ 0x1407EB808 (MiLogPinDriverAddress.c)
 *     MmLockPagableDataSection @ 0x1407EBF70 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407ECEE0 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x14086FA4C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2A740 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2A850 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x140A2D9B8 (MmGetSectionRange.c)
 *     MmGetImageRetpolineCodePage @ 0x140A318F0 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A41294 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140AA9DFC (MmMarkImageForHiberPhase.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B71424 (MmDiscardDriverSection.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402824A4 (MmUnlockLoadedModuleListShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 17;
  CurrentThread = 0LL;
  if ( a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v6 = *(v5 - 23);
      if ( a1 > v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1) )
      {
        v5 = (_QWORD *)v5[1];
      }
      else
      {
        if ( a1 >= v6 )
          break;
        v5 = (_QWORD *)*v5;
      }
    }
    while ( v5 );
  }
  v7 = v5 - 29;
  if ( !v5 )
    v7 = 0LL;
  if ( a2 == 2 )
  {
    MmUnlockLoadedModuleListShared(v9);
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v7;
}
