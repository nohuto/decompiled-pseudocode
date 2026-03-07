unsigned int __fastcall Win81::AdjustScaleFactorForOverride(Win81 *this, int a2, struct tagSIZE a3, struct tagSIZE a4)
{
  _DWORD *v4; // rax
  int cx; // ebx
  unsigned int i; // edi

  v4 = &unk_1C009A2D0;
  cx = a3.cx;
  for ( i = 0; i < 5; ++i )
  {
    if ( (_DWORD)this == *v4 )
      break;
    ++v4;
  }
  if ( i >= 5 )
  {
    WdLogSingleEntry1(1LL, 448LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)idx < pScaleFactorCollection->NumFactors",
      448LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return Win81::SatisfyMinResolutionBarForScaleIdx(
           (Win81 *)(i + a2),
           cx,
           a3,
           *(const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const *)&a4);
}
