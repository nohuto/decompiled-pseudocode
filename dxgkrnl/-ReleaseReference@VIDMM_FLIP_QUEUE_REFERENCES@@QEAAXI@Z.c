void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P)
{
  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
      WdLogSingleEntry5(0LL, 270LL, 42LL, P, P[2], 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
