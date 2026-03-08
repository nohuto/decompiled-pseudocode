/*
 * XREFs of KiInsertTimer2 @ 0x1402DFF54
 * Callers:
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140227EF4 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14024E320 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  char inserted; // bl
  bool v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3, &v8);
  KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  if ( v8 )
    KiHvEnlightenedGuestPriorityKick(
      (__int64)KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      KiVpThreadSystemWorkPriority);
  return inserted;
}
