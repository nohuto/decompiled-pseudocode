/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14038DDFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404FD25C (VslRegisterLogPages.c)
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
