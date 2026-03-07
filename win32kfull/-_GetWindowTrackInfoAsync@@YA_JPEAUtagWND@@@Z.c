_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // r9
  const struct tagWND *v4; // rdx
  unsigned int v5; // r8d
  const struct tagTHREADINFO *v6; // r9

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 424))
    && v6 != v2
    && ShellWindowManagement::EligibleWindow((ShellWindowManagement **)a1, v4, v5)
    && (*((_DWORD *)v2 + 318) & 0x20) == 0
    && !IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    return BeginGetWidnowTrackInfoAsync((struct tagTHREADINFO **)a1);
  }
  UserSetLastError(5);
  return 0LL;
}
