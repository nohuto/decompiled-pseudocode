/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1402B73D4
 * Callers:
 *     RtlpHpLargeFree @ 0x1402B6B40 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1);
}
