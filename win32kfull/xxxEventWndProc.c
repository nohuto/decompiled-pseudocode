__int64 __fastcall xxxEventWndProc(struct tagWND *a1, __int64 a2, HWND a3, unsigned __int16 *a4)
{
  __int64 v4; // rax
  unsigned int v7; // edi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v12; // dx

  v4 = *((_QWORD *)a1 + 5);
  v7 = a2;
  if ( *(_WORD *)(v4 + 42) )
    return 0LL;
  v9 = (_QWORD *)*((_QWORD *)a1 + 35);
  if ( !v9 )
    return xxxDefWindowProc(a1, v7, a3, (__int64)a4);
  if ( *(_DWORD *)(v4 + 248) < 8u )
    return xxxDefWindowProc(a1, v7, a3, (__int64)a4);
  LOBYTE(a2) = 9;
  v10 = HMValidateHandleNoRip(*v9, a2);
  if ( !v10 )
    return xxxDefWindowProc(a1, v7, a3, (__int64)a4);
  if ( v7 == 2 )
  {
    xxxChangeMonitorFlags(v10, 0);
    return 0LL;
  }
  if ( v7 != 60 )
    return xxxDefWindowProc(a1, v7, a3, (__int64)a4);
  v12 = a4[2];
  if ( (*(_DWORD *)(v10 + 40) & *(_DWORD *)a4) != 0 )
  {
    if ( !v12 )
      return 0LL;
    goto LABEL_10;
  }
  if ( !v12 )
LABEL_10:
    ClientEventCallback(*(_QWORD *)(v10 + 56), a4);
  return 0LL;
}
