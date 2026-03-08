/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140AD7CE0
 * Callers:
 *     VfSuspectDifRemoveEntry @ 0x140AD734C (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140AD79F4 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140AD7A14 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140AD7AB4 (VfSuspectDriversUnloadCallback.c)
 *     VfVolatileRemoveDifVerification @ 0x140ADAB38 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversIsLoaded @ 0x140B93B54 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
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
