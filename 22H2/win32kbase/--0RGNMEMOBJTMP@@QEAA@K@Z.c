/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002C370
 * Callers:
 *     GreIntersectVisRect @ 0x1C014C230 (GreIntersectVisRect.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, a2);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
