/*
 * XREFs of HmgLockEx @ 0x1C0043B50
 * Callers:
 *     GreLockRegion @ 0x1C000CC60 (GreLockRegion.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0035730 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C003BD8C (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C0060A30 (GreMakeBitmapNonStock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0159DC4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  __int64 v4; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  GdiHandleManager *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // r12d
  unsigned int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rax
  GdiHandleManager *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // r9d
  __int64 v30; // r8
  __int16 v31; // ax
  __int64 v32; // rcx
  GdiHandleManager *v33; // rbp
  GdiHandleManager *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // r8
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned __int64 v43; // r8
  unsigned int v44; // r9d
  __int64 v45; // rdx
  int v47; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v49; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+30h] [rbp-58h]
  _DWORD *v52; // [rsp+38h] [rbp-50h] BYREF
  int v53; // [rsp+40h] [rbp-48h]
  int v54; // [rsp+44h] [rbp-44h]
  __int64 v55; // [rsp+90h] [rbp+8h]

  v4 = 0LL;
  v49 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v49);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v47 = *(_DWORD *)SGDGetUserSessionState(v9, v8, v10, v11),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v47 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v12 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v12 = 0LL;
  }
  v53 = 1;
  v13 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
  v14 = GdiHandleManager::DecodeIndex(v13, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_44;
  if ( v14 >= v17 )
  {
    v18 = *(_QWORD *)(v15 + 8LL * (((v14 - v17) >> 16) + 1) + 8);
    v16 = -65536 * ((v14 - v17) >> 16) - v17 + v14;
  }
  else
  {
    v18 = *(_QWORD *)(v15 + 8);
  }
  v19 = 0LL;
  if ( v16 < *(_DWORD *)(v18 + 20) )
  {
    v51 = 16LL * (unsigned __int8)v16;
    v20 = *(_QWORD **)(v18 + 24);
    v50 = 8 * ((unsigned __int64)v16 >> 8);
    v55 = v51 + *(_QWORD *)(*v20 + v50);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v55, 0LL);
    if ( v16 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + v50) + v51 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v16 + 8) |= 1u;
      v19 = 24LL * v16 + *(_QWORD *)v18;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v55, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v52 = (_DWORD *)v19;
  if ( !v19 )
  {
LABEL_44:
    KeLeaveCriticalRegion();
    return v4;
  }
  _m_prefetchw((const void *)(v19 + 8));
  v21 = *(unsigned int *)(v19 + 8);
  v54 = *(_DWORD *)(v19 + 8);
  if ( !a3 )
  {
    v22 = v21 & 0xFFFFFFFE;
    if ( (((unsigned int)v21 ^ v49 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 && v22 && (!v12 || v22 != *(_DWORD *)(v12 + 8)) )
      goto LABEL_37;
    if ( (*(_BYTE *)(v19 + 15) & 0x20) != 0 )
      goto LABEL_37;
  }
  if ( (*(_BYTE *)(v19 + 15) & 0x40) == 0 )
    goto LABEL_17;
  v21 = (unsigned __int64)HANDLELOCK::pObj((HANDLELOCK *)&v52);
  if ( !*(_WORD *)(v21 + 12) || *(struct _KTHREAD **)(v21 + 16) != KeGetCurrentThread() )
  {
LABEL_37:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v52);
    if ( !v53 )
      return v4;
  }
  v19 = (__int64)v52;
LABEL_17:
  if ( *(_BYTE *)(v19 + 14) == a2 && *(_WORD *)(v19 + 12) == HIWORD(a1) && (!a3 || (*(_BYTE *)(v19 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = SGDGetSessionState(v21);
    v19 = (__int64)v52;
    v25 = *(GdiHandleManager **)(*(_QWORD *)(v24 + 24) + 8008LL);
    v26 = GdiHandleManager::DecodeIndex(v25, *v52 & 0xFFFFFF);
    v27 = *((_QWORD *)v25 + 2);
    v28 = v26;
    v29 = *(_DWORD *)(v27 + 2056);
    if ( v26 >= v29 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16)
      || (v26 >= v29
        ? (v21 = ((v26 - v29) >> 16) + 1,
           v30 = *(_QWORD *)(v27 + 8 * v21 + 8),
           v28 = -65536 * ((v26 - v29) >> 16) - v29 + v26)
        : (v30 = *(_QWORD *)(v27 + 8)),
          (unsigned int)v28 >= *(_DWORD *)(v30 + 20)) )
    {
      v4 = 0LL;
    }
    else
    {
      v21 = (unsigned int)v28;
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * (v28 >> 8)) + 16LL * (unsigned __int8)v28 + 8);
    }
    v31 = *(_WORD *)(v4 + 12);
    if ( !v31 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
    {
      *(_QWORD *)(v4 + 16) = CurrentThread;
      *(_WORD *)(v4 + 12) = v31 + 1;
    }
    else
    {
      v4 = 0LL;
    }
  }
  v32 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
  v33 = *(GdiHandleManager **)(v32 + 8008);
  v34 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v32) + 24) + 8008LL);
  v35 = GdiHandleManager::DecodeIndex(v34, *(_DWORD *)v19 & 0xFFFFFF);
  v36 = *((_QWORD *)v34 + 2);
  v37 = v35;
  v38 = *(_DWORD *)(v36 + 2056);
  if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16)
    || (v35 >= v38
      ? (v39 = *(_QWORD *)(v36 + 8LL * (((v35 - v38) >> 16) + 1) + 8), v37 = -65536 * ((v35 - v38) >> 16) - v38 + v35)
      : (v39 = *(_QWORD *)(v36 + 8)),
        (unsigned int)v37 >= *(_DWORD *)(v39 + 20)) )
  {
    v40 = 0LL;
  }
  else
  {
    v40 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * (v37 >> 8)) + 16LL * (unsigned __int8)v37 + 8);
  }
  v41 = GdiHandleManager::DecodeIndex(v33, (unsigned __int16)*v40 | (*v40 >> 8) & 0xFF0000);
  v42 = *((_QWORD *)v33 + 2);
  v43 = v41;
  v44 = *(_DWORD *)(v42 + 2056);
  if ( v41 < v44 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
  {
    if ( v41 >= v44 )
    {
      v45 = *(_QWORD *)(v42 + 8LL * (((v41 - v44) >> 16) + 1) + 8);
      v43 = -65536 * ((v41 - v44) >> 16) - v44 + v41;
    }
    else
    {
      v45 = *(_QWORD *)(v42 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v45 + 24 * v43 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * (v43 >> 8)) + 16LL * (unsigned __int8)v43,
      0LL);
    KeLeaveCriticalRegion();
  }
  v53 = 0;
  v52 = 0LL;
  KeLeaveCriticalRegion();
  return v4;
}
