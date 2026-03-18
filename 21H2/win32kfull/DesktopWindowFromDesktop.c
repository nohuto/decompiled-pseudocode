/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C011812C
 * Callers:
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopWindowFromDesktop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(_QWORD *)(v2 + 24);
  }
  return result;
}
