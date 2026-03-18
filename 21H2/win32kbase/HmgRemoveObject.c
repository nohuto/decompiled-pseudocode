/*
 * XREFs of HmgRemoveObject @ 0x1C001F4E0
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00220F0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, __int16 a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  GdiHandleManager *v12; // rbp
  _DWORD *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rbp
  int v20; // edx
  GdiHandleManager *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned int v26; // r9d
  __int64 v27; // rax
  struct OBJECT *v28; // rdx
  struct _ENTRY *EntryFromObject; // rax
  _DWORD *v31; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+38h] [rbp-40h]
  GdiHandleManager *v33; // [rsp+80h] [rbp+8h]

  v9 = a1;
  GreAcquireHmgrSemaphore(a1);
  v10 = 0LL;
  v31 = 0LL;
  v32 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v32 )
    goto LABEL_18;
  v12 = gpHandleManager;
  v13 = v31;
  v33 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(gpHandleManager, *v31 & 0xFFFFFF);
  v15 = *((_QWORD *)v12 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16)
    || (v14 >= v17
      ? (v18 = *(_QWORD *)(v15 + 8LL * (((v14 - v17) >> 16) + 1) + 8), v16 = -65536 * ((v14 - v17) >> 16) - v17 + v14)
      : (v18 = *(_QWORD *)(v15 + 8)),
        (unsigned int)v16 >= *(_DWORD *)(v18 + 20)) )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  }
  if ( *((_BYTE *)v13 + 14) == a5 && *((_WORD *)v13 + 6) == HIWORD(v9) )
  {
    v20 = *(_DWORD *)(v19 + 8);
    if ( v20 == a3 && *(_WORD *)(v19 + 12) == a2 )
    {
      if ( a4 || (*((_BYTE *)v13 + 15) & 1) == 0 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject(v33, (struct OBJECT *)v19);
        TrackHmgrReferenceDecrement(*((_BYTE *)EntryFromObject + 14), (struct OBJECT *)v19);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v31);
        if ( v32 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
        v10 = v19;
        goto LABEL_18;
      }
    }
    else
    {
      *((_BYTE *)v13 + 15) |= 8u;
      if ( a6 )
        *a6 = v20;
    }
  }
  v21 = gpHandleManager;
  v22 = GdiHandleManager::DecodeIndex(gpHandleManager, *v13 & 0xFFFFFF);
  v24 = *((_QWORD *)v21 + 2);
  v25 = v22;
  v26 = *(_DWORD *)(v24 + 2056);
  if ( v22 >= v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16)
    || (v22 >= v26
      ? (v23 = ((v22 - v26) >> 16) + 1,
         v27 = *(_QWORD *)(v24 + 8 * v23 + 8),
         v25 = -65536 * (((unsigned int)v25 - v26) >> 16) - v26 + (unsigned int)v25)
      : (v27 = *(_QWORD *)(v24 + 8)),
        (unsigned int)v25 >= *(_DWORD *)(v27 + 20)) )
  {
    v28 = 0LL;
  }
  else
  {
    v23 = 2LL * (unsigned __int8)v25;
    v28 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
  }
  GdiHandleManager::ReleaseEntryLock((GdiHandleManager *)v23, v28);
  KeLeaveCriticalRegion();
LABEL_18:
  GreReleaseHmgrSemaphore(v11);
  return v10;
}
