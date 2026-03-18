/*
 * XREFs of ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000236C
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x14000430C (memset_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x140004324 (IsChangeWindowMessageFilterExPresent.c)
 */

__int64 __fastcall CDwmAppHost::InitializeWindow(CDwmAppHost *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax
  unsigned int X; // [rsp+20h] [rbp-98h]
  WNDCLASSEXW v5; // [rsp+60h] [rbp-58h] BYREF

  v1 = 0;
  memset_0(&v5, 0, sizeof(v5));
  v5.cbSize = 80;
  v5.lpfnWndProc = (WNDPROC)CDwmAppHost::s_NotifyWndProc;
  v5.hInstance = g_dwmAppHost;
  v5.lpszClassName = L"Dwm";
  SetLastError(0);
  if ( RegisterClassExW(&v5) )
  {
    SetLastError(0);
    hwnd = CreateWindowExW(0, L"Dwm", L"DWM Notification Window", 0xA0000000, 0, 0, 0, 0, 0LL, 0LL, g_dwmAppHost, 0LL);
    if ( hwnd )
    {
      if ( (unsigned __int8)IsChangeWindowMessageFilterExPresent() )
      {
        ChangeWindowMessageFilterEx(hwnd, 0x1Au, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x15u, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x31Au, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x31Bu, 1u, 0LL);
      }
      return v1;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    X = 274;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    X = 261;
  }
  if ( LastError >= 0 )
    LastError = -2003304445;
  v1 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, X);
  return v1;
}
