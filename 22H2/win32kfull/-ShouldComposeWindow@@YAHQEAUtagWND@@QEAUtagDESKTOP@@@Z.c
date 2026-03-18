/*
 * XREFs of ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0059090
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldComposeWindow(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // rax
  unsigned int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2
    && v2 == a2
    && !(unsigned int)IsWindowBeingDestroyed(a1)
    && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0
    && ((unsigned int)IsTopLevelWindow(v5) || (unsigned int)IsDesktopWindow(v6)) )
  {
    return 1;
  }
  return v3;
}
