/*
 * XREFs of ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EC818
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldComposeWindow(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // rax
  unsigned int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // r10
  int v7; // eax

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == a2
      && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0 )
    {
      if ( (unsigned int)IsTopLevelWindow(v5) )
        return 1;
      LOBYTE(v7) = IsDesktopWindow(v6);
      if ( v7 )
        return 1;
    }
  }
  return v3;
}
