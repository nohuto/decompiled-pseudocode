/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x140371248
 * Callers:
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
