/*
 * XREFs of HmgMarkLazyDelete @ 0x1C0088DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022BD0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HmgMarkLazyDelete(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v5; // r12
  GdiHandleManager *v6; // rbx
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned int v11; // r14d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r13
  unsigned int v17; // ecx
  char v18; // al
  __int64 v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // edx
  GdiHandleManager *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // r10
  _DWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r10
  unsigned int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // r10
  int v42; // edx
  GdiHandleManager *v43; // rbx
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned __int64 v46; // rdx
  unsigned int v47; // r8d
  unsigned int v48; // ecx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // [rsp+20h] [rbp-28h] BYREF
  int v52; // [rsp+28h] [rbp-20h]
  int v53; // [rsp+2Ch] [rbp-1Ch]
  __int16 v54; // [rsp+92h] [rbp+4Ah]
  char v55; // [rsp+98h] [rbp+50h]
  __int64 v57; // [rsp+A8h] [rbp+60h] BYREF

  v55 = a2;
  v54 = HIWORD(a1);
  v57 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v57, a2, a3);
  if ( !IsThreadCrossSessionAttached()
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v5 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = gpHandleManager;
  v7 = 1;
  v52 = 1;
  v8 = 1;
  v9 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v10 = *((_QWORD *)v6 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_75;
  if ( v9 >= v12 )
    v13 = ((v9 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v10 + 8LL * v13 + 8);
  if ( v13 )
    v11 = ((1 - v13) << 16) - v12 + v9;
  v15 = 0LL;
  if ( v11 >= *(_DWORD *)(v14 + 20) )
  {
LABEL_75:
    v51 = 0LL;
LABEL_50:
    v8 = 0;
    v52 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_51;
  }
  v16 = *(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8)) + 16LL * (unsigned __int8)v11;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v14, v11) )
  {
    *(_DWORD *)(*(_QWORD *)v14 + 24LL * v11 + 8) |= 1u;
    v15 = *(_QWORD *)v14 + 24LL * v11;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  v51 = v15;
  if ( !v15 )
    goto LABEL_50;
  _m_prefetchw((const void *)(v15 + 8));
  v53 = *(_DWORD *)(v15 + 8);
  v17 = v53 & 0xFFFFFFFE;
  if ( (v53 & 0xFFFFFFFE) != (v57 & 0xFFFFFFFC) && v17 && (!v5 || v17 != *(_DWORD *)(v5 + 8))
    || (v18 = *(_BYTE *)(v15 + 15), (v18 & 0x20) != 0) )
  {
LABEL_55:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v51);
    v8 = v52;
    if ( v52 )
    {
LABEL_56:
      v15 = v51;
      goto LABEL_17;
    }
LABEL_51:
    v7 = 0;
    goto LABEL_43;
  }
  if ( (v18 & 0x40) != 0 )
  {
    v42 = *(_DWORD *)v15;
    v43 = gpHandleManager;
    v44 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v42 & 0xFFFFFF);
    v45 = *((_QWORD *)v43 + 2);
    v46 = v44;
    v47 = *(_DWORD *)(v45 + 2056);
    if ( v44 >= v47 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
      goto LABEL_65;
    if ( v44 >= v47 )
      v48 = ((v44 - v47) >> 16) + 1;
    else
      v48 = 0;
    v49 = *(_QWORD *)(v45 + 8LL * v48 + 8);
    if ( v48 )
      v46 = ((1 - v48) << 16) - v47 + v44;
    if ( (unsigned int)v46 >= *(_DWORD *)(v49 + 20) )
LABEL_65:
      v50 = 0LL;
    else
      v50 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * (v46 >> 8)) + 16LL * (unsigned __int8)v46 + 8);
    if ( *(_WORD *)(v50 + 12) && *(struct _KTHREAD **)(v50 + 16) == KeGetCurrentThread() )
    {
      v8 = v52;
      goto LABEL_56;
    }
    goto LABEL_55;
  }
LABEL_17:
  if ( *(_BYTE *)(v15 + 14) != v55 || *(_WORD *)(v15 + 12) != v54 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v51);
    v8 = v52;
    v15 = v51;
  }
  if ( !v8 )
    goto LABEL_51;
  *a3 = 0;
  v19 = *((_QWORD *)gpHandleManager + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  v21 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v15 & 0xFFFFFF);
  v22 = v21;
  if ( v21 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    goto LABEL_71;
  if ( v21 >= v20 )
    v23 = ((v21 - v20) >> 16) + 1;
  else
    v23 = 0;
  v24 = *(_QWORD *)(v19 + 8LL * v23 + 8);
  if ( v23 )
    v22 = ((1 - v23) << 16) - v20 + v21;
  if ( (unsigned int)v22 >= *(_DWORD *)(v24 + 20) )
LABEL_71:
    v25 = 0LL;
  else
    v25 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
  if ( *(_DWORD *)(v25 + 8) )
  {
    *(_BYTE *)(v15 + 15) |= 2u;
    *a3 = 1;
  }
  *(_QWORD *)(v15 + 16) = 0LL;
  v26 = *(_DWORD *)v15;
  v27 = gpHandleManager;
  v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v26 & 0xFFFFFF);
  v29 = *((_QWORD *)v27 + 2);
  v30 = v28;
  v31 = *(_DWORD *)(v29 + 2056);
  if ( v28 >= v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
    goto LABEL_73;
  if ( v28 >= v31 )
    v32 = ((v28 - v31) >> 16) + 1;
  else
    v32 = 0;
  v33 = *(_QWORD *)(v29 + 8LL * v32 + 8);
  if ( v32 )
    v30 = ((1 - v32) << 16) - v31 + v28;
  if ( (unsigned int)v30 >= *(_DWORD *)(v33 + 20) )
LABEL_73:
    v34 = 0LL;
  else
    v34 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30 + 8);
  v35 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v27, (unsigned __int16)*v34 | (*v34 >> 8) & 0xFF0000u);
  v36 = *((_QWORD *)v27 + 2);
  v37 = v35;
  v38 = *(_DWORD *)(v36 + 2056);
  if ( v35 < v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
  {
    if ( v35 >= v38 )
      v39 = ((v35 - v38) >> 16) + 1;
    else
      v39 = 0;
    v40 = *(_QWORD *)(v36 + 8LL * v39 + 8);
    if ( v39 )
      v37 = ((1 - v39) << 16) - v38 + v35;
    *(_DWORD *)(*(_QWORD *)v40 + 24LL * v37 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v37 >> 8)) + 16LL * (unsigned __int8)v37,
      0LL);
    KeLeaveCriticalRegion();
  }
  v8 = 0;
  v52 = 0;
  v51 = 0LL;
  KeLeaveCriticalRegion();
LABEL_43:
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v51);
  return v7;
}
