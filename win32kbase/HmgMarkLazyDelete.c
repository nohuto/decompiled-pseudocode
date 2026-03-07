__int64 __fastcall HmgMarkLazyDelete(unsigned int a1, char a2, _DWORD *a3)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // r14d
  int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  GdiHandleEntryTable *v16; // r9
  struct _ENTRY *v17; // rax
  struct _ENTRY *v18; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v20; // edx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  __int64 v39; // r9
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  struct OBJECT *v47; // rax
  struct _ENTRY *v48; // [rsp+20h] [rbp-20h] BYREF
  int v49; // [rsp+28h] [rbp-18h]
  int v50; // [rsp+2Ch] [rbp-14h]
  __int64 v52; // [rsp+98h] [rbp+58h] BYREF

  v52 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v52);
  if ( !IsThreadCrossSessionAttached()
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v7 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = 1;
  v9 = 1;
  v49 = 1;
  v10 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 8008LL);
  v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v10, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v12 = *(_QWORD *)(v10 + 16);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    v48 = 0LL;
LABEL_46:
    v9 = 0;
    v49 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_47;
  }
  if ( v11 >= v14 )
    v15 = ((v11 - v14) >> 16) + 1;
  else
    v15 = 0LL;
  v16 = *(GdiHandleEntryTable **)(v12 + 8 * v15 + 8);
  if ( (_DWORD)v15 )
    v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
  v17 = GdiHandleEntryTable::AcquireEntryLock(v16, v13, 0);
  v48 = v17;
  v18 = v17;
  if ( !v17 )
    goto LABEL_46;
  _m_prefetchw((char *)v17 + 8);
  CurrentThread = (struct _KTHREAD *)*((unsigned int *)v17 + 2);
  v50 = (int)CurrentThread;
  v20 = (unsigned int)CurrentThread & 0xFFFFFFFE;
  if ( (((unsigned int)CurrentThread ^ v52 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
    && v20
    && (!v7 || v20 != *(_DWORD *)(v7 + 8))
    || (v21 = *((_BYTE *)v17 + 15), (v21 & 0x20) != 0) )
  {
LABEL_51:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
    v9 = v49;
    if ( v49 )
      goto LABEL_56;
LABEL_47:
    v8 = 0;
    goto LABEL_40;
  }
  if ( (v21 & 0x40) != 0 )
  {
    v47 = HANDLELOCK::pObj((HANDLELOCK *)&v48);
    if ( *((_WORD *)v47 + 6) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v47 + 2) == CurrentThread )
      {
        v9 = v49;
LABEL_56:
        v18 = v48;
        goto LABEL_14;
      }
    }
    goto LABEL_51;
  }
LABEL_14:
  if ( *((_BYTE *)v18 + 14) != a2 || *((_WORD *)v18 + 6) != HIWORD(a1) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
    v9 = v49;
    v18 = v48;
  }
  if ( !v9 )
    goto LABEL_47;
  *a3 = 0;
  SGDGetSessionState(CurrentThread);
  v23 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v22) + 24) + 8008LL);
  v24 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v23, *(_DWORD *)v18 & 0xFFFFFF);
  v25 = *(_QWORD *)(v23 + 16);
  v26 = v24;
  v27 = *(_DWORD *)(v25 + 2056);
  v28 = v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16);
  if ( v24 >= (unsigned int)v28 )
    goto LABEL_59;
  if ( v24 >= v27 )
    v28 = ((v24 - v27) >> 16) + 1;
  else
    v28 = 0LL;
  v29 = *(_QWORD *)(v25 + 8LL * (unsigned int)v28 + 8);
  if ( (_DWORD)v28 )
    v26 = ((1 - (_DWORD)v28) << 16) - v27 + v24;
  if ( (unsigned int)v26 >= *(_DWORD *)(v29 + 20) )
  {
LABEL_59:
    v30 = 0LL;
  }
  else
  {
    v28 = 2LL * (unsigned __int8)v26;
    v30 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8);
  }
  if ( *(_DWORD *)(v30 + 8) )
  {
    *((_BYTE *)v18 + 15) |= 2u;
    *a3 = 1;
  }
  *((_QWORD *)v18 + 2) = 0LL;
  v31 = *(_QWORD *)(SGDGetSessionState(v28) + 24);
  v32 = *(_QWORD *)(v31 + 8008);
  v33 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v31) + 24) + 8008LL);
  v34 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v33, *(_DWORD *)v18 & 0xFFFFFF);
  v35 = *(_QWORD *)(v33 + 16);
  v36 = v34;
  v37 = *(_DWORD *)(v35 + 2056);
  if ( v34 >= v37 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16) )
    goto LABEL_61;
  if ( v34 >= v37 )
    v38 = ((v34 - v37) >> 16) + 1;
  else
    v38 = 0;
  v39 = *(_QWORD *)(v35 + 8LL * v38 + 8);
  if ( v38 )
    v36 = ((1 - v38) << 16) - v37 + v34;
  if ( (unsigned int)v36 >= *(_DWORD *)(v39 + 20) )
LABEL_61:
    v40 = 0LL;
  else
    v40 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * (v36 >> 8)) + 16LL * (unsigned __int8)v36 + 8);
  v41 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v32, (unsigned __int16)*v40 | (*v40 >> 8) & 0xFF0000u);
  v42 = *(_QWORD *)(v32 + 16);
  v43 = v41;
  v44 = *(_DWORD *)(v42 + 2056);
  if ( v41 < v44 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
  {
    if ( v41 >= v44 )
      v45 = ((v41 - v44) >> 16) + 1;
    else
      v45 = 0;
    if ( v45 )
      v43 = ((1 - v45) << 16) - v44 + v41;
    GdiHandleEntryTable::ReleaseEntryLock(*(GdiHandleEntryTable **)(v42 + 8LL * v45 + 8), v43);
  }
  v9 = 0;
  v49 = 0;
  v48 = 0LL;
  KeLeaveCriticalRegion();
LABEL_40:
  if ( v9 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
  return v8;
}
