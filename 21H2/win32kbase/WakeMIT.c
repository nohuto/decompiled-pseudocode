/*
 * XREFs of WakeMIT @ 0x1C00A6270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WakeMIT(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( gbMIT )
  {
    _m_prefetchw(&gdwMITWakeReason);
    if ( (_InterlockedOr(&gdwMITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghMITEvent, 0LL);
    return 1;
  }
  return result;
}
