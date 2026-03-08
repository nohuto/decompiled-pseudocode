/*
 * XREFs of GreTextInitialized @ 0x1C010FB94
 * Callers:
 *     xxxInitWindowStation @ 0x1C00C1348 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     CreateBitmapStrip @ 0x1C010E370 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01C02EC (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02039A0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C800 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011E354 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall GreTextInitialized(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = SGDGetSessionState(a1);
  v2 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(v1 + 32) + 23568LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v2) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v2;
}
