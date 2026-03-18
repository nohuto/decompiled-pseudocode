/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
