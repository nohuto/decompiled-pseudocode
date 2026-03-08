/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140867174
 * Callers:
 *     PopDripsWatchdogInitializeActions @ 0x140B936AC (PopDripsWatchdogInitializeActions.c)
 * Callees:
 *     <none>
 */

char PopIsDirectedDripsEnabled()
{
  ULONG HandleAttributes; // eax
  ULONG v1; // ett

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v1 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v1 != HandleAttributes );
  return HandleAttributes & 1;
}
