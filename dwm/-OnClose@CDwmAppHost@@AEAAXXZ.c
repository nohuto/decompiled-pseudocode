void __fastcall CDwmAppHost::OnClose(CDwmAppHost *this)
{
  if ( (unsigned __int8)IsRegisterHotKeyPresent(this) )
    UnregisterHotKey(hwnd, 0);
  DestroyWindow(hwnd);
  hwnd = 0LL;
}
