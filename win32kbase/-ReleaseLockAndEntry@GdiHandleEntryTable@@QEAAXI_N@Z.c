/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C0052198
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0052144 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryTable::ReleaseLockAndEntry(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  _QWORD **v3; // r9
  unsigned __int64 v4; // r10

  v3 = (_QWORD **)((char *)this + 24);
  if ( a3
    || (v4 = a2, a2 < *((_DWORD *)this + 5))
    && *(_QWORD *)(*(_QWORD *)(**v3 + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) )
  {
    v4 = a2;
    if ( a2 < *((_DWORD *)this + 5) )
    {
      v3 = (_QWORD **)((char *)this + 24);
      *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) = 0LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 24LL * a2) = *((unsigned int *)this + 3);
    --*((_DWORD *)this + 4);
    *((_DWORD *)this + 3) = a2;
  }
  ExReleasePushLockExclusiveEx(*(_QWORD *)(**v3 + 8 * (v4 >> 8)) + 16LL * (unsigned __int8)v4, 0LL);
  KeLeaveCriticalRegion();
}
