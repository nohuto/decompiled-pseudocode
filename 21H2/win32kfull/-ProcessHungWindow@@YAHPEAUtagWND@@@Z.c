/*
 * XREFs of ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840
 * Callers:
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x1C00E1170 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C0119440 (EditionHandleHungWindow.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0144890 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ProcessHungWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  struct tagWND *v2; // rdi
  struct tagWND *v3; // rcx

  v1 = 0;
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (struct tagWND *)*((_QWORD *)v2 + 15);
      if ( !v3 || !(unsigned int)IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    return (unsigned int)_GhostOwnerWindowAndOwnees(v2);
  }
  return v1;
}
