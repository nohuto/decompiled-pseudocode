unsigned int __fastcall Win81::AdjustDesktopScaleFactorForOverride(
        Win81 *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  unsigned int v6; // esi
  struct Win81::DPI_SCALE_FACTOR_COLLECTION *v8; // [rsp+20h] [rbp-38h]

  cx = a3.cx;
  v6 = (unsigned int)this;
  if ( (unsigned int)(a3.cx + 4) > 8 )
  {
    WdLogSingleEntry1(1LL, 464LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(Override >= MIN_DESKTOPDPIOVERRIDE) && (Override <= MAX_DESKTOPDPIOVERRIDE)",
      464LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return Win81::AdjustScaleFactorForOverride((Win81 *)v6, cx, a2, a4, v8);
}
