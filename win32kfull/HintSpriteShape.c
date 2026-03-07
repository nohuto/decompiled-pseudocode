_BOOL8 __fastcall HintSpriteShape(__int64 a1, const struct tagWND *a2, __int64 a3, int a4)
{
  int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-98h] BYREF

  memset_0(v10, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, *(_QWORD *)a2, a3, v10, a4, v8, 1) != 0;
}
