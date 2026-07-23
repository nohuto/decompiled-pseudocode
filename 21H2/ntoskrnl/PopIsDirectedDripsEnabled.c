/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140738DE0
 * Callers:
 *     PopDripsWatchdogInitializeActions @ 0x140A9446C (PopDripsWatchdogInitializeActions.c)
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
