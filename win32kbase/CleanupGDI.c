PVOID CleanupGDI()
{
  struct HOBJ__ **v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rdx
  int *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rdx
  PVOID result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  HBITMAP StockObject; // rax
  __int64 v12; // rdx

  DestroyDC((HDC *)gpDispInfo + 7);
  DestroyDC((HDC *)gpDispInfo + 8);
  DestroyDC((HDC *)gpDispInfo + 9);
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && qword_1C02D6258 && (int)qword_1C02D6258() >= 0 && qword_1C02D6260 )
    qword_1C02D6260();
  DestroyDC(&qword_1C02D2EC0);
  if ( qword_1C02D2F80 )
  {
    StockObject = (HBITMAP)GreGetStockObject(21);
    hbmSelectBitmap(qword_1C02D2F88, StockObject, 0, 0);
    GreDeleteObject((struct HOBJ__ *)qword_1C02D2F80, v12);
    qword_1C02D2F80 = 0LL;
  }
  DestroyDC(&qword_1C02D2F88);
  DestroyCacheDCEntries((__int64)gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1);
  v0 = (struct HOBJ__ **)gpDispInfo;
  v1 = *((_QWORD *)gpDispInfo + 10);
  if ( v1 )
  {
    v3 = (int *)HmgShareLockCheck(*((_QWORD *)gpDispInfo + 10), 5);
    if ( v3 )
    {
      if ( (v1 & 0x800000) == 0 )
        HmgSetOwner(v1, -2147483646, 5);
      HmgDecrementShareReferenceCountEx(v3, 0LL);
    }
    GreDeleteObject(v0[10], v2);
    v0[10] = 0LL;
  }
  if ( qword_1C02D6288 && (int)qword_1C02D6288() >= 0 && qword_1C02D6290 )
    qword_1C02D6290();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v4 = 4696LL;
  v5 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v4));
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  DestroyRegion((HRGN *)gpDispInfo + 15);
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
  DestroyAllDPIMETRICSFonts(&gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(&g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( qword_1C02D6268 && (int)qword_1C02D6268() >= 0 && qword_1C02D6270 )
      qword_1C02D6270(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject((struct HOBJ__ *)g_hbmDesktopPattern, v6);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *((_QWORD *)gpDispInfo + 2) )
  {
    DrvCleanupAndDestroyMDEV();
    v7 = (char *)*((_QWORD *)gpDispInfo + 2);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    *((_QWORD *)gpDispInfo + 2) = 0LL;
    *((_QWORD *)gpDispInfo + 5) = 0LL;
  }
  result = gpDispInfo;
  v9 = *((_QWORD *)gpDispInfo + 13);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 56);
      result = (PVOID)DestroyMonitor((struct tagMONITOR *)v9);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( gpMonitorCached )
    return (PVOID)DestroyMonitor(gpMonitorCached);
  return result;
}
