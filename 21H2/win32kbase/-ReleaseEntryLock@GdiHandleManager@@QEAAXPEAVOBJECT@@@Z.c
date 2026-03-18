/*
 * XREFs of ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00220F0
 * Callers:
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseEntryLock(GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v2; // ebx
  GdiHandleManager *v3; // rdi
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // r10
  bool v7; // r8

  v2 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  v3 = gpHandleManager;
  if ( v2 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)a2,
                                  1)
           + 13) == HIWORD(v2) )
      {
        v2 = (unsigned __int16)v2;
      }
      else if ( *(_DWORD *)v3 > 0x10000u )
      {
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v3 + 2), (unsigned __int16)v2, v7);
      }
    }
    else
    {
      v2 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v4 = *((_QWORD *)v3 + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v2 < v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v2 < v5 )
    {
      v6 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 8LL * (((v2 - v5) >> 16) + 1) + 8);
      v2 += -65536 * ((v2 - v5) >> 16) - v5;
    }
    *(_DWORD *)(*(_QWORD *)v6 + 24LL * v2 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v2 >> 8)) + 16LL * (unsigned __int8)v2,
      0LL);
    KeLeaveCriticalRegion();
  }
}
