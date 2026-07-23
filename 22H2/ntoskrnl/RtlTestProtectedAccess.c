/*
 * XREFs of RtlTestProtectedAccess @ 0x140607A5C
 * Callers:
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140607508 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x14060753C (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140607A2C (PspCheckForInvalidAccessByProtection.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PopBlackBoxUpdate @ 0x1406F2258 (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}
