/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038D6FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404FCEDC (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
