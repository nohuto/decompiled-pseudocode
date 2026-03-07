__int64 __fastcall GreGetBounds(unsigned int a1, _DWORD *a2, char a3)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r9d
  GdiHandleEntryTable *v16; // rcx
  struct _ENTRY *v17; // rax
  __int64 v18; // r14
  unsigned __int64 CurrentThread; // rcx
  char v20; // al
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned int v33; // r9d
  __int64 v34; // r8
  _DWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // r10
  unsigned int v38; // edx
  unsigned int v39; // r8d
  __int64 v40; // r10
  int v41; // r11d
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned __int128 v44; // kr00_16
  unsigned int v45; // edi
  HDC v46; // r12
  int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rcx
  _DWORD *v50; // r15
  char v51; // al
  BOOL v52; // r14d
  __int64 v53; // rcx
  __int64 v54; // r13
  __int64 v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  unsigned int v59; // r9d
  __int64 v60; // r8
  unsigned int v61; // eax
  __int64 v62; // r10
  unsigned int v63; // edx
  unsigned int v64; // r8d
  __int64 v65; // r10
  int v67; // ecx
  _DWORD *v68; // r14
  __int64 v69; // rax
  int v70; // ecx
  int v71; // edx
  int v72; // r9d
  int v73; // r8d
  int v74; // eax
  int v75; // eax
  unsigned __int64 v76; // xmm0_8
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v78; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v79; // rdx
  __int64 v80; // rcx
  __m128i v81; // [rsp+30h] [rbp-30h] BYREF
  __int64 v82; // [rsp+48h] [rbp-18h] BYREF
  int v83; // [rsp+50h] [rbp-10h]
  __int64 v84; // [rsp+A0h] [rbp+40h] BYREF
  _DWORD *v85; // [rsp+A8h] [rbp+48h]

  v85 = a2;
  v4 = 0LL;
  v84 = 0LL;
  v5 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v84);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v8, v7, v9, v10);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v81.m128i_i32[2] = 1;
  v11 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 8008LL);
  v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v11, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v13 = *(_QWORD *)(v11 + 16);
  v14 = v12;
  v15 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16)
    || (v12 >= v15
      ? (GdiHandleEntryTable *)(v16 = *(GdiHandleEntryTable **)(v13 + 8LL * (((v12 - v15) >> 16) + 1) + 8),
                                v14 = -65536 * ((v12 - v15) >> 16) - v15 + v12)
      : (v16 = *(GdiHandleEntryTable **)(v13 + 8)),
        v17 = GdiHandleEntryTable::AcquireEntryLock(v16, v14, 0),
        v81.m128i_i64[0] = (__int64)v17,
        (v18 = (__int64)v17) == 0) )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  _m_prefetchw((char *)v17 + 8);
  CurrentThread = *((unsigned int *)v17 + 2);
  v20 = *((_BYTE *)v17 + 15);
  v81.m128i_i32[3] = CurrentThread;
  if ( (v20 & 0x20) != 0 )
    goto LABEL_76;
  if ( (v20 & 0x40) == 0 )
    goto LABEL_9;
  v78 = HANDLELOCK::pObj((HANDLELOCK *)&v81);
  if ( !*((_WORD *)v78 + 6)
    || (CurrentThread = (unsigned __int64)KeGetCurrentThread(), *((_QWORD *)v78 + 2) != CurrentThread) )
  {
LABEL_76:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v81);
    if ( !v81.m128i_i32[2] )
      goto LABEL_27;
  }
  v18 = v81.m128i_i64[0];
LABEL_9:
  if ( *(_BYTE *)(v18 + 14) == 1 && *(_WORD *)(v18 + 12) == HIWORD(a1) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
    v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v21, *(_DWORD *)v18 & 0xFFFFFF);
    v23 = *(_QWORD *)(v21 + 16);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    CurrentThread = v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16);
    if ( v22 >= (unsigned int)CurrentThread
      || (v22 >= v25
        ? (CurrentThread = ((v22 - v25) >> 16) + 1,
           v26 = *(_QWORD *)(v23 + 8 * CurrentThread + 8),
           v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22)
        : (v26 = *(_QWORD *)(v23 + 8)),
          (unsigned int)v24 >= *(_DWORD *)(v26 + 20)) )
    {
      v5 = 0LL;
    }
    else
    {
      CurrentThread = (unsigned int)v24;
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
    }
    ++*(_DWORD *)(v5 + 8);
  }
  v27 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
  v28 = *(_QWORD *)(v27 + 8008);
  v29 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v27) + 24) + 8008LL);
  v30 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v29, *(_DWORD *)v18 & 0xFFFFFF);
  v31 = *(_QWORD *)(v29 + 16);
  v32 = v30;
  v33 = *(_DWORD *)(v31 + 2056);
  if ( v30 >= v33 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16)
    || (v30 >= v33
      ? (v34 = *(_QWORD *)(v31 + 8LL * (((v30 - v33) >> 16) + 1) + 8), v32 = -65536 * ((v30 - v33) >> 16) - v33 + v30)
      : (v34 = *(_QWORD *)(v31 + 8)),
        (unsigned int)v32 >= *(_DWORD *)(v34 + 20)) )
  {
    v35 = 0LL;
  }
  else
  {
    v35 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * (v32 >> 8)) + 16LL * (unsigned __int8)v32 + 8);
  }
  v36 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v28, (unsigned __int16)*v35 | (*v35 >> 8) & 0xFF0000u);
  v37 = *(_QWORD *)(v28 + 16);
  v38 = v36;
  v39 = *(_DWORD *)(v37 + 2056);
  if ( v36 < v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
  {
    if ( v36 >= v39 )
    {
      v40 = *(_QWORD *)(v37 + 8LL * (((v36 - v39) >> 16) + 1) + 8);
      v38 = -65536 * ((v36 - v39) >> 16) - v39 + v36;
    }
    else
    {
      v40 = *(_QWORD *)(v37 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v40 + 24LL * v38 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v38 >> 8)) + 16LL * (unsigned __int8)v38,
      0LL);
    KeLeaveCriticalRegion();
  }
  v81.m128i_i32[2] = 0;
  v81.m128i_i64[0] = 0LL;
  KeLeaveCriticalRegion();
LABEL_27:
  v81 = 0LL;
  if ( !v5 )
    return 0;
  if ( (a3 & 1) != 0 )
  {
    v74 = *(_DWORD *)(v5 + 36);
    if ( (a3 & 4) != 0 )
      v75 = v74 | 0x40;
    else
      v75 = v74 | 0x20;
    *(_DWORD *)(v5 + 36) = v75;
  }
  else if ( (a3 & 2) != 0 )
  {
    v67 = *(_DWORD *)(v5 + 36);
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v5 + 36) = v67 & 0xFFFFFFBF;
      v41 = a3 & 4;
      goto LABEL_31;
    }
    *(_DWORD *)(v5 + 36) = v67 & 0xFFFFFFDF;
    v41 = a3 & 4;
LABEL_55:
    v43 = *(__m128i *)(v5 + 1064);
    goto LABEL_33;
  }
  v41 = a3 & 4;
  if ( (a3 & 4) == 0 )
    goto LABEL_55;
LABEL_31:
  v42 = *(_QWORD *)(v5 + 1184);
  if ( !v42
    || (a3 & 3) != 0
    || (v81 = *(__m128i *)(v42 + 56),
        v76 = _mm_srli_si128(v81, 8).m128i_u64[0],
        v44 = __PAIR128__(v76, v81.m128i_u64[0]),
        v81.m128i_i32[0] == (_DWORD)v76)
    || v81.m128i_i32[1] == HIDWORD(v76) )
  {
    v43 = *(__m128i *)(v5 + 1080);
LABEL_33:
    v81 = v43;
    v44 = (unsigned __int128)v43;
  }
  if ( (_DWORD)v44 == DWORD2(v44)
    || (int)v44 >= SDWORD2(v44)
    || DWORD1(v44) == HIDWORD(v44)
    || SDWORD1(v44) >= SHIDWORD(v44) )
  {
    v45 = 0;
  }
  else
  {
    v68 = v85;
    if ( v85 )
    {
      v69 = 1016LL;
      if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
        v69 = 1024LL;
      v70 = *(_DWORD *)(v69 + v5 + 4);
      v71 = v70 + v81.m128i_i32[1];
      v72 = *(_DWORD *)(v69 + v5);
      v73 = v70 + v81.m128i_i32[3];
      *v85 = v72 + v44;
      v68[1] = v71;
      v68[2] = v72 + DWORD2(v44);
      v68[3] = v73;
    }
    v45 = 1;
    if ( v41 )
    {
      *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
      *(_DWORD *)(v5 + 1084) = 0x7FFFFFFF;
      *(_DWORD *)(v5 + 1088) = 0x80000000;
      *(_DWORD *)(v5 + 1092) = 0x80000000;
    }
    else
    {
      *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
      *(_DWORD *)(v5 + 1068) = 0x7FFFFFFF;
      *(_DWORD *)(v5 + 1072) = 0x80000000;
      *(_DWORD *)(v5 + 1076) = 0x80000000;
    }
  }
  v46 = *(HDC *)v5;
  v47 = (unsigned __int16)*(_QWORD *)v5;
  v48 = ((unsigned int)*(_QWORD *)v5 >> 8) & 0xFF0000;
  v82 = 0LL;
  v83 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v82, v47 | v48, 0, 0, 1);
  if ( v83 )
  {
    v50 = (_DWORD *)v82;
    v51 = *(_BYTE *)(v82 + 14);
    v52 = (*(_BYTE *)(v82 + 15) & 8) != 0;
    if ( v51 == 5 )
    {
      v79 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680);
      v80 = 0LL;
    }
    else
    {
      if ( v51 != 16 )
        goto LABEL_41;
      v79 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 136);
      v80 = 2LL;
    }
    TrackObjectReferenceDecrement(v80, v79);
LABEL_41:
    --*(_DWORD *)(v5 + 8);
    v53 = *(_QWORD *)(SGDGetSessionState(v49) + 24);
    v54 = *(_QWORD *)(v53 + 8008);
    v55 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v53) + 24) + 8008LL);
    v56 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v55, *v50 & 0xFFFFFF);
    v57 = *(_QWORD *)(v55 + 16);
    v58 = v56;
    v59 = *(_DWORD *)(v57 + 2056);
    if ( v56 < v59 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
    {
      if ( v56 >= v59 )
      {
        v60 = *(_QWORD *)(v57 + 8LL * (((v56 - v59) >> 16) + 1) + 8);
        v58 = -65536 * ((v56 - v59) >> 16) - v59 + v56;
      }
      else
      {
        v60 = *(_QWORD *)(v57 + 8);
      }
      if ( (unsigned int)v58 < *(_DWORD *)(v60 + 20) )
        v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * (v58 >> 8)) + 16LL * (unsigned __int8)v58 + 8);
    }
    v61 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v54, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000u);
    v62 = *(_QWORD *)(v54 + 16);
    v63 = v61;
    v64 = *(_DWORD *)(v62 + 2056);
    if ( v61 < v64 + ((*(unsigned __int16 *)(v62 + 2) + 0xFFFF) << 16) )
    {
      if ( v61 >= v64 )
      {
        v65 = *(_QWORD *)(v62 + 8LL * (((v61 - v64) >> 16) + 1) + 8);
        v63 = -65536 * ((v61 - v64) >> 16) - v64 + v61;
      }
      else
      {
        v65 = *(_QWORD *)(v62 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v65 + 24LL * v63 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v65 + 24) + 8 * ((unsigned __int64)v63 >> 8)) + 16LL * (unsigned __int8)v63,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
    if ( v52 )
      GrepDeleteDC(v46, 0x2000000u);
  }
  return v45;
}
