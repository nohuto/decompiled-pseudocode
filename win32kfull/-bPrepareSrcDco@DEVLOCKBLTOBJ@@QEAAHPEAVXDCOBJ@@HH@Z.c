/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0014A78 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004DD9C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  DC **v9; // rsi
  int v10; // edx
  int v11; // ecx

  v7 = 1;
  if ( !a2 )
    goto LABEL_9;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_9;
  v9 = (DC **)((char *)this + 144);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 144), *(HDC *)v8);
  if ( !*v9 || !*((_BYTE *)v9 + 17) )
  {
LABEL_8:
    v7 = 0;
LABEL_9:
    *((_QWORD *)this + 18) = 0LL;
    return v7;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 )
  {
    v10 = 0x4000;
    if ( (v11 & 0x4000) == 0 && *((_QWORD *)this + 21) && !*((_QWORD *)this + 25) )
    {
      *((_DWORD *)*v9 + 9) |= 0x4000u;
      DC::pSurface(*v9, *((struct SURFACE **)this + 21));
      *((_DWORD *)this + 28) |= 0x20u;
    }
  }
  if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v10) )
    return v7;
  if ( !a4 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 15) )
    {
      if ( *((_BYTE *)this + 137) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v9);
    DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    goto LABEL_8;
  }
  *((_DWORD *)*v9 + 11) |= 1u;
  return 0LL;
}
