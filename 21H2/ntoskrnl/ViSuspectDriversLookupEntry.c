/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x1409C3574
 * Callers:
 *     VfIsDriverSuspect @ 0x1409C3524 (VfIsDriverSuspect.c)
 *     VfDriverEnableVerifier @ 0x1409C9620 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x1409DAF30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x140A94DAC (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
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
