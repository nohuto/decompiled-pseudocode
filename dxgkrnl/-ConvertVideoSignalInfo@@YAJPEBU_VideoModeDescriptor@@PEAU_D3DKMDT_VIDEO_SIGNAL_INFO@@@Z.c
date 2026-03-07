__int64 __fastcall ConvertVideoSignalInfo(const struct _VideoModeDescriptor *a1, struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2 AdditionalSignalInfo; // eax
  unsigned int v5; // eax
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *(_OWORD *)&a2->VideoStandard = 0LL;
  *(_OWORD *)&a2->ActiveSize.cy = 0LL;
  *(_OWORD *)&a2->HSyncFreq.Denominator = 0LL;
  *(_QWORD *)&a2->AdditionalSignalInfo = 0LL;
  a2->ActiveSize.cx = a1->HorizontalActivePixels;
  a2->ActiveSize.cy = a1->VerticalActivePixels;
  a2->HSyncFreq.Numerator = a1->HorizontalRefreshRateNumerator;
  a2->HSyncFreq.Denominator = a1->HorizontalRefreshRateDenominator;
  a2->VSyncFreq.Numerator = a1->VerticalRefreshRateNumerator;
  a2->VSyncFreq.Denominator = a1->VerticalRefreshRateDenominator;
  a2->PixelRate = a1->PixelClockRate;
  a2->TotalSize.cx = a1->HorizontalActivePixels + a1->HorizontalBlankingPixels;
  AdditionalSignalInfo = a2->AdditionalSignalInfo;
  a2->TotalSize.cy = a1->VerticalActivePixels + a1->VerticalBlankingPixels;
  if ( a1->IsInterlaced )
    v5 = *(_DWORD *)&AdditionalSignalInfo & 0xFFFFFFF8 | 2;
  else
    v5 = *(_DWORD *)&AdditionalSignalInfo & 0xFFFFFFF8 | 1;
  a2->AdditionalSignalInfo = (struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2)v5;
  result = ConvertVideoStandardType(a1->VideoStandardType, a2);
  if ( (int)result >= 0 )
  {
    v7 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2);
    v8 = v7;
    if ( v7 < 0 )
      WdLogSingleEntry1(2LL, v7);
    return v8;
  }
  return result;
}
