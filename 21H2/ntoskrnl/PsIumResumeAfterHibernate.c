/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140399424
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x14054F010 (VslRegisterLogPages.c)
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
