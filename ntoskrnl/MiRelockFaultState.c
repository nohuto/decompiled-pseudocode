/*
 * XREFs of MiRelockFaultState @ 0x14022853C
 * Callers:
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x140643DB8 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

char __fastcall MiRelockFaultState(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  char v8; // r14
  unsigned __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v8 = MiLockWorkingSetShared(*a1);
  valid = MiLockLowestValidPageTable(v4, a2 << 25 >> 16, &v13);
  v5 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v4, valid);
    LOBYTE(v11) = v8;
    MiUnlockWorkingSetShared(v4, v11);
    v5 = 0LL;
    goto LABEL_5;
  }
  if ( !valid )
  {
LABEL_5:
    *((_BYTE *)a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v4, a2, a3, a4);
    LOBYTE(valid) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  a1[2] = v5;
  return valid;
}
