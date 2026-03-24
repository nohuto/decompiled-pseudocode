/*
 * XREFs of CleanupGDI @ 0x1C0008ABC
 * Callers:
 *     CleanupResources @ 0x1C00085EC (CleanupResources.c)
 * Callees:
 *     DelayedDestroyCacheDC @ 0x1C00087FC (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C00088C8 (DestroyCacheDCEntries.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0008E3C (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0008E64 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0008E98 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C0008F50 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C000BAD0 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C000BDDC (DrvCleanupAndDestroyMDEV.c)
 *     GreGetStockObject @ 0x1C002BF90 (GreGetStockObject.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     hbmSelectBitmap @ 0x1C0092050 (hbmSelectBitmap.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F580 (--0SURFREF@@QEAA@XZ.c)
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
    v11 = qword_1C0255C20 ? qword_1C0255C20() : -1073741637;
    if ( v11 >= 0 && qword_1C0255C28 )
      qword_1C0255C28();
  }
  DestroyDC(&qword_1C0252F10);
  if ( qword_1C0252CF0 )
  {
    GreGetStockObject(21LL);
    hbmSelectBitmap(qword_1C0252CF8);
    GreDeleteObject(qword_1C0252CF0);
    qword_1C0252CF0 = 0LL;
  }
  DestroyDC(&qword_1C0252CF8);
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
  if ( qword_1C0255C50 )
    v5 = qword_1C0255C50();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0255C58 )
    qword_1C0255C58();
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
    if ( qword_1C0255C30 )
      v0 = qword_1C0255C30();
    if ( v0 >= 0 && qword_1C0255C38 )
      qword_1C0255C38(g_pWallpaperSettings);
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
