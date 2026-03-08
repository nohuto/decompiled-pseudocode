/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0050FF4
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027A1EC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDco(DEVLOCKOBJ *this)
{
  DC **v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rbx

  v1 = (DC **)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 && *((_BYTE *)this + 49) )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *((_DWORD *)*v1 + 9) &= ~0x4000u;
        DC::pSurface(*v1, *(struct SURFACE **)(v5 + 2528));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v1);
    *v1 = 0LL;
  }
  return v4;
}
