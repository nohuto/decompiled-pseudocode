/*
 * XREFs of MiBeginProcessClean @ 0x1402DB7FC
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiOutlawInswaps @ 0x1402DB8E0 (MiOutlawInswaps.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiFreeWorkingSetSwapContext @ 0x14067E58C (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  unsigned int v10; // edi
  unsigned __int64 v11; // rax

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) == 0 )
  {
    LOCK_ADDRESS_SPACE(a1, a2);
    SharedVm = MiGetSharedVm(v2, v5, v6, v7);
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    v10 = 0;
    *(_DWORD *)(SharedVm + 4) = 0;
    _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
    if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
      *(_BYTE *)(v2 + 187) &= 0x9Fu;
    MiUnlockWorkingSetExclusive(v2, v9);
    UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
    v11 = MiOutlawInswaps(a2);
    if ( v11 > 2 )
    {
      MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v11);
    }
    else if ( !v11 )
    {
      return v10;
    }
    return 1;
  }
  return 1LL;
}
