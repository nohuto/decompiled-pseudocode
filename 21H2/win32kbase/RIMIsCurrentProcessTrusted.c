/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1C005F0F0
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     rimCheckForRegistrationConflicts @ 0x1C005F020 (rimCheckForRegistrationConflicts.c)
 * Callees:
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0057840 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 __fastcall RIMIsCurrentProcessTrusted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID CurrentProcess; // rax
  unsigned int v5; // ebx

  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2, a3, a4);
  v5 = 0;
  if ( CurrentProcess && CurrentProcess == g_pepDwm || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
    return 1;
  return v5;
}
