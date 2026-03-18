/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00DBBF8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9F20 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02998C8 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rbx
  struct XDCOBJ *v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  DC *v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // r15d

  v3 = 0;
  v7 = 1;
  if ( a2 )
  {
    v8 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(v8 + 36) & 0x200) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 48);
      v10 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v8);
      v11 = *(_QWORD *)(v9 + 1400);
      if ( *(_QWORD *)v10 && *((_BYTE *)v10 + 49) )
      {
        v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && v11 && !*((_QWORD *)this + 30) )
        {
          *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
          DC::pSurface(*(DC **)v10, (struct SURFACE *)(v11 - 24));
          *((_DWORD *)this + 28) |= 0x10u;
        }
        v13 = *(DC **)v10;
        if ( !*(_QWORD *)v10 )
          return 1;
        if ( !*((_BYTE *)v10 + 49) )
          return 1;
        if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
          return 1;
        v14 = *((_QWORD *)v13 + 62);
        if ( !v14 )
          return 1;
        v15 = SURFACE::Map(*((_QWORD *)v13 + 62), this, v13);
        if ( v15 <= 1 )
        {
          if ( (*(_DWORD *)(v14 + 112) & 0x800) != 0 && *(_QWORD *)(v14 + 248) && (unsigned int)bHookRedir(v10) )
            *((_DWORD *)this + 28) |= 0x400u;
          if ( (*(_DWORD *)(v14 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v10) )
            *((_DWORD *)this + 28) |= 0x2000u;
          if ( v15 == 1 )
            *((_DWORD *)this + 28) |= 0x40u;
          return 1;
        }
        if ( v15 != 2 )
          return 1;
        if ( a3 )
        {
          *(_DWORD *)(*(_QWORD *)v10 + 44LL) |= 1u;
          return v3;
        }
        if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 22) && *((_BYTE *)this + 225) )
          DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
        DEVLOCKBLTOBJ::vClearRenderState(this, (DC **)v10);
        DLODCOBJ::vUnlock(v10);
      }
      v7 = 0;
    }
  }
  *((_QWORD *)this + 15) = 0LL;
  return v7;
}
