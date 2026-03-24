/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1402FE594
 * Callers:
 *     RtlpHpLargeFree @ 0x1402FDE04 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402FDFBC (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
