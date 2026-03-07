char __fastcall WakeMIT(unsigned int a1)
{
  char v1; // bl

  if ( !gbMIT )
    return 0;
  v1 = 1;
  _m_prefetchw(&gdwMITWakeReason);
  if ( !_InterlockedOr(&gdwMITWakeReason, a1) )
    ZwSetEvent(ghMITEvent, 0LL);
  return v1;
}
