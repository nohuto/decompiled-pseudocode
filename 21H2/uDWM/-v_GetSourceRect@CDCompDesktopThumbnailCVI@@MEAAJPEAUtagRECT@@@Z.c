/*
 * XREFs of ?v_GetSourceRect@CDCompDesktopThumbnailCVI@@MEAAJPEAUtagRECT@@@Z @ 0x1800B7B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::v_GetSourceRect(HMONITOR *this, struct tagRECT *a2)
{
  unsigned int v4; // edi
  signed int LastError; // eax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v4 = 0;
  SetLastError(0);
  if ( GetMonitorInfoW(this[7], &mi) )
  {
    *a2 = mi.rcMonitor;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v4 = LastError;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x22Bu);
  }
  return v4;
}
