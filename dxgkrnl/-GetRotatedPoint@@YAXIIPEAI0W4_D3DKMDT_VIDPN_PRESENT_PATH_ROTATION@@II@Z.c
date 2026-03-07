void __fastcall GetRotatedPoint(
        unsigned int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx

  if ( a5 != D3DKMDT_VPPR_IDENTITY )
  {
    switch ( a5 )
    {
      case D3DKMDT_VPPR_ROTATE90:
        v13 = a2;
        v11 = a6 - a1 - 1;
        goto LABEL_12;
      case D3DKMDT_VPPR_ROTATE180:
        v11 = a7 - a2 - 1;
        v12 = a6 - a1;
        goto LABEL_7;
      case D3DKMDT_VPPR_ROTATE270:
        v11 = a1;
        v12 = a7 - a2;
LABEL_7:
        v13 = v12 - 1;
        goto LABEL_12;
    }
  }
  if ( a5 != D3DKMDT_VPPR_IDENTITY )
  {
    WdLogSingleEntry1(1LL, 387LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Orientation == D3DKMDT_VPPR_IDENTITY",
      387LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a2;
  v13 = a1;
LABEL_12:
  *a3 = v13;
  *a4 = v11;
}
