__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v2; // r15d
  int v3; // edi
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // r10
  unsigned int v9; // r12d
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  GdiHandleManager *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // r9d
  GdiHandleEntryTable *v30; // rcx
  struct _ENTRY *v31; // rax
  struct _ENTRY *v32; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v34; // edx
  char v35; // al
  GdiHandleManager *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  unsigned int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // r8
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v43; // rdi
  __int64 v44; // rcx
  GdiHandleManager *v45; // r14
  GdiHandleManager *v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned __int64 v49; // rdx
  unsigned int v50; // r9d
  __int64 v51; // r8
  _DWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // r8d
  struct _ERESOURCE *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v68; // edi
  int v69; // edi
  int v70; // edi
  int v71; // edi
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _ERESOURCE *v74; // rbx
  __int64 v75; // rcx
  unsigned int v76; // eax
  int v77; // edi
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v79; // rax
  struct _ENTRY *v80; // [rsp+30h] [rbp-40h] BYREF
  int v81; // [rsp+38h] [rbp-38h]
  int v82; // [rsp+3Ch] [rbp-34h]
  __int64 v83; // [rsp+90h] [rbp+20h] BYREF
  PERESOURCE v84; // [rsp+98h] [rbp+28h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (unsigned int)a1 >> 16;
  v3 = BYTE2(a1) & 0x1F;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v5 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v6 = v5;
  v7 = *(_QWORD *)(v4 + 8008);
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)v7 > 0x10000u )
    {
      v4 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v7 + 16),
                                  (unsigned __int16)a1,
                                  1)
           + 13);
      if ( (_DWORD)v4 == HIWORD(v5) )
        v6 = (unsigned __int16)a1;
    }
    else
    {
      v6 = (unsigned __int16)a1;
    }
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v6 < v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 >= v10 )
    {
      v4 = ((v6 - v10) >> 16) + 1;
      v11 = *(_QWORD *)(v8 + 8 * v4 + 8);
      v6 += -65536 * ((v6 - v10) >> 16) - v10;
    }
    else
    {
      v11 = *(_QWORD *)(v8 + 8);
    }
    v12 = 0LL;
    if ( v6 < *(_DWORD *)(v11 + 20) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                     + 16LL * (unsigned __int8)v6
                     + 8);
      if ( v4 )
      {
        v4 = 3LL * v6;
        v12 = *(_QWORD *)v11 + 24LL * v6;
      }
    }
    if ( v12
      && *(unsigned __int8 *)(v12 + 14) == v3
      && *(_WORD *)(v12 + 12) == (_WORD)v2
      && (*(_DWORD *)(v12 + 8) & 0xFFFFFFFE) == 0 )
    {
      if ( a1 )
        return 1;
      return v9;
    }
  }
  if ( v3 == 5 )
  {
    v13 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    v14 = *(_QWORD *)(v13 + 80);
    if ( v14 )
      ExEnterPriorityRegionAndAcquireResourceShared(v14);
    v15 = *(_QWORD *)(v13 + 80);
    v16 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
    if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v16,
        (unsigned int)&LockAcquireShared,
        v17,
        v15,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    v83 = 0LL;
    v18 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v83);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v77 = *(_DWORD *)SGDGetUserSessionState(v21, v20, v22, v23),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           v77 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v24 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v24 = 0LL;
    }
    v81 = 1;
    v25 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v21) + 24) + 8008LL);
    v26 = GdiHandleManager::DecodeIndex(v25, v5);
    v27 = *((_QWORD *)v25 + 2);
    v28 = v26;
    v29 = *(_DWORD *)(v27 + 2056);
    if ( v26 >= v29 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16)
      || (v26 >= v29
        ? (GdiHandleEntryTable *)(v30 = *(GdiHandleEntryTable **)(v27 + 8LL * (((v26 - v29) >> 16) + 1) + 8),
                                  v28 = -65536 * ((v26 - v29) >> 16) - v29 + v26)
        : (v30 = *(GdiHandleEntryTable **)(v27 + 8)),
          v31 = GdiHandleEntryTable::AcquireEntryLock(v30, v28, 0),
          v80 = v31,
          (v32 = v31) == 0LL) )
    {
      KeLeaveCriticalRegion();
      v83 = 0LL;
      goto LABEL_104;
    }
    _m_prefetchw((char *)v31 + 8);
    CurrentThread = (struct _KTHREAD *)*((unsigned int *)v31 + 2);
    v34 = *((_DWORD *)v31 + 2) & 0xFFFFFFFE;
    v82 = (int)CurrentThread;
    if ( (((unsigned int)CurrentThread ^ v83 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
      && v34
      && (!v24 || v34 != *(_DWORD *)(v24 + 8)) )
    {
      goto LABEL_77;
    }
    v35 = *((_BYTE *)v31 + 15);
    if ( (v35 & 0x20) != 0 )
      goto LABEL_77;
    if ( (v35 & 0x40) == 0 )
    {
LABEL_30:
      if ( *((_BYTE *)v32 + 14) == 5 && ((v2 ^ *((unsigned __int16 *)v32 + 6)) & 0xFFFFFF7F) == 0 )
      {
        v36 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
        v37 = GdiHandleManager::DecodeIndex(v36, *(_DWORD *)v32 & 0xFFFFFF);
        v38 = *((_QWORD *)v36 + 2);
        v39 = v37;
        v40 = *(_DWORD *)(v38 + 2056);
        v41 = v40 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16);
        if ( v37 >= (unsigned int)v41
          || (v37 >= v40
            ? (v41 = ((v37 - v40) >> 16) + 1,
               v42 = *(_QWORD *)(v38 + 8 * v41 + 8),
               v39 = -65536 * ((v37 - v40) >> 16) - v40 + v37)
            : (v42 = *(_QWORD *)(v38 + 8)),
              (unsigned int)v39 >= *(_DWORD *)(v42 + 20)) )
        {
          v18 = 0LL;
        }
        else
        {
          v41 = (unsigned int)v39;
          v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * (v39 >> 8)) + 16LL * (unsigned __int8)v39 + 8);
        }
        ++*(_DWORD *)(v18 + 8);
        v43 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v18 + 680);
        CurrentThread = *(struct _KTHREAD **)(SGDGetSessionState(v41) + 24);
        if ( v43 )
        {
          CurrentThread = (struct _KTHREAD *)*((_QWORD *)CurrentThread + 1005);
          if ( CurrentThread )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              CurrentThread,
              v43,
              1);
        }
      }
      v44 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
      v45 = *(GdiHandleManager **)(v44 + 8008);
      v46 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v44) + 24) + 8008LL);
      v47 = GdiHandleManager::DecodeIndex(v46, *(_DWORD *)v32 & 0xFFFFFF);
      v48 = *((_QWORD *)v46 + 2);
      v49 = v47;
      v50 = *(_DWORD *)(v48 + 2056);
      if ( v47 >= v50 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16)
        || (v47 >= v50
          ? (v51 = *(_QWORD *)(v48 + 8LL * (((v47 - v50) >> 16) + 1) + 8), v49 = -65536 * ((v47 - v50) >> 16)
                                                                               - v50
                                                                               + v47)
          : (v51 = *(_QWORD *)(v48 + 8)),
            (unsigned int)v49 >= *(_DWORD *)(v51 + 20)) )
      {
        v52 = 0LL;
      }
      else
      {
        v52 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * (v49 >> 8)) + 16LL * (unsigned __int8)v49 + 8);
      }
      v53 = GdiHandleManager::DecodeIndex(v45, (unsigned __int16)*v52 | (*v52 >> 8) & 0xFF0000);
      v54 = *((_QWORD *)v45 + 2);
      v55 = v53;
      v56 = *(_DWORD *)(v54 + 2056);
      if ( v53 < v56 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16) )
      {
        if ( v53 >= v56 )
        {
          v57 = *(_QWORD *)(v54 + 8LL * (((v53 - v56) >> 16) + 1) + 8);
          v55 = -65536 * ((v53 - v56) >> 16) - v56 + v53;
        }
        else
        {
          v57 = *(_QWORD *)(v54 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v57 + 24 * v55 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * (v55 >> 8)) + 16LL * (unsigned __int8)v55,
          0LL);
        KeLeaveCriticalRegion();
      }
      v81 = 0;
      v80 = 0LL;
      KeLeaveCriticalRegion();
LABEL_48:
      v83 = v18;
      if ( v18 )
      {
        v9 = SURFACE::bDeleteSurface(v18, 0LL, 0LL);
        if ( !v9 )
          HmgDecrementShareReferenceCountEx(v18, 0LL);
        goto LABEL_51;
      }
LABEL_104:
      SURFREF::~SURFREF((SURFREF *)&v83);
LABEL_51:
      v59 = *(_QWORD *)(SGDGetSessionState(v58) + 24);
      v60 = *(_QWORD *)(v59 + 80);
      v62 = *(_QWORD *)(SGDGetSessionState(v61) + 24);
      if ( *(_DWORD *)(v62 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v62,
          (unsigned int)&LockRelease,
          v63,
          v60,
          (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
      v64 = *(struct _ERESOURCE **)(v59 + 80);
      if ( v64 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v64);
        PsLeavePriorityRegion(v66, v65);
      }
      return v9;
    }
    v79 = HANDLELOCK::pObj((HANDLELOCK *)&v80);
    if ( !*((_WORD *)v79 + 6) || (CurrentThread = KeGetCurrentThread(), *((struct _KTHREAD **)v79 + 2) != CurrentThread) )
    {
LABEL_77:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v80);
      if ( !v81 )
        goto LABEL_48;
    }
    v32 = v80;
    goto LABEL_30;
  }
  v68 = v3 - 1;
  if ( !v68 )
    return GrepDeleteDC((HDC)a1, 0);
  v69 = v68 - 3;
  if ( !v69 )
    return bDeleteRegion((HRGN)a1);
  v70 = v69 - 4;
  if ( !v70 )
  {
    v73 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    v74 = *(struct _ERESOURCE **)(v73 + 40);
    v84 = v74;
    if ( v74 )
    {
      PsEnterPriorityRegion(v73, v72);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v74);
    }
    EPALOBJ::EPALOBJ((EPALOBJ *)&v83, (HPALETTE)a1);
    v75 = v83;
    if ( v83 )
    {
      if ( (*(_DWORD *)(v83 + 24) & 0x1000000) == 0 )
      {
        v76 = XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)&v83, 0);
        v75 = v83;
        v9 = v76;
      }
      if ( v75 )
        HmgDecrementShareReferenceCountEx(v75, 0LL);
    }
    SEMOBJ::vUnlock(&v84);
    return v9;
  }
  v71 = v70 - 2;
  if ( !v71 )
  {
    if ( qword_1C02D57E0 )
      return (unsigned int)qword_1C02D57E0(a1, 0LL);
    return v9;
  }
  if ( v71 == 6 )
    return bDeleteBrush(a1);
  else
    return 0LL;
}
