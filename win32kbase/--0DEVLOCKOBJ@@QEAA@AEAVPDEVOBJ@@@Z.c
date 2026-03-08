/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0181D50
 * Callers:
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vLock(this, a2);
  return this;
}
