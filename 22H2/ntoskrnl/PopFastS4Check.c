/*
 * XREFs of PopFastS4Check @ 0x1407799C0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14038CCC4 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C23A60 != 4 )
    return 0;
  if ( byte_140C2335C )
    return 0;
  result = 1;
  if ( byte_140C23B19 != 1 || byte_140C23B10 != 1 || byte_140C23B1E != 2 )
    return 0;
  return result;
}
