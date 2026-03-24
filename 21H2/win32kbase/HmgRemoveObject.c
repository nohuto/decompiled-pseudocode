/*
 * XREFs of HmgRemoveObject @ 0x1C00311D0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000CA70 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001BC50 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CAF18 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E5B0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C014C130 (EngDeleteDriverObj.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002F3E0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0030230 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031DB0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, __int16 a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  GdiHandleManager *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // edx
  GdiHandleManager *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  struct OBJECT *v28; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v31; // rcx
  _DWORD *v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]

  v9 = a1;
  GreAcquireHmgrSemaphore(a1);
  v10 = 0LL;
  v32 = 0LL;
  v33 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v32, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v33 )
  {
    GreReleaseHmgrSemaphore(v11);
    return 0LL;
  }
  v12 = v32;
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v32 & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    v18 = ((v14 - v17) >> 16) + 1;
    if ( v14 < v17 )
      v18 = 0LL;
    v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
    if ( (_DWORD)v18 )
      v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
    if ( (unsigned int)v16 < *(_DWORD *)(v19 + 20) )
      v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  }
  if ( *((_BYTE *)v12 + 14) == a5 && *((_WORD *)v12 + 6) == HIWORD(v9) )
  {
    v20 = *(_DWORD *)(v10 + 8);
    if ( v20 == a3 && *(_WORD *)(v10 + 12) == a2 )
    {
      if ( a4 || (*((_BYTE *)v12 + 15) & 1) == 0 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)v13, (struct OBJECT *)v10);
        TrackHmgrReferenceDecrement(*((_BYTE *)EntryFromObject + 14), (struct OBJECT *)v10);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v32);
        if ( v33 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
        GreReleaseHmgrSemaphore(v31);
        return v10;
      }
    }
    else
    {
      *((_BYTE *)v12 + 15) |= 8u;
      if ( a6 )
        *a6 = v20;
    }
  }
  v21 = gpHandleManager;
  v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v12 & 0xFFFFFF);
  v23 = *((_QWORD *)v21 + 2);
  v24 = v22;
  v25 = *(_DWORD *)(v23 + 2056);
  v26 = v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16);
  if ( v22 >= (unsigned int)v26 )
    goto LABEL_31;
  v26 = ((v22 - v25) >> 16) + 1;
  if ( v22 < v25 )
    v26 = 0LL;
  v27 = *(_QWORD *)(v23 + 8 * v26 + 8);
  if ( (_DWORD)v26 )
    v24 = ((1 - (_DWORD)v26) << 16) - v25 + (unsigned int)v24;
  if ( (unsigned int)v24 >= *(_DWORD *)(v27 + 20) )
  {
LABEL_31:
    v28 = 0LL;
  }
  else
  {
    v26 = 2LL * (unsigned __int8)v24;
    v28 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  }
  GdiHandleManager::ReleaseEntryLock((GdiHandleManager *)v26, v28);
  KeLeaveCriticalRegion();
  EtwTraceGreLockReleaseSemaphore(L"ghsemHmgr", ghsemHmgr);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  return 0LL;
}
