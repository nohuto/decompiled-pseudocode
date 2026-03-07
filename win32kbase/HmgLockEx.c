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
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rax
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  __int16 v30; // ax
  __int64 v31; // rcx
  GdiHandleManager *v32; // rbp
  GdiHandleManager *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned int v37; // r9d
  __int64 v38; // r8
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned int v43; // r9d
  __int64 v44; // rdx
  int v46; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v48; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v49; // [rsp+28h] [rbp-50h] BYREF
  int v50; // [rsp+30h] [rbp-48h]
  int v51; // [rsp+34h] [rbp-44h]
  __int64 v52; // [rsp+80h] [rbp+8h]

  v4 = 0LL;
  v48 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v48);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v46 = *(_DWORD *)SGDGetUserSessionState(v9, v8, v10, v11),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v46 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v12 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v12 = 0LL;
  }
  v50 = 1;
  v13 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
  v14 = GdiHandleManager::DecodeIndex(v13, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_43;
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
    v52 = *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v52, 0LL);
    if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v18, v16) )
    {
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v16 + 8) |= 1u;
      v19 = 24LL * v16 + *(_QWORD *)v18;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v52, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v49 = (_DWORD *)v19;
  if ( !v19 )
  {
LABEL_43:
    KeLeaveCriticalRegion();
    return v4;
  }
  _m_prefetchw((const void *)(v19 + 8));
  v20 = *(unsigned int *)(v19 + 8);
  v51 = *(_DWORD *)(v19 + 8);
  if ( !a3 )
  {
    v21 = v20 & 0xFFFFFFFE;
    if ( (((unsigned int)v20 ^ v48 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 && v21 && (!v12 || v21 != *(_DWORD *)(v12 + 8)) )
      goto LABEL_36;
    if ( (*(_BYTE *)(v19 + 15) & 0x20) != 0 )
      goto LABEL_36;
  }
  if ( (*(_BYTE *)(v19 + 15) & 0x40) == 0 )
    goto LABEL_16;
  v20 = (unsigned __int64)HANDLELOCK::pObj((HANDLELOCK *)&v49);
  if ( !*(_WORD *)(v20 + 12) || *(struct _KTHREAD **)(v20 + 16) != KeGetCurrentThread() )
  {
LABEL_36:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
    if ( !v50 )
      return v4;
  }
  v19 = (__int64)v49;
LABEL_16:
  if ( *(_BYTE *)(v19 + 14) == a2 && *(_WORD *)(v19 + 12) == HIWORD(a1) && (!a3 || (*(_BYTE *)(v19 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = SGDGetSessionState(v20);
    v19 = (__int64)v49;
    v24 = *(GdiHandleManager **)(*(_QWORD *)(v23 + 24) + 8008LL);
    v25 = GdiHandleManager::DecodeIndex(v24, *v49 & 0xFFFFFF);
    v26 = *((_QWORD *)v24 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 >= v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16)
      || (v25 >= v28
        ? (v20 = ((v25 - v28) >> 16) + 1,
           v29 = *(_QWORD *)(v26 + 8 * v20 + 8),
           v27 = -65536 * ((v25 - v28) >> 16) - v28 + v25)
        : (v29 = *(_QWORD *)(v26 + 8)),
          (unsigned int)v27 >= *(_DWORD *)(v29 + 20)) )
    {
      v4 = 0LL;
    }
    else
    {
      v20 = (unsigned int)v27;
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v27 >> 8)) + 16LL * (unsigned __int8)v27 + 8);
    }
    v30 = *(_WORD *)(v4 + 12);
    if ( !v30 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
    {
      *(_QWORD *)(v4 + 16) = CurrentThread;
      *(_WORD *)(v4 + 12) = v30 + 1;
    }
    else
    {
      v4 = 0LL;
    }
  }
  v31 = *(_QWORD *)(SGDGetSessionState(v20) + 24);
  v32 = *(GdiHandleManager **)(v31 + 8008);
  v33 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v31) + 24) + 8008LL);
  v34 = GdiHandleManager::DecodeIndex(v33, *(_DWORD *)v19 & 0xFFFFFF);
  v35 = *((_QWORD *)v33 + 2);
  v36 = v34;
  v37 = *(_DWORD *)(v35 + 2056);
  if ( v34 >= v37 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16)
    || (v34 >= v37
      ? (v38 = *(_QWORD *)(v35 + 8LL * (((v34 - v37) >> 16) + 1) + 8), v36 = -65536 * ((v34 - v37) >> 16) - v37 + v34)
      : (v38 = *(_QWORD *)(v35 + 8)),
        (unsigned int)v36 >= *(_DWORD *)(v38 + 20)) )
  {
    v39 = 0LL;
  }
  else
  {
    v39 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * (v36 >> 8)) + 16LL * (unsigned __int8)v36 + 8);
  }
  v40 = GdiHandleManager::DecodeIndex(v32, (unsigned __int16)*v39 | (*v39 >> 8) & 0xFF0000);
  v41 = *((_QWORD *)v32 + 2);
  v42 = v40;
  v43 = *(_DWORD *)(v41 + 2056);
  if ( v40 < v43 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
  {
    if ( v40 >= v43 )
    {
      v44 = *(_QWORD *)(v41 + 8LL * (((v40 - v43) >> 16) + 1) + 8);
      v42 = -65536 * ((v40 - v43) >> 16) - v43 + v40;
    }
    else
    {
      v44 = *(_QWORD *)(v41 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v44 + 24 * v42 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42,
      0LL);
    KeLeaveCriticalRegion();
  }
  v50 = 0;
  v49 = 0LL;
  KeLeaveCriticalRegion();
  return v4;
}
