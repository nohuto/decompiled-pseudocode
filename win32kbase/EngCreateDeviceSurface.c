HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) != 1
    && (iFormatCompat & 0xFFFF7FFF) != 2
    && (iFormatCompat & 0xFFFF7FFF) != 3
    && (iFormatCompat & 0xFFFF7FFF) != 4
    && (iFormatCompat & 0xFFFF7FFF) - 5 >= 2 )
  {
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  }
  return (HSURF)hbmCreateDriverSurface(1, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
