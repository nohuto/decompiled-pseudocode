/*
 * XREFs of PopFastS4Check @ 0x1409809A4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14058F3E0 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return !byte_140C3D91C && dword_140C3CE40 == 4 && byte_140C3CEF9 == 1 && byte_140C3CEF0 == 1 && byte_140C3CEFE == 2;
}
