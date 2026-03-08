/*
 * XREFs of RtlTestProtectedAccess @ 0x14070C7FC
 * Callers:
 *     PopBlackBoxUpdate @ 0x14068BFB0 (PopBlackBoxUpdate.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14070C7CC (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x14070D5FC (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x14070D630 (PspValidateCreateProcessProtection.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140748A78 (EtwCheckSecurityLoggerAccess.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v3; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
  return _bittest(&v3, a2 >> 4);
}
