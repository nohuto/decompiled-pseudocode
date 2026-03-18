/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0042384
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0042300 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0043D50 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  DC **v9; // rsi
  DC *v10; // rdx
  int v11; // ecx

  v7 = 1;
  if ( !a2 )
    goto LABEL_8;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_8;
  v9 = (DC **)((char *)this + 176);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), *(HDC *)v8);
  v10 = *v9;
  if ( !*v9 || !*((_BYTE *)v9 + 49) )
  {
LABEL_12:
    v7 = 0;
LABEL_8:
    *((_QWORD *)this + 22) = 0LL;
    return v7;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
  {
    *((_DWORD *)v10 + 9) |= 0x4000u;
    DC::pSurface(*v9, *((struct SURFACE **)this + 29));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v10) )
  {
    if ( a4 )
    {
      *((_DWORD *)*v9 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v9);
    DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    goto LABEL_12;
  }
  return v7;
}
