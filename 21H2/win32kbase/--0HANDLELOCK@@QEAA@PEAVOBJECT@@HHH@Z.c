/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0021A60
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgReplaceObject @ 0x1C001EB90 (HmgReplaceObject.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C00645F0 (HmgLockAndModifyHandleType.c)
 *     GreSetSolidBrushLight @ 0x1C00989A0 (GreSetSolidBrushLight.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00CB950 (HmgIncrementShareReferenceCount.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, a4, a5);
  return this;
}
