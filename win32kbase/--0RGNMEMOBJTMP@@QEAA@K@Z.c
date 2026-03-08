/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00427C4
 * Callers:
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  RGNMEMOBJ::vInitialize(this, a2);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
