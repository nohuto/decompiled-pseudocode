/*
 * XREFs of ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009ACE8
 * Callers:
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18009B6E8 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedGlassSheet::AdjustTargetRect(RECT *this)
{
  const RECT *v2; // rcx
  unsigned int v3; // edi
  HMONITOR v4; // rsi
  signed int LastError; // eax
  LONG left; // edx
  CDesktopManager *v7; // rcx
  LONG right; // r8d
  LONG top; // r10d
  LONG bottom; // r9d
  LONG v11; // r8d
  LONG v12; // edx
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  v2 = this + 25;
  v3 = 0;
  this[26] = *v2;
  v4 = MonitorFromRect(v2, 0);
  if ( v4 )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    SetLastError(0);
    if ( GetMonitorInfoW(v4, &mi) )
    {
      left = this[26].left;
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      if ( mi.rcWork.left == left )
      {
        left -= (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60) * -8.0);
        this[26].left = left;
      }
      right = this[26].right;
      if ( mi.rcWork.right == right )
      {
        right -= (int)(*((double *)v7 + 60) * 8.0);
        this[26].right = right;
      }
      top = this[26].top;
      if ( mi.rcWork.top == top )
      {
        top -= (int)(*((double *)v7 + 60) * -8.0);
        this[26].top = top;
      }
      bottom = this[26].bottom;
      if ( mi.rcWork.bottom == bottom )
        bottom -= (int)(*((double *)v7 + 60) * 8.0);
      v11 = right - this[29].bottom;
      this[26].left = this[29].right + left;
      v12 = top + this[30].left;
      this[26].right = v11;
      this[26].bottom = bottom - this[30].top;
      this[26].top = v12;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v3 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x231u);
    }
  }
  return v3;
}
