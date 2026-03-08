/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1405A34C4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x140549C10 (VslRegisterLogPages.c)
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
