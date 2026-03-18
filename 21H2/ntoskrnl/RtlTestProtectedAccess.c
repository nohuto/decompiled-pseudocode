/*
 * XREFs of RtlTestProtectedAccess @ 0x14066D068
 * Callers:
 *     PspCheckForInvalidAccessByProtection @ 0x14066D038 (PspCheckForInvalidAccessByProtection.c)
 *     PspValidateCreateProcessProtection @ 0x1406D6DA8 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D833C (PspGetProcessProtectionRequirementsFromImage.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406E0450 (EtwCheckSecurityLoggerAccess.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PopBlackBoxUpdate @ 0x140750F1C (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  bool result; // al
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}
