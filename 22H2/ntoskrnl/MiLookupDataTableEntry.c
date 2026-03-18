/*
 * XREFs of MiLookupDataTableEntry @ 0x1402136C0
 * Callers:
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FC2C (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiShowBadMapper @ 0x14063112C (MiShowBadMapper.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1406AD520 (MmIsDriverVerifyingByAddress.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140701000 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14070111C (MiImagePagable.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x140871F6C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D4A0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D5B0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x140A306E8 (MmGetSectionRange.c)
 *     MmGetImageRetpolineCodePage @ 0x140A34620 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A43F68 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140AAD02C (MmMarkImageForHiberPhase.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 *     MmReapplyBootPatchImports @ 0x140B750B4 (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B756B4 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402A7C6C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140339800 (MmLockLoadedModuleListShared.c)
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
    KeLeaveCriticalRegionThread(CurrentThread);
  }
  return v7;
}
