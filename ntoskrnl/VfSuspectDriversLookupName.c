/*
 * XREFs of VfSuspectDriversLookupName @ 0x140AD79F4
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140AD7CE0 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
