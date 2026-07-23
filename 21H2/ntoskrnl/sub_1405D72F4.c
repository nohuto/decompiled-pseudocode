/*
 * XREFs of sub_1405D72F4 @ 0x1405D72F4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405D6E10 @ 0x1405D6E10 (sub_1405D6E10.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140605B70 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405D7C18 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405D72F4(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      WbFreeWarbirdEncryptionSegment((PVOID)a1);
  }
  return v1;
}
