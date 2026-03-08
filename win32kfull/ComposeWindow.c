/*
 * XREFs of ComposeWindow @ 0x1C002297C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C00228F4 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 *     zzzDecomposeDesktop @ 0x1C007CC0C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BBFC (_SetLayeredWindowAttributes.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C002C598 (UpdateWindowSpriteMonitor.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  void *v7; // rax
  __int64 v9; // rax
  char v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h]

  v11 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v4 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v4 + 26) & 8) != 0 )
    {
      v9 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      UpdateWindowSpriteMonitor(a1, v9);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
      }
      return 0;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
    v5 = xxxSetLayeredWindow(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = -1;
      v5 = SetLayeredWindowAttributes(a1, 0LL, v6, 4 * (a2 & 4 | 1u));
      if ( v5 < 0 )
      {
        UnsetLayeredWindow(a1, 3LL);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
        v7 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v7);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v5 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
    else
      v5 = 0;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  return (unsigned int)v5;
}
