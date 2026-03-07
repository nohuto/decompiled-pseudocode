__int64 __fastcall ShellWindowManagement::GetWindowTrackState(const struct tagWND *a1, char a2)
{
  unsigned int v2; // r8d
  char v3; // r9

  v2 = 0;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 1) != 0 )
  {
    return 1;
  }
  else if ( (v3 & 0x20) != 0 )
  {
    return 2;
  }
  else if ( a2 && IsSemiMaximized(a1) )
  {
    return 3;
  }
  return v2;
}
