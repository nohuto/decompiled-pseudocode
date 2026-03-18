/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022BD0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  HRGN v1; // rbx
  __int64 v3; // rcx
  GdiHandleManager *v4; // r13
  _DWORD *v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // eax
  int v13; // r15d
  unsigned int v14; // r9d
  unsigned int v15; // r14d
  GdiHandleEntryTable *v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // rbx
  unsigned int v19; // r10d
  _QWORD *v20; // r11
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  char v25; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v27; // rdx
  unsigned int v28; // ecx
  _DWORD *v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+38h] [rbp-40h]

  v1 = (HRGN)*((_QWORD *)this + 5);
  if ( v1 == hrgnDefault )
    return 0LL;
  GreAcquireHmgrSemaphore(this);
  v29 = 0LL;
  v30 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)v1 | ((unsigned int)v1 >> 8) & 0xFF0000, 1LL, 0, 0);
  if ( !v30 )
  {
    v11 = 0LL;
    goto LABEL_31;
  }
  v4 = gpHandleManager;
  v5 = v29;
  v6 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v29 & 0xFFFFFF);
  v7 = *((_QWORD *)v4 + 2);
  v8 = v6;
  v9 = *(_DWORD *)(v7 + 2056);
  if ( v6 >= v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16)
    || (v6 >= v9
      ? (v10 = *(_QWORD *)(v7 + 8LL * (((v6 - v9) >> 16) + 1) + 8), v8 = -65536 * ((v6 - v9) >> 16) - v9 + v6)
      : (v10 = *(_QWORD *)(v7 + 8)),
        (unsigned int)v8 >= *(_DWORD *)(v10 + 20)) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
  }
  if ( *((_BYTE *)v5 + 14) == 4 && *((_WORD *)v5 + 6) == WORD1(v1) )
  {
    if ( *(_WORD *)(v11 + 12) != 1 || *(_DWORD *)(v11 + 8) )
    {
      *((_BYTE *)v5 + 15) |= 8u;
    }
    else if ( (*((_BYTE *)v5 + 15) & 1) == 0 )
    {
      v12 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)v4,
              (unsigned __int16)*(_DWORD *)v11 | (*(_DWORD *)v11 >> 8) & 0xFF0000u);
      v13 = *(unsigned __int16 *)(v7 + 2);
      v14 = v12;
      v15 = *(_DWORD *)(v7 + 2056);
      if ( v12 >= v15 + ((v13 + 0xFFFF) << 16) )
      {
        v18 = 0LL;
      }
      else
      {
        if ( v12 >= v15 )
        {
          v16 = *(GdiHandleEntryTable **)(v7 + 8LL * (((v12 - v15) >> 16) + 1) + 8);
          v17 = v12 + -65536 * ((v12 - v15) >> 16) - v15;
        }
        else
        {
          v16 = *(GdiHandleEntryTable **)(v7 + 8);
          v17 = v12;
        }
        v18 = 0LL;
        if ( GdiHandleEntryTable::GetEntryObject(v16, v17) )
        {
          LOWORD(v13) = *(_WORD *)(v7 + 2);
          v18 = *v20 + 24LL * v19;
        }
      }
      v21 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v4, v14);
      v22 = v21;
      if ( v21 >= v15 + (((unsigned __int16)v13 + 0xFFFF) << 16)
        || (v21 >= v15
          ? (v23 = *(_QWORD *)(v7 + 8LL * (((v21 - v15) >> 16) + 1) + 8), v22 = -65536 * ((v21 - v15) >> 16) - v15 + v21)
          : (v23 = *(_QWORD *)(v7 + 8)),
            (unsigned int)v22 >= *(_DWORD *)(v23 + 20)) )
      {
        v24 = 0LL;
      }
      else
      {
        v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
      }
      if ( v24 != v11 )
        v18 = 0LL;
      v25 = *(_BYTE *)(v18 + 14);
      if ( v25 == 5 )
      {
        v27 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v11 + 680);
        v28 = 0;
      }
      else
      {
        if ( v25 != 16 )
          goto LABEL_27;
        v27 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v11 + 136);
        v28 = 2;
      }
      TrackObjectReferenceDecrement(v28, v27);
LABEL_27:
      HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v29);
      if ( v30 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
      goto LABEL_31;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
  if ( v30 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
  v11 = 0LL;
LABEL_31:
  GreReleaseHmgrSemaphore(v3);
  if ( v11 == *(_QWORD *)this )
  {
    *((_QWORD *)this + 5) = 0LL;
    return 1LL;
  }
  return 0LL;
}
