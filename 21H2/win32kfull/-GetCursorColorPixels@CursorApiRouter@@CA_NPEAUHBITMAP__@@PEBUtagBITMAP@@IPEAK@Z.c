/*
 * XREFs of ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1C023A12C
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A3E8 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

bool __fastcall CursorApiRouter::GetCursorColorPixels(HSURF a1, const struct tagBITMAP *a2, int a3, unsigned int *a4)
{
  LONG bmWidth; // r10d
  LONG bmHeight; // r9d
  struct tagBITMAPINFO v8; // [rsp+50h] [rbp-48h] BYREF

  bmWidth = a2->bmWidth;
  bmHeight = a2->bmHeight;
  if ( bmHeight * bmWidth == a3 )
  {
    memset(&v8.bmiHeader.biCompression, 0, 28);
    v8.bmiHeader.biWidth = bmWidth;
    v8.bmiHeader.biHeight = -bmHeight;
    v8.bmiHeader.biSize = 40;
    *(_DWORD *)&v8.bmiHeader.biPlanes = 2097153;
    return (unsigned int)GreGetDIBitsInternal(
                           *(HDC *)(gpDispInfo + 56LL),
                           a1,
                           0,
                           bmHeight,
                           (__int64)a4,
                           &v8,
                           0,
                           bmHeight * (((32 * bmWidth) >> 3) & 0xFFFFFFFC),
                           0x28u) != 0;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return 0;
  }
}
