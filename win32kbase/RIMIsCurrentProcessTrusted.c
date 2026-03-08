/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1C0032680
 * Callers:
 *     rimCheckForRegistrationConflicts @ 0x1C0032578 (rimCheckForRegistrationConflicts.c)
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 * Callees:
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0090C60 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 __fastcall RIMIsCurrentProcessTrusted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  unsigned int v5; // ebx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v5 = 0;
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
    || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
  {
    return 1;
  }
  return v5;
}
