bool __fastcall IsLeftSemiMaximized(const struct tagWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 80);
  return (v1 & 0x4000000) != 0 && (v1 & 0x8000000) == 0;
}
