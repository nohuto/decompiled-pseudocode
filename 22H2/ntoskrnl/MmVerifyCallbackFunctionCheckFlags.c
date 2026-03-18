/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x14039FC2C
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1408449D0 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140844E98 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x140858CD0 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x140A307D8 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 0);
  if ( v6 && (!a2 || (a2 & (_DWORD)v6[13]) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
