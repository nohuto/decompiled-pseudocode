/*
 * XREFs of MiLockPageListAndFirstPage @ 0x14064E5E4
 * Callers:
 *     MiGetSlabStandbyPage @ 0x14065488C (MiGetSlabStandbyPage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockPageListAndFirstPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  volatile LONG *v5; // r15
  char v6; // r14
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 == 0x3FFFFFFFFFLL )
    return -1LL;
  v5 = (volatile LONG *)(a1 + 32);
  v6 = 0;
  while ( 1 )
  {
    v7 = 48 * v2 - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    ExAcquireSpinLockSharedAtDpcLevel(v5);
    if ( v2 == *(_QWORD *)(a1 + 16) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 == 0x3FFFFFFFFFLL )
      return -1LL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
    goto LABEL_14;
  *(_QWORD *)(a2 + 16) = a1 + 40;
  *(_QWORD *)(a2 + 8) = 0x3FFFFFFFFFLL;
  *(_BYTE *)(a2 + 24) = 1;
  v9 = *(_QWORD *)v7 & 0xFFFFFFFFFFLL;
  if ( v9 != 0x3FFFFFFFFFLL )
  {
    v10 = 48 * v9 - 0x220000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a2 + 40) = v10;
      v6 = 1;
      *(_QWORD *)(a2 + 32) = v9;
      goto LABEL_13;
    }
LABEL_14:
    *(_BYTE *)a2 = 1;
    MiReleasePageListLock(a1, a2);
    *(_BYTE *)a2 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    return v2;
  }
LABEL_13:
  *(_BYTE *)(a2 + 48) = v6;
  *(_BYTE *)a2 = 1;
  return v2;
}
