/*
 * XREFs of DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0051040
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bDisposeTrgDcoWrap(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v5; // rbx

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 && *((_BYTE *)this + 49) )
  {
    v5 = *(_QWORD *)(v1 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v3 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v5 + 2528));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  return v3;
}
