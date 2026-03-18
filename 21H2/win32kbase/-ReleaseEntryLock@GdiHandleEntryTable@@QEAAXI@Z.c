/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C00221D0
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryTable::ReleaseEntryLock(GdiHandleEntryTable *this, unsigned int a2)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL * a2 + 8) &= ~1u;
  ExReleasePushLockExclusiveEx(
    *(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
    0LL);
  KeLeaveCriticalRegion();
}
