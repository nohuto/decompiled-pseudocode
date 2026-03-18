/*
 * XREFs of sub_1407D2B00 @ 0x1407D2B00
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407D2464 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D2544 (WbDecryptEncryptionSegment.c)
 *     sub_1407D2624 @ 0x1407D2624 (sub_1407D2624.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D26B8 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2800 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D2990 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E0B20 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_1407E15BC @ 0x1407E15BC (sub_1407E15BC.c)
 */

signed __int64 __fastcall sub_1407D2B00(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_1407E15BC((PVOID)a1);
  }
  return v1;
}
