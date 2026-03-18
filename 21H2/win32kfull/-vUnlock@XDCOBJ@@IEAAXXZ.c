/*
 * XREFs of ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0
 * Callers:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9590 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02796D8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0279790 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C015D9D8 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlock(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  *(_QWORD *)this = 0LL;
}
