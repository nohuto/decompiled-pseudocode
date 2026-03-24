/*
 * XREFs of ProcessHungWindow @ 0x1C00037AC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x1C0041510 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00416E0 (xxxHungAppDemon.c)
 *     EditionHandleHungWindow @ 0x1C012C370 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037FC (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     IsHungWindow @ 0x1C0041810 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C01273E4 (ShouldProcessHungWindow.c)
 */

__int64 ProcessHungWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi

  v0 = 0;
  v1 = ShouldProcessHungWindow();
  if ( v1 )
  {
    while ( *(_QWORD *)(v1 + 120) && (unsigned int)IsHungWindow() )
      v1 = *(_QWORD *)(v1 + 120);
    return (unsigned int)_GhostOwnerWindowAndOwnees((struct tagWND *)v1);
  }
  return v0;
}
