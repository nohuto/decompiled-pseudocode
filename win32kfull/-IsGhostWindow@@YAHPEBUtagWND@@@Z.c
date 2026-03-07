_BOOL8 __fastcall IsGhostWindow(const struct tagWND *a1)
{
  return (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 682;
}
