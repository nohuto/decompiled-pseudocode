/*
 * XREFs of RtlTestProtectedAccess @ 0x1406075FC
 * Callers:
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406070A8 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x1406070DC (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406075CC (PspCheckForInvalidAccessByProtection.c)
 *     PopBlackBoxUpdate @ 0x140679468 (PopBlackBoxUpdate.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
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
