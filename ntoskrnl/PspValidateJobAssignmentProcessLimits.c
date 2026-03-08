/*
 * XREFs of PspValidateJobAssignmentProcessLimits @ 0x1406FFF28
 * Callers:
 *     PspValidateJobChainLimits @ 0x1406FFEBC (PspValidateJobChainLimits.c)
 * Callees:
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 *     PspCheckJobAccessState @ 0x1409AF0FC (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAssignmentProcessLimits(__int64 a1, __int64 a2, int a3)
{
  int v6; // edx
  int v7; // eax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 1124) & 0x4000000) == 0
    || !*(_QWORD *)(a1 + 528)
    || (result = PspCheckJobAccessState(), (int)result >= 0) )
  {
    if ( *(_DWORD *)(a1 + 1440) == -1 )
      return 3221225540LL;
    v6 = *(_DWORD *)(a1 + 256);
    if ( (v6 & 8) != 0 && (unsigned int)(a3 + *(_DWORD *)(a1 + 216) - *(_DWORD *)(a1 + 1444)) > *(_DWORD *)(a1 + 260) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a2 + 1120), 0xFFFFFFDF);
      if ( *(_QWORD *)(a1 + 552) && (*(_DWORD *)(a1 + 1088) & 8) != 0 )
        PspSendJobNotification(a1, 3LL, 0, 1);
      return 3221225540LL;
    }
    if ( (v6 & 4) != 0 && *(_DWORD *)(a1 + 4) )
      return 3221225540LL;
    v7 = *(_DWORD *)(a1 + 1536);
    if ( (v7 & 0x20000000) != 0 )
      return 3221225485LL;
    else
      return (v7 & 0x80u) != 0 ? 0xC000010A : 0;
  }
  return result;
}
