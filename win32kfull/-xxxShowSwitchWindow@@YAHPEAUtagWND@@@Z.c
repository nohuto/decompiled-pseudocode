__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rsi
  struct tagSwitchWndInfo *v3; // rax
  struct tagSwitchWndInfo *v4; // rdi
  struct tagSwitchWndInfo *v5; // rax
  struct tagSwitchWndInfo *v6; // rax
  __m128i v8; // [rsp+40h] [rbp-18h] BYREF

  v1 = gspwndAltTab;
  v2 = *(_QWORD *)(GetDispInfo(a1) + 96);
  v3 = Getpswi(v1);
  v4 = v3;
  if ( !v3
    || *((_DWORD *)v3 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v4 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v8 = *GetMonitorWorkRect(&v8, v2);
  xxxSetWindowPos(v1, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x10) == 0 )
  {
    v5 = Getpswi(v1);
    if ( !v5 )
      return 0LL;
    xxxSetWindowPos(
      v1,
      -1LL,
      (unsigned int)((v8.m128i_i32[0] + v8.m128i_i32[2] - *((_DWORD *)v5 + 19)) / 2),
      (unsigned int)((v8.m128i_i32[1] + v8.m128i_i32[3] - *((_DWORD *)v5 + 20)) / 2),
      *((_DWORD *)v5 + 19),
      *((_DWORD *)v5 + 20),
      80);
  }
  xxxInternalUpdateWindow(v1, 1u);
  xxxWindowEvent(0x14u, v1, -4, 0, 1);
  v6 = Getpswi(v1);
  if ( v6 )
  {
    xxxWindowEvent(0x8005u, v1, -4, *((_DWORD *)v6 + 17) + 1 + *((_DWORD *)v6 + 14) * *((_DWORD *)v6 + 18), 1);
    return 1LL;
  }
  return 0LL;
}
