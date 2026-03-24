/*
 * XREFs of GreTextInitialized @ 0x1C00E3548
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C0B8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     CreateBitmapStrip @ 0x1C00E29D0 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C00E33C8 (GetCharDimensions.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01EA10C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223290 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E411C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread();
}
