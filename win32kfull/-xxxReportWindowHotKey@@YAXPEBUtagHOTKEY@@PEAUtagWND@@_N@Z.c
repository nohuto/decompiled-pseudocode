void __fastcall xxxReportWindowHotKey(const struct tagHOTKEY *a1, struct tagTHREADINFO **a2, bool a3)
{
  const struct tagHOTKEY *v6; // rcx

  if ( *((_DWORD *)a1 + 10) == -7 )
    *(_DWORD *)(SGDGetUserSessionState() + 13828) = 0;
  ShellHangDetection::Execute(a1);
  if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) )
    *(_QWORD *)(SGDGetUserSessionState() + 13784) = 0LL;
  v6 = (const struct tagHOTKEY *)*((_QWORD *)a1 + 7);
  if ( v6 == (const struct tagHOTKEY *)((char *)a1 + 56) )
  {
    PostMessage(a2, 274LL, 61744LL, 0LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, a2[2], a3);
  }
  else
  {
    xxxReportHotKeyToShell(
      *((struct tagWND **)v6 - 3),
      *((unsigned __int16 *)a1 + 16) | (*((unsigned __int16 *)a1 + 18) << 16),
      *((int *)v6 - 3),
      *((HWND *)v6 - 1),
      a3);
  }
}
