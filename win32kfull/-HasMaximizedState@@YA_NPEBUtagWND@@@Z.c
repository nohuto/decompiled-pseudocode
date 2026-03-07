char __fastcall HasMaximizedState(const struct tagWND *a1)
{
  bool v1; // al
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rcx

  v1 = IsSemiMaximized(a1);
  v3 = 0;
  if ( v1 )
    return 1;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 0x40) != 0 )
    return 1;
  return v3;
}
