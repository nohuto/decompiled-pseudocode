/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x140388FBC
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1408191D0 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140819698 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x140854730 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x140A2DAA8 (MmVerifyCallbackFunction.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
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
