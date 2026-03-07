void __fastcall MiPreUnlockWorkingSetShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v5; // si
  int v7; // eax
  __int64 SharedVm; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 188);
    if ( (v7 & 3) != 0
      && ((v7 & 4) == 0
       || (*(_BYTE *)(a1 + 184) & 0x40) != 0 && *(_QWORD *)(a1 + 128) > (unsigned __int64)(*(_QWORD *)(a1 + 120) + 64LL)
       || (unsigned __int64)MiGetAvailablePagesBelowPriority(
                              *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                              6u) < 0x120) )
    {
      LOBYTE(a2) = v5;
      MiSelfTrim(a1, a2);
    }
    if ( (*(_BYTE *)(a1 + 187) & 0x10) != 0 )
    {
      SharedVm = MiGetSharedVm(a1, a2, a3, a4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      v12 = MiGetSharedVm(a1, v9, v10, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v13) = v5;
      MiReduceWs(a1, v13, *(_QWORD *)(a1 + 120));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
}
