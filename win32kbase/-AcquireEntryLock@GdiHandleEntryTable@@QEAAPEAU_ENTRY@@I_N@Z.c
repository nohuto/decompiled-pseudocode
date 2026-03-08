/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AAC0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     HmgMarkLazyDelete @ 0x1C00A3410 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryTable::AcquireEntryLock(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13

  v3 = 0LL;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0LL;
  v7 = 8 * ((unsigned __int64)a2 >> 8);
  v8 = 16LL * (unsigned __int8)a2;
  v9 = v8 + *(_QWORD *)(**((_QWORD **)this + 3) + v7);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  if ( a3 || (unsigned int)v4 < *((_DWORD *)this + 5) && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + v7) + v8 + 8) )
  {
    *(_DWORD *)(24 * v4 + *(_QWORD *)this + 8) |= 1u;
    return (struct _ENTRY *)(24 * v4 + *(_QWORD *)this);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return (struct _ENTRY *)v3;
}
