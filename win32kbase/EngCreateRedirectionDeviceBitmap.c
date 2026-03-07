HBITMAP __stdcall EngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return (HBITMAP)hbmCreateDriverSurface(3, dhsurf, sizl, 0, iFormatCompat, 0x800u, (void *)0xDEADBEEFLL);
}
