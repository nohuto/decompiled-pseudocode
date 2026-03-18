/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9590
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0275B60 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  DC **v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx

  v1 = (DC **)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 && *((_BYTE *)this + 169) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*v1, *(struct SURFACE **)(v4 + 2528));
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *v1 && *((_BYTE *)v1 + 48) )
    {
      *((_DWORD *)*v1 + 10) &= ~2u;
      *((_BYTE *)v1 + 48) = 0;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v1);
    *v1 = 0LL;
  }
  return 1LL;
}
