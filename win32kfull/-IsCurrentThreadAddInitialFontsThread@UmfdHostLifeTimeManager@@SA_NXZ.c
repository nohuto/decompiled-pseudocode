/*
 * XREFs of ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C800
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F2EE4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 23512LL) == (_QWORD)KeGetCurrentThread();
}
