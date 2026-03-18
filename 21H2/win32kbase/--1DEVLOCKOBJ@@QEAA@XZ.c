/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C016AAA0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this, __int64 a2, int a3)
{
  DEVLOCKOBJ::vDestructor(this, a2, a3);
  DLODCOBJ::~DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
