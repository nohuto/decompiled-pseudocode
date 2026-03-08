/*
 * XREFs of sub_140755994 @ 0x140755994
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407552F8 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407553D8 (WbDecryptEncryptionSegment.c)
 *     sub_1407554B8 @ 0x1407554B8 (sub_1407554B8.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140755694 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140755824 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140770B14 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_140752C94 @ 0x140752C94 (sub_140752C94.c)
 */

signed __int64 __fastcall sub_140755994(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140752C94(a1);
  }
  return v1;
}
