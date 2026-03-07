void __fastcall CaretBlinkProc(struct tagWND *a1)
{
  __int64 v1; // r8
  struct tagWND *v2; // r11
  int v3; // edx
  int v4; // ecx
  bool v5; // zf

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  v2 = *(struct tagWND **)(v1 + 304);
  if ( a1 == v2 )
  {
    v3 = *(_DWORD *)(v1 + 320);
    if ( v3 > 0 )
      *(_DWORD *)(v1 + 320) = --v3;
    if ( (*(_BYTE *)(v1 + 312) & 3) == 3
      && (*(_DWORD *)(gpsi + 4984LL) == -1 || (*(_DWORD *)(gpsi + 2236LL) & 4) == 0 || !v3) )
    {
      RemoveCaretTimer(v2, (struct tagQ *)v1);
    }
    else
    {
      v4 = *(_DWORD *)(v1 + 312) ^ ((unsigned __int8)*(_DWORD *)(v1 + 312) ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(v1 + 312)) & 2;
      v5 = *(_DWORD *)(v1 + 316) == 0;
      *(_DWORD *)(v1 + 312) = v4;
      if ( v5 )
      {
        *(_DWORD *)(v1 + 312) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)~(_BYTE)v4) & 1;
        UT_InvertCaret();
      }
    }
  }
}
