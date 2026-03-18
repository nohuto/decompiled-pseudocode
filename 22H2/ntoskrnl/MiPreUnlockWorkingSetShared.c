/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x14035CF20
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025B9B0 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReduceWs @ 0x14035CFD8 (MiReduceWs.c)
 *     MiSelfTrim @ 0x1406502CC (MiSelfTrim.c)
 */

void __fastcall MiPreUnlockWorkingSetShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // si
  int v5; // eax
  volatile LONG *SharedVm; // rax
  volatile LONG *v7; // rax
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 188);
    if ( (v5 & 3) != 0
      && ((v5 & 4) == 0
       || (*(_BYTE *)(a1 + 184) & 0x40) != 0 && *(_QWORD *)(a1 + 128) > (unsigned __int64)(*(_QWORD *)(a1 + 120) + 64LL)
       || (unsigned __int64)MiGetAvailablePagesBelowPriority(
                              *(_QWORD **)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                              6u) < 0x120) )
    {
      LOBYTE(a2) = v3;
      MiSelfTrim(a1, a2);
    }
    if ( (*(_BYTE *)(a1 + 187) & 0x10) != 0 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 16);
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      v7 = (volatile LONG *)MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(v7 + 16);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v8) = v3;
      MiReduceWs(a1, v8, *(_QWORD *)(a1 + 120));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
}
