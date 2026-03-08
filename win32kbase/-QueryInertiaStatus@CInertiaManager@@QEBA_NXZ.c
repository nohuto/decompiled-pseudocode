/*
 * XREFs of ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1C0210C78
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00E0830 (-ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

bool __fastcall CInertiaManager::QueryInertiaStatus(CInertiaManager *this)
{
  return CInertiaManager::QueryInertia((__int64)this, *(_QWORD *)&gptCursorAsync, 15) != 0;
}
