__int64 __fastcall xxxShowWindow(struct tagWND *a1, __int64 a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
