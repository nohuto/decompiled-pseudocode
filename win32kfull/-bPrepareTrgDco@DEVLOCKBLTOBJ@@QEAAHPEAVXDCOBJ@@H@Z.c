/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00DEA84
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D50B8 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00DEB30 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  DC **v9; // r14
  __int64 v10; // rdx
  int v11; // ecx

  v6 = 1;
  if ( !a2 )
    goto LABEL_8;
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v7 + 36) & 0x200) == 0 )
    goto LABEL_8;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = (DC **)((char *)this + 120);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v7);
  v10 = *(_QWORD *)(v8 + 1400);
  if ( !*v9 || !*((_BYTE *)v9 + 17) )
  {
LABEL_9:
    v6 = 0;
LABEL_8:
    *((_QWORD *)this + 15) = 0LL;
    return v6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 22) )
  {
    *((_DWORD *)*v9 + 9) |= 0x4000u;
    DC::pSurface(*v9, (struct SURFACE *)(v10 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  if ( (unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
    return v6;
  if ( !a3 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 18) )
    {
      if ( *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v9);
    DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    goto LABEL_9;
  }
  *((_DWORD *)*v9 + 11) |= 1u;
  return 0LL;
}
