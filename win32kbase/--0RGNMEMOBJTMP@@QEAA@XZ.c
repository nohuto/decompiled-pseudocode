/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::vInitialize(this, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
