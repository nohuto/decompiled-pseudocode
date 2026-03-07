// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P)
{
  __int64 v2; // rdx

  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
    {
      v2 = P[2];
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 42LL, P, v2, 0LL);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
