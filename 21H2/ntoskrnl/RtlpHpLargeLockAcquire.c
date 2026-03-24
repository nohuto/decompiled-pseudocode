/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1402A5C78
 * Callers:
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402A56A0 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1);
}
