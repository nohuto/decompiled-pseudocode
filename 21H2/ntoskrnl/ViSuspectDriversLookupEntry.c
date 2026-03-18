/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140A9AF40
 * Callers:
 *     VfSuspectDifRemoveEntry @ 0x140A9A540 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140A9AC20 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140A9AC40 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140A9ACE0 (VfSuspectDriversUnloadCallback.c)
 *     VfVolatileRemoveDifVerification @ 0x140A9CB44 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversIsLoaded @ 0x140B53B5C (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
