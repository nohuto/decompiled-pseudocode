/*
 * XREFs of CleanupGDI @ 0x1C000763C
 * Callers:
 *     CleanupResources @ 0x1C000716C (CleanupResources.c)
 * Callees:
 *     DelayedDestroyCacheDC @ 0x1C000737C (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0007448 (DestroyCacheDCEntries.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00079BC (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00079E4 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0007A18 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C0007AD0 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C000A650 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C000A95C (DrvCleanupAndDestroyMDEV.c)
 *     GreGetStockObject @ 0x1C002AB20 (GreGetStockObject.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C002DBE0 (HmgShareLockCheck.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
 *     hbmSelectBitmap @ 0x1C00911B0 (hbmSelectBitmap.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F6E4 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 CleanupGDI()
{
  int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  v0 = -1073741637;
  if ( gfade )
  {
    v11 = qword_1C0256C20 ? qword_1C0256C20() : -1073741637;
    if ( v11 >= 0 && qword_1C0256C28 )
      qword_1C0256C28();
  }
  DestroyDC(&qword_1C0252418);
  if ( qword_1C0253CA0 )
  {
    GreGetStockObject(21LL);
    hbmSelectBitmap(qword_1C0253CA8);
    GreDeleteObject(qword_1C0253CA0);
    qword_1C0253CA0 = 0LL;
  }
  DestroyDC(&qword_1C0253CA8);
  DestroyCacheDCEntries((__int64)gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1);
  v1 = gpDispInfo;
  v2 = *(_QWORD *)(gpDispInfo + 80);
  if ( v2 )
  {
    SURFREF::SURFREF((SURFREF *)v12);
    LOBYTE(v3) = 5;
    v13 = HmgShareLockCheck(v2, v3);
    if ( v13 && (v2 & 0x800000) == 0 )
    {
      LOBYTE(v4) = 5;
      HmgSetOwner(v2, 2147483650LL, v4);
    }
    SURFREF::~SURFREF((SURFREF *)v12);
    GreDeleteObject(*(HBRUSH *)(v1 + 80));
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  if ( qword_1C0256C50 )
    v5 = qword_1C0256C50();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0256C58 )
    qword_1C0256C58();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v6 = 4696LL;
  v7 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v6));
    v6 += 8LL;
    --v7;
  }
  while ( v7 );
  DestroyRegion((HRGN *)(gpDispInfo + 120));
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
    if ( qword_1C0256C30 )
      v0 = qword_1C0256C30();
    if ( v0 >= 0 && qword_1C0256C38 )
      qword_1C0256C38(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *(_QWORD *)(gpDispInfo + 16) )
  {
    DrvCleanupAndDestroyMDEV();
    Win32FreePool(*(_QWORD *)(gpDispInfo + 16));
    *(_QWORD *)(gpDispInfo + 16) = 0LL;
    *(_QWORD *)(gpDispInfo + 40) = 0LL;
  }
  result = gpDispInfo;
  v9 = *(_QWORD *)(gpDispInfo + 104);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 56);
      result = DestroyMonitor((struct tagMONITOR *)v9);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
