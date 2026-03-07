char __fastcall DevmodeAutoRotateCompatible(const struct _devicemodeW *a1, const struct _devicemodeW *a2)
{
  unsigned int v2; // r9d
  DWORD v3; // r8d
  DWORD dmPelsWidth; // r11d
  DWORD dmPelsHeight; // eax

  v2 = 0;
  v3 = a2->dmFields & a1->dmFields;
  if ( (a2->dmFields & LOBYTE(a1->dmFields) & 0x80u) == 0 )
    goto LABEL_8;
  v2 = 1;
  if ( (v3 & 0x80000) == 0 )
    goto LABEL_8;
  v2 = 2;
  if ( (v3 & 0x100000) == 0 )
    goto LABEL_8;
  v2 = 3;
  dmPelsWidth = a1->dmPelsWidth;
  if ( (((a1->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0) != (((a2->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0) )
  {
    if ( dmPelsWidth == a2->dmPelsHeight )
    {
      dmPelsHeight = a2->dmPelsWidth;
      goto LABEL_7;
    }
LABEL_8:
    WdLogSingleEntry1(4LL, v2);
    return 0;
  }
  if ( dmPelsWidth != a2->dmPelsWidth )
    goto LABEL_8;
  dmPelsHeight = a2->dmPelsHeight;
LABEL_7:
  if ( a1->dmPelsHeight != dmPelsHeight )
    goto LABEL_8;
  v2 = 4;
  if ( (v3 & 0x20000000) != 0 && a1->dmDisplayFixedOutput != a2->dmDisplayFixedOutput )
    goto LABEL_8;
  v2 = 5;
  if ( (v3 & 0x20) != 0 && a1->dmPosition.x != a2->dmPosition.x )
    goto LABEL_8;
  v2 = 6;
  if ( (v3 & 0x20) != 0 && a1->dmPosition.y != a2->dmPosition.y )
    goto LABEL_8;
  v2 = 7;
  if ( (v3 & 0x800) != 0 && a1->dmColor != a2->dmColor )
    goto LABEL_8;
  v2 = 8;
  if ( (v3 & 0x1000) != 0 && a1->dmDuplex != a2->dmDuplex )
    goto LABEL_8;
  v2 = 9;
  if ( (v3 & 0x2000) != 0 && a1->dmYResolution != a2->dmYResolution )
    goto LABEL_8;
  v2 = 10;
  if ( (v3 & 0x4000) != 0 && a1->dmTTOption != a2->dmTTOption )
    goto LABEL_8;
  v2 = 11;
  if ( (v3 & 0x8000) != 0 && a1->dmCollate != a2->dmCollate )
    goto LABEL_8;
  v2 = 12;
  if ( (v3 & 0x20000) != 0 && a1->dmLogPixels != a2->dmLogPixels )
    goto LABEL_8;
  v2 = 13;
  if ( (v3 & 0x40000) != 0 && a1->dmBitsPerPel != a2->dmBitsPerPel )
    goto LABEL_8;
  v2 = 14;
  if ( (v3 & 0x200000) != 0 && a1->dmDisplayFlags != a2->dmDisplayFlags )
    goto LABEL_8;
  v2 = 15;
  if ( (v3 & 0x400000) != 0 && a1->dmDisplayFrequency != a2->dmDisplayFrequency )
    goto LABEL_8;
  v2 = 16;
  if ( (v3 & 0x800000) != 0 && a1->dmICMMethod != a2->dmICMMethod )
    goto LABEL_8;
  v2 = 17;
  if ( (v3 & 0x1000000) != 0 && a1->dmICMIntent != a2->dmICMIntent )
    goto LABEL_8;
  v2 = 18;
  if ( (v3 & 0x8000000) != 0 && a1->dmPanningWidth != a2->dmPanningWidth )
    goto LABEL_8;
  v2 = 19;
  if ( (v3 & 0x10000000) != 0 && a1->dmPanningHeight != a2->dmPanningHeight )
    goto LABEL_8;
  return 1;
}
