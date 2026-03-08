/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x14024EA84
 * Callers:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
