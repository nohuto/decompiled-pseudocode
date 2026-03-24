/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FF2E8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00FF390 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FF3FC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct XDCOBJ *v10; // rsi
  DC *v11; // rdx
  int v12; // ecx

  v7 = 1;
  if ( !a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_3;
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 176);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), *(HDC *)v8);
  v11 = *(DC **)v10;
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 49) )
  {
LABEL_10:
    v7 = 0;
LABEL_3:
    *((_QWORD *)this + 22) = 0LL;
    return v7;
  }
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
  {
    *((_DWORD *)v11 + 9) |= 0x4000u;
    DC::pSurface(*(DC **)v10, *((struct SURFACE **)this + 29));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v11) )
  {
    if ( a4 )
    {
      *(_DWORD *)(*(_QWORD *)v10 + 44LL) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v10);
    DLODCOBJ::vUnlock(v10);
    goto LABEL_10;
  }
  return v7;
}
