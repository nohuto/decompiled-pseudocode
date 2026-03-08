/*
 * XREFs of PopFastS4Check @ 0x14097D8F4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14058CEB0 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return !byte_140C3D49C && dword_140C3CD80 == 4 && byte_140C3CE39 == 1 && byte_140C3CE30 == 1 && byte_140C3CE3E == 2;
}
