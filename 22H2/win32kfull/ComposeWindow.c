/*
 * XREFs of ComposeWindow @ 0x1C00C8A84
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C85B8 (DecomposeWindowIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00D3F28 (UpdateWindowSpriteMonitor.c)
 *     _SetLayeredWindowAttributes @ 0x1C00D5980 (_SetLayeredWindowAttributes.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h]

  v15 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v4 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v4 + 26) & 8) != 0 )
    {
      v11 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      UpdateWindowSpriteMonitor(a1, v11);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v12, v13);
      }
      return 0;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
    v5 = xxxSetLayeredWindow(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v6, v7);
    if ( v5 >= 0 )
    {
      v5 = SetLayeredWindowAttributes(a1);
      if ( v5 < 0 )
      {
        UnsetLayeredWindow(a1);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
        v9 = (void *)ReferenceDwmApiPort(v8);
        DwmAsyncChildStyleChange(v9);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v5 = UnsetLayeredWindow(a1);
    else
      v5 = 0;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  return (unsigned int)v5;
}
