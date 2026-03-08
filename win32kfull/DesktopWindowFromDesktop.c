/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C00FAA8C
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC43C (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00FC970 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
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
