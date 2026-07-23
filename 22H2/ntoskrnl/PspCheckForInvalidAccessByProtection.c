/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x140607A2C
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x1406079D8 (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x140607A5C (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
