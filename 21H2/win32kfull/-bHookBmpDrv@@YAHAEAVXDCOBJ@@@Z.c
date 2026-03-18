/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02998C8
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00DBB40 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C000B524 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00153F0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  char *v5; // rbx
  struct RFONT *v6; // rdx
  signed __int32 v7; // ett
  char *v8; // rax
  char *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( gbNoHookBmpDev )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) != 0 )
    return 0LL;
  v4 = *(_DWORD **)(v3 + 48);
  v11 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( ((v4[10] & 0x20000000) != 0 || (v4[524] & 0x8000) != 0) && (v4[524] & 0x1000) != 0 )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    v5 = (char *)gpBmpDev;
    if ( gpBmpDev || (gpBmpDev = PDEV::Allocate(0), (v5 = (char *)gpBmpDev) != 0LL) )
    {
      if ( *(char **)(*(_QWORD *)a1 + 48LL) != v5 )
      {
        v10 = v5;
        memmove(v5, v4, 0xDA8uLL);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v10, 0LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v10, v6);
        if ( (*((_DWORD *)v5 + 10) & 0x800000) != 0 )
          *(_DWORD *)(*((_QWORD *)v5 + 437) + 1528LL) = 0;
        else
          *((_DWORD *)v5 + 382) = 0;
        _m_prefetchw(v5 + 40);
        do
          v7 = *((_DWORD *)v5 + 10);
        while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 10, v7 | 0x800000, v7) );
        v8 = v10;
        *((_QWORD *)v10 + 437) = v4;
        *((_QWORD *)v8 + 10) = v8;
        *((_QWORD *)gpBmpDev + 356) = BmpDevTextOut;
        *((_QWORD *)gpBmpDev + 347) = BmpDevStrokePath;
        *((_QWORD *)gpBmpDev + 352) = BmpDevCopyBits;
        *((_QWORD *)gpBmpDev + 351) = BmpDevBitBlt;
        *((_QWORD *)gpBmpDev + 364) = BmpDevLineTo;
        *((_QWORD *)gpBmpDev + 348) = BmpDevFillPath;
        *((_QWORD *)gpBmpDev + 349) = BmpDevStrokeAndFillPath;
        *((_QWORD *)gpBmpDev + 353) = BmpDevStretchBlt;
        *((_QWORD *)gpBmpDev + 404) = BmpDevAlphaBlend;
        *((_QWORD *)gpBmpDev + 407) = BmpDevTransparentBlt;
        *((_QWORD *)gpBmpDev + 401) = BmpDevGradientFill;
        *((_QWORD *)gpBmpDev + 423) = BmpDevDrawStream;
        *((_QWORD *)gpBmpDev + 424) = BmpDevNineGrid;
        *((_QWORD *)gpBmpDev + 403) = BmpDevPlgBlt;
        bBmpMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
        v1 = 1;
        *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpBmpDev;
      }
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 112LL) &= ~0x10u;
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
  }
  return v1;
}
