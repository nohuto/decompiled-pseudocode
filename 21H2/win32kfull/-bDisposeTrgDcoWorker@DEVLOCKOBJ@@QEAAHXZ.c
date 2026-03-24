/*
 * XREFs of ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008E8EC
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027C5EC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00B3CBC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00FF1AC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C01256A0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDcoWorker(DEVLOCKOBJ *this)
{
  DC **v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rbx

  v1 = (DC **)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 && *((_BYTE *)this + 81) )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *((_DWORD *)*v1 + 9) &= ~0x4000u;
        DC::pSurface(*v1, *(struct SURFACE **)(v6 + 2552));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v1);
    *v1 = 0LL;
  }
  return v4;
}
