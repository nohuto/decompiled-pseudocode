/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x140250094
 * Callers:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
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
