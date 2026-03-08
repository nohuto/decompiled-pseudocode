/*
 * XREFs of IsDesktopWindow @ 0x1C002C460
 * Callers:
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     TrackLayeredZorder @ 0x1C002C250 (TrackLayeredZorder.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002C3AC (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C3EC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C007CC0C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C007D680 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
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
