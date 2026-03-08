/*
 * XREFs of MiLockStandbyOldestPage @ 0x14064E72C
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 *     MiRebuildStandbyLookasideList @ 0x1402C6EB0 (MiRebuildStandbyLookasideList.c)
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiRepurposeDecayNode @ 0x14065F294 (MiRepurposeDecayNode.c)
 */

__int64 __fastcall MiLockStandbyOldestPage(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rsi
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  volatile LONG *v9; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // [rsp+60h] [rbp+18h] BYREF

  *a4 = 0;
  v5 = 88LL * a3;
  v7 = *(_QWORD *)(v5 + a1 + 2960);
  if ( v7 == 0x3FFFFFFFFFLL )
    return -1LL;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 2
      || *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != a1 )
    {
      goto LABEL_9;
    }
    v9 = (volatile LONG *)(v5 + a1 + 2976);
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    if ( v7 == *(_QWORD *)(v5 + a1 + 2960) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + a1 + 2976));
LABEL_9:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = *(_QWORD *)(v5 + a1 + 2960);
    if ( v7 == 0x3FFFFFFFFFLL )
      return -1LL;
  }
  MiRebuildStandbyLookasideList(48 * v7 - 0x220000000000LL, 0, 1);
  MiReplaceStandbyLookaside(v7, -1LL, 0);
  if ( !MiIsDecayPfn(v7) )
    return v7;
  v11 = *(_QWORD *)(v8 + 16);
  if ( qword_140C657C0 )
  {
    if ( (v11 & 0x10) == 0 )
      v11 &= ~qword_140C657C0;
  }
  v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
  if ( v12 == v7 )
  {
    MiRepurposeDecayNode((PSLIST_ENTRY)(48 * v7 - 0x220000000000LL));
    goto LABEL_18;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v12 - 0x220000000000LL + 24), 0x3FuLL) )
  {
LABEL_18:
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a4 = 1;
    return -1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReplaceStandbyLookaside(v12, -1LL, 0);
    return v12;
  }
}
