/*
 * XREFs of MiMarkFileOnlyPfnGood @ 0x14063BF34
 * Callers:
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromBadList @ 0x14064BA18 (MiUnlinkPageFromBadList.c)
 */

char __fastcall MiMarkFileOnlyPfnGood(__int64 a1)
{
  char result; // al

  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 && !*(_WORD *)(a1 + 32) )
  {
    result = *(_BYTE *)(a1 + 34) & 7;
    if ( result != 5 || *(__int64 *)(a1 + 40) < 0 || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 16) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CB20);
      MiUnlinkPageFromBadList(a1, 128LL);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
      *(_BYTE *)(a1 + 35) &= ~0x10u;
      return MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    }
  }
  return result;
}
