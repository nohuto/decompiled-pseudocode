/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C002F4C0
 * Callers:
 *     EngUnlockSurface @ 0x1C002D030 (EngUnlockSurface.c)
 *     HmgLock @ 0x1C002D9E0 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C002E7A0 (HmgShareLock.c)
 *     HmgMarkLazyDelete @ 0x1C00335E0 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryDirectory::ReleaseEntryLock(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  v2 = *((_DWORD *)this + 514);
  if ( a2 < v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    v3 = ((a2 - v2) >> 16) + 1;
    if ( a2 < v2 )
      v3 = 0LL;
    v4 = *((_QWORD *)this + v3 + 1);
    if ( (_DWORD)v3 )
      a2 += ((1 - (_DWORD)v3) << 16) - v2;
    *(_DWORD *)(*(_QWORD *)v4 + 24LL * a2 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v4 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
      0LL);
    KeLeaveCriticalRegion();
  }
}
