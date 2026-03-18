/*
 * XREFs of ExAllocateCallBack @ 0x140844F90
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056CA90 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140844A20 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140844AE0 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140844B70 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140844DF4 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140844E98 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402235B0 (ExInitializePushLock.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExAllocateCallBack(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 24LL, 1651663427LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Pool2[1].Count = a1;
    Pool2[2].Count = a2;
    ExInitializePushLock(Pool2);
  }
  return v5;
}
