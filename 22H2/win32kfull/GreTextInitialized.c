/*
 * XREFs of GreTextInitialized @ 0x1C007A410
 * Callers:
 *     xxxInitWindowStation @ 0x1C003DB88 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 *     CreateBitmapStrip @ 0x1C0076930 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BF14C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200E00 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0079B78 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0113788 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
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
