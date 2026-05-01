/*
 * XREFs of FlushLookUpTableBucket @ 0x1801AE2F4
 * Callers:
 *     LookUpTableFlushComplete @ 0x1801AE61C (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1801AE7B0 (LookUpTableFlushPartial.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x1801AE214 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x1801AE25C (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v5; // rdi
  const EVENT_DESCRIPTOR *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // ebx

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 264);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 264));
  v6 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v7 = FlattenEventEntryTree((__int64)v6);
  *(_DWORD *)(a1 + 256) -= v7;
  v8 = v7;
  ReleaseSRWLockExclusive(v5);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 32LL), v6);
  return v8;
}
