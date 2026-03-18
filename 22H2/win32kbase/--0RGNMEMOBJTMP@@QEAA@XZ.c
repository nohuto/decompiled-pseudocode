/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003C598
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
