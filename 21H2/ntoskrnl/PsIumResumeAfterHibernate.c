/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038DF4C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404FD1DC (VslRegisterLogPages.c)
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
