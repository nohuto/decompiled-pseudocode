/*
 * XREFs of IsDesktopWindow @ 0x1C00D3DF0
 * Callers:
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0059090 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C005A330 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     TrackLayeredZorder @ 0x1C00D3BE0 (TrackLayeredZorder.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00D3D3C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00D3D7C (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 24);
  }
  return a1 == v2;
}
