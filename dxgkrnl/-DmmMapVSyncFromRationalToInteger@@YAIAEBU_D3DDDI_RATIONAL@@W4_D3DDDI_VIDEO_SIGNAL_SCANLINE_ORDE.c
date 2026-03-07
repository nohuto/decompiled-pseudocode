__int64 __fastcall DmmMapVSyncFromRationalToInteger(
        const struct _D3DDDI_RATIONAL *a1,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a2,
        unsigned __int8 *a3)
{
  UINT v6; // ebx
  __int64 v7; // rbp
  UINT v9; // eax

  if ( !a1->Denominator )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    *a3 = 0;
  v6 = DMMVIDEOSIGNALMODE::DivideAndRound(a1->Numerator, a1->Denominator);
  v7 = 0LL;
  while ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a1, (const struct _D3DDDI_RATIONAL *)&unk_1C008F388 + v7, 50) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_8;
  }
  v9 = a1->Numerator / a1->Denominator;
  if ( v9 != v6 && a3 )
    *a3 = 1;
  v6 = v9;
LABEL_8:
  if ( (unsigned int)(a2 - 2) <= 1 )
    v6 >>= 1;
  return v6;
}
