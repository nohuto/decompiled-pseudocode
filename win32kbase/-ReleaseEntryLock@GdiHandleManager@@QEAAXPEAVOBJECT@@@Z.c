/*
 * XREFs of ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004ABC0
 * Callers:
 *     EngUnlockSurface @ 0x1C00449E0 (EngUnlockSurface.c)
 *     HmgLock @ 0x1C0049C00 (HmgLock.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseEntryLock(GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10

  v3 = GdiHandleManager::DecodeIndex(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 < v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v3 >= v6 )
    {
      v7 = *(_QWORD *)(v4 + 8LL * (((v3 - v6) >> 16) + 1) + 8);
      v5 = -65536 * ((v3 - v6) >> 16) - v6 + v3;
    }
    else
    {
      v7 = *(_QWORD *)(v4 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v7 + 24 * v5 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
