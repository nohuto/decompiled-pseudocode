/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x1402CFCF8
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x1402150F8 (MiDecrementControlAreaCount.c)
 *     MiClearFilePointer @ 0x1402E9840 (MiClearFilePointer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     MiRemoveUnusedSegment @ 0x14034C47C (MiRemoveUnusedSegment.c)
 */

int __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // r9d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v3 | 1;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1416));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1408));
      v5 = *(_QWORD **)(v4 + 1624);
      v6 = (_QWORD *)(a1 + 8);
      if ( *v5 != v4 + 1616 )
        __fastfail(3u);
      *v6 = v4 + 1616;
      *(_QWORD *)(a1 + 16) = v5;
      *v5 = v6;
      *(_QWORD *)(v4 + 1624) = v6;
      *(_DWORD *)(a1 + 56) |= 0x10000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1408));
      KeReleaseSemaphoreEx(v4 + 1584, 0, 1, v7, 8, 0LL);
      LODWORD(v1) = MiDecrementControlAreaCount(v4, (volatile signed __int64 *)(v4 + 1416));
    }
  }
  return (int)v1;
}
