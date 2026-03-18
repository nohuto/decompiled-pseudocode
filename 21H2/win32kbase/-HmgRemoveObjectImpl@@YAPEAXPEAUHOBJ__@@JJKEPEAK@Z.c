/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00D96B4 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rbx
  _DWORD *v12; // rdi
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // ecx
  struct _ENTRY *EntryFromObject; // rax
  unsigned int v23; // esi
  _DWORD *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  v9 = (unsigned int)a1;
  GreAcquireHmgrSemaphore(a1);
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, (a4 & 2) == 0, 0, 0);
  if ( !v25 )
    goto LABEL_2;
  v12 = v24;
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(gpHandleManager, *v24 & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_25;
  if ( v14 >= v17 )
    v18 = ((v14 - v17) >> 16) + 1;
  else
    v18 = 0LL;
  v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
  if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
LABEL_25:
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  if ( (a4 & 2) != 0 )
  {
    v23 = v12[2] & 0xFFFFFFFE;
    if ( v23 != -2147483630 && v23 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && v23 )
      goto LABEL_23;
  }
  if ( *((_BYTE *)v12 + 14) != a5 || *((_WORD *)v12 + 6) != HIWORD(v9) )
    goto LABEL_23;
  v20 = *(_DWORD *)(v11 + 8);
  if ( v20 != a3 || *(_WORD *)(v11 + 12) != a2 )
  {
    *((_BYTE *)v12 + 15) |= 8u;
    if ( a6 )
      *a6 = v20;
    goto LABEL_23;
  }
  if ( (a4 & 1) == 0 && (*((_BYTE *)v12 + 15) & 1) != 0 )
  {
LABEL_23:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
LABEL_2:
    v11 = 0LL;
    goto LABEL_18;
  }
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, (struct OBJECT *)v11);
  TrackHmgrReferenceDecrement(*((_BYTE *)EntryFromObject + 14), (struct OBJECT *)v11);
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v24);
LABEL_18:
  if ( v25 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  GreReleaseHmgrSemaphore(v10);
  return v11;
}
