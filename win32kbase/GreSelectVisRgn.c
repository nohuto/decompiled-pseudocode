/*
 * XREFs of GreSelectVisRgn @ 0x1C0042CD0
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 */

__int64 __fastcall GreSelectVisRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  GdiHandleEntryTable *v5; // r14
  unsigned int v6; // r13d
  HDC v7; // r12
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  GdiHandleEntryTable *v11; // r15
  char v12; // al
  char v13; // di
  __int64 v14; // rcx
  GdiHandleManager *v15; // r14
  GdiHandleManager *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  GdiHandleEntryDirectory *v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  GdiHandleEntryTable *v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  unsigned int v31; // [rsp+98h] [rbp+48h] BYREF

  v4 = a2;
  v30 = 0LL;
  LOBYTE(a2) = 1;
  v29 = (GdiHandleEntryTable *)HmgShareLockEx(a1, a2, 0LL);
  v5 = v29;
  v6 = GreSelectVisRgnInternal(&v29, v4, a3);
  if ( !v5 )
    return v6;
  v7 = *(HDC *)v5;
  v8 = (unsigned __int16)*(_QWORD *)v5;
  v9 = ((unsigned int)*(_QWORD *)v5 >> 8) & 0xFF0000;
  v29 = 0LL;
  LODWORD(v30) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, v8 | v9, 0, 0, 1);
  if ( !(_DWORD)v30 )
    return v6;
  v11 = v29;
  v12 = *((_BYTE *)v29 + 14);
  v13 = *((_BYTE *)v29 + 15) & 8;
  if ( v12 == 5 )
  {
    v27 = *((_QWORD *)v5 + 85);
    v28 = 0LL;
  }
  else
  {
    if ( v12 != 16 )
      goto LABEL_5;
    v27 = *((_QWORD *)v5 + 17);
    v28 = 2LL;
  }
  TrackObjectReferenceDecrement(v28, v27);
LABEL_5:
  --*((_DWORD *)v5 + 2);
  v14 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
  v15 = *(GdiHandleManager **)(v14 + 8008);
  v16 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v14) + 24) + 8008LL);
  v17 = GdiHandleManager::DecodeIndex(v16, *(_DWORD *)v11 & 0xFFFFFF);
  v18 = *((_QWORD *)v16 + 2);
  v19 = v17;
  v20 = *(_DWORD *)(v18 + 2056);
  if ( v17 >= v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    goto LABEL_21;
  if ( v17 >= v20 )
    v21 = ((v17 - v20) >> 16) + 1;
  else
    v21 = 0LL;
  v22 = *(_QWORD *)(v18 + 8 * v21 + 8);
  if ( (_DWORD)v21 )
    v19 = ((1 - (_DWORD)v21) << 16) - v20 + (unsigned int)v19;
  if ( (unsigned int)v19 >= *(_DWORD *)(v22 + 20) )
LABEL_21:
    v23 = 0LL;
  else
    v23 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
  v24 = GdiHandleManager::DecodeIndex(v15, (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000);
  v25 = (GdiHandleEntryDirectory *)*((_QWORD *)v15 + 2);
  v29 = 0LL;
  v31 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v25, v24, &v29, &v31) )
    GdiHandleEntryTable::ReleaseEntryLock(v29, v31);
  KeLeaveCriticalRegion();
  if ( v13 )
    GrepDeleteDC(v7, 0x2000000u);
  return v6;
}
