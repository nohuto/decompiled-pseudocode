/*
 * XREFs of ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C006BF88
 * Callers:
 *     ?GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C006BEEC (-GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(const struct _D3DDDI_RATIONAL *a1)
{
  UINT Denominator; // r8d

  Denominator = a1->Denominator;
  if ( Denominator )
    return a1->Numerator / Denominator;
  else
    return 0xFFFFFFFFLL;
}
