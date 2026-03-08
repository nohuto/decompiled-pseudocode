/*
 * XREFs of MiWaitForRotateToComplete @ 0x1406317E4
 * Callers:
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1402F7444 (MiUnlockFaultWorkingSet.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v3; // ebp
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  volatile LONG *v9; // rbx
  volatile LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v5 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.StaticBitmap[9]; i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v8 + 36)) )
          __fastfail(0xEu);
        MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], *(_BYTE *)(a2 + 12));
        MiLockVadShared((__int64)CurrentThread, v8);
        MiUnlockAndDereferenceVadShared((PVOID)v8);
        SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive(SharedVm);
        *((_DWORD *)SharedVm + 1) = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(a2);
        v9 = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive(v9);
        *((_DWORD *)v9 + 1) = 0;
        *(_BYTE *)(a2 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
