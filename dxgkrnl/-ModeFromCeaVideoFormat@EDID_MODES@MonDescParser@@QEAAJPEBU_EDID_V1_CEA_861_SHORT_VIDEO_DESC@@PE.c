__int64 __fastcall MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(
        UCHAR *this,
        const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *a2,
        struct _VideoModeDescriptor *a3)
{
  char v5; // cl
  __int64 result; // rax
  __int64 v7; // r10

  v5 = *(_BYTE *)a2;
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 0x3F )
    return 3223126018LL;
  *(_OWORD *)&a3->PixelClockRate = 0LL;
  *(_OWORD *)&a3->HorizontalRefreshRateDenominator = 0LL;
  *(_OWORD *)&a3->HorizontalSyncPulseWidth = 0LL;
  v7 = 28LL * (v5 & 0x7F);
  *(_QWORD *)&a3->IsSyncOnRGB = 0LL;
  a3->HorizontalImageSize = *(unsigned __int8 *)(**(_QWORD **)this + 21LL);
  a3->VerticalImageSize = *(unsigned __int8 *)(**(_QWORD **)this + 22LL);
  result = GTF_GetVideoModeDescriptor(
             *(_WORD *)&byte_1C0119D50[v7 + 8],
             *(_WORD *)&byte_1C0119D50[v7 + 12],
             *(_DWORD *)&byte_1C0119D50[v7 + 20],
             *(_DWORD *)&byte_1C0119D50[v7 + 24],
             byte_1C0119D50[v7 + 16],
             a3);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)&a3->StereoModeType = 33685504;
    *(_DWORD *)&a3->CompositePolarityType = 453116418;
    a3->Origin = this[8];
    result = 0LL;
    a3->TimingType = 1;
  }
  return result;
}
