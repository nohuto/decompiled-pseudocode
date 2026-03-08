/*
 * XREFs of MiRemoveSecureEntry @ 0x14034D404
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140797184 (MiUnmapLockedPagesInUserSpace.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiSetVadFlags @ 0x140330D00 (MiSetVadFlags.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140777DD4 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  unsigned int v4; // ebp
  int v5; // r15d
  _QWORD *v6; // r14
  _KPROCESS *Process; // r12
  volatile LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int64 i; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 && v4 <= 1 )
      ++v4;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v5 = 1;
      if ( v6 )
        *v6 = *(_QWORD *)i;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = *(_QWORD *)i | *(_DWORD *)(BugCheckParameter2 + 56) & 0xF;
    }
    if ( v4 > 1 && v5 )
      break;
    v6 = (_QWORD *)i;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v9);
  if ( !v5 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v4 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
