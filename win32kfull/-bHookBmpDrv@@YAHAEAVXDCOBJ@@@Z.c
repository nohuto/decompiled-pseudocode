/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5774
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0051390 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00DEB30 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0122FB8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5660 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  _DWORD *v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct RFONT *v10; // rdx
  signed __int32 v11; // ett
  _QWORD *v12; // rax
  void *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8616LL) )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) != 0 )
    return 0LL;
  v4 = *(_DWORD **)(v3 + 48);
  v14 = *((_QWORD *)Gre::Base::Globals(v2) + 15);
  GreAcquireSemaphore(v14);
  v5 = v4 + 524;
  if ( (v4[10] & 0x20000000) == 0 && (*v5 & 0x8000) == 0 || (*v5 & 0x1000) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 112LL) &= ~0x10u;
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    return 0LL;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  v8 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
  if ( !*(_QWORD *)(v8 + 8608) )
    *(_QWORD *)(v8 + 8608) = PDEV::Allocate(0);
  v9 = *(_QWORD *)(v8 + 8608);
  if ( !v9 || *(_QWORD *)(*(_QWORD *)a1 + 48LL) == v9 )
    return 0LL;
  v13 = *(void **)(v8 + 8608);
  memmove(v13, v4, 0xDA8uLL);
  PDEVOBJ::prfntActive((PDEVOBJ *)&v13, 0LL);
  PDEVOBJ::prfntInactive((PDEVOBJ *)&v13, v10);
  if ( (*(_DWORD *)(v9 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(v9 + 3496) + 1528LL) = 0;
  else
    *(_DWORD *)(v9 + 1528) = 0;
  _m_prefetchw((const void *)(v9 + 40));
  do
    v11 = *(_DWORD *)(v9 + 40);
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 40), v11 | 0x800000, v11) );
  v12 = v13;
  *((_QWORD *)v13 + 437) = v4;
  v12[10] = v12;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2848LL) = BmpDevTextOut;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2776LL) = BmpDevStrokePath;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2816LL) = BmpDevCopyBits;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2808LL) = BmpDevBitBlt;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2912LL) = BmpDevLineTo;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2784LL) = BmpDevFillPath;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2792LL) = BmpDevStrokeAndFillPath;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 2824LL) = BmpDevStretchBlt;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3232LL) = BmpDevAlphaBlend;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3256LL) = BmpDevTransparentBlt;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3208LL) = BmpDevGradientFill;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3384LL) = BmpDevDrawStream;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3392LL) = BmpDevNineGrid;
  *(_QWORD *)(*(_QWORD *)(v8 + 8608) + 3224LL) = BmpDevPlgBlt;
  bBmpMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = *(_QWORD *)(v8 + 8608);
  return 1LL;
}
