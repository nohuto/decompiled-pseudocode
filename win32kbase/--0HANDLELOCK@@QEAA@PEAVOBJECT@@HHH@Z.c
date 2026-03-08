/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C001D290 (HmgLockAndModifyHandleType.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgReplaceObject @ 0x1C0045470 (HmgReplaceObject.c)
 *     GreSetSolidBrushLight @ 0x1C017E620 (GreSetSolidBrushLight.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, a4, a5);
  return this;
}
