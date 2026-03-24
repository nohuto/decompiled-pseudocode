/*
 * XREFs of MiLookupDataTableEntry @ 0x140358CCC
 * Callers:
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AF0C0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x14052D12C (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     MiImagePagable @ 0x1406FE41C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406FE4F0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x14078098C (MmBackSystemImageWithPagefile.c)
 *     MiLogPinDriverAddress @ 0x1407B6A44 (MiLogPinDriverAddress.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDAC0 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2AF0 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C64E0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6600 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1408C8238 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409B09F4 (MmMarkImageForHiberPhase.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockLoadedModuleListShared @ 0x14029CDE4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14029CF18 (MmLockLoadedModuleListShared.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v9 = 17;
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
  v5 = (_QWORD *)qword_140C4CD60;
  while ( v5 )
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
  v7 = (unsigned __int64)(v5 - 29) & -(__int64)(v5 != 0LL);
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
