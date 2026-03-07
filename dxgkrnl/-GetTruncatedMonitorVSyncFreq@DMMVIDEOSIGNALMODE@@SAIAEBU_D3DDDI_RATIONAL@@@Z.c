__int64 __fastcall DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(const struct _D3DDDI_RATIONAL *a1)
{
  UINT Denominator; // r8d

  Denominator = a1->Denominator;
  if ( Denominator )
    return a1->Numerator / Denominator;
  else
    return 0xFFFFFFFFLL;
}
