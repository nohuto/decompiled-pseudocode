__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v10; // edi

  if ( a1 == (struct tagWND *)GetDesktopWindow(a1, a2)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) != 0
    || *((_QWORD *)a1 + 13) != GetDesktopWindow(a1, v7) )
  {
    return xxxSetWindowPos(a1, v8, a5, a6 != 0 ? 20 : 28);
  }
  v10 = xxxSetWindowPos(a1, v8, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1, 0LL);
  return v10;
}
