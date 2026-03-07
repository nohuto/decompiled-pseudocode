__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  HDC v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DC *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  unsigned int v18; // r13d
  unsigned int v19; // eax
  __int64 v20; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v22; // rsi
  struct _DC_ATTR *v23; // rbx
  char v24; // cl
  unsigned int v25; // r12d
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r13
  unsigned int v29; // ebx
  __int64 v30; // rsi
  unsigned int v31; // r14d
  unsigned int v32; // r12d
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // r8
  DC *v36; // rdx
  __int64 v37; // rbx
  _QWORD *v38; // rax
  _QWORD *v39; // rsi
  struct _DC_ATTR *v40; // rbx
  HDC v41; // r12
  int v42; // eax
  int v43; // r15d
  unsigned int v44; // esi
  unsigned int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // edx
  unsigned int v54; // r9d
  GdiHandleEntryTable *v55; // rcx
  struct _ENTRY *v56; // rax
  struct _ENTRY *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rdi
  unsigned int v62; // ebx
  __int64 v63; // rdx
  unsigned int v64; // r9d
  __int64 v65; // r8
  _DWORD *v66; // rdx
  unsigned int v67; // ebx
  __int64 v68; // rdx
  unsigned int v69; // r8d
  __int64 v70; // r10
  __int64 ProcessWow64Process; // rax
  int v73; // ecx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  bool v77; // zf
  int v78; // eax
  unsigned int v79; // r12d
  unsigned int v80; // r12d
  unsigned int v81; // r12d
  unsigned int v82; // r12d
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  char v88; // bl
  bool v89; // cc
  __int64 CurrentThreadProcess; // rax
  __int64 v91; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v92; // [rsp+58h] [rbp-11h] BYREF
  DC *v93; // [rsp+60h] [rbp-9h] BYREF
  __int64 v94; // [rsp+68h] [rbp-1h]
  struct _ENTRY *v95; // [rsp+70h] [rbp+7h] BYREF
  int v96; // [rsp+78h] [rbp+Fh]
  int v97; // [rsp+7Ch] [rbp+13h]
  unsigned int v100; // [rsp+E8h] [rbp+7Fh]

  v4 = a1;
  v5 = 0LL;
  v6 = 1;
  v93 = 0LL;
  v100 = 1;
  v7 = a3;
  v94 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v93, a1);
  v12 = v93;
  if ( !v93 )
    goto LABEL_114;
  if ( (*((_DWORD *)v93 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v94) )
    {
LABEL_28:
      *((_DWORD *)v12 + 11) |= 2u;
      LODWORD(v94) = 1;
      goto LABEL_29;
    }
    v13 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
    v14 = *(_QWORD *)(v13 + 8008);
    v15 = (unsigned __int16)*(_DWORD *)v12 | (*(_DWORD *)v12 >> 8) & 0xFF0000;
    v92 = (_DWORD *)v14;
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)v14 > 0x10000u )
      {
        v13 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *(GdiHandleEntryDirectory **)(v14 + 16),
                                     (unsigned __int16)v15,
                                     1)
              + 13);
        if ( (_DWORD)v13 == HIWORD(v15) )
          v15 = (unsigned __int16)v15;
      }
      else
      {
        v15 = (unsigned __int16)v15;
      }
    }
    v16 = *(_QWORD *)(v14 + 16);
    v17 = *(_DWORD *)(v16 + 2056);
    v18 = v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16);
    if ( v15 < v18 )
    {
      if ( v15 >= v17 )
      {
        v13 = ((v15 - v17) >> 16) + 1;
        v10 = *(_QWORD *)(v16 + 8 * v13 + 8);
        v19 = v15 + -65536 * ((v15 - v17) >> 16) - v17;
      }
      else
      {
        v10 = *(_QWORD *)(v16 + 8);
        v19 = v15;
      }
      if ( v19 < *(_DWORD *)(v10 + 20) )
      {
        v11 = v19;
        v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                        + 16LL * (unsigned __int8)v19
                        + 8);
        if ( v13 )
        {
          v13 = 3LL * v19;
          v5 = *(_QWORD *)v10 + 24LL * v19;
        }
      }
    }
    if ( v15 >= 0x10000 )
    {
      v13 = (unsigned __int16)v15;
      LODWORD(v91) = (unsigned __int16)v15;
      if ( *v92 > 0x10000u )
      {
        v13 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     (GdiHandleEntryDirectory *)v16,
                                     (unsigned __int16)v15,
                                     1)
              + 13);
        if ( (_DWORD)v13 == HIWORD(v15) )
          v15 = v91;
      }
      else
      {
        v15 = (unsigned __int16)v15;
      }
    }
    if ( v15 >= v18
      || (v15 >= v17
        ? (v13 = ((v15 - v17) >> 16) + 1, v10 = *(_QWORD *)(v16 + 8 * v13 + 8),
                                          v15 += -65536 * ((v15 - v17) >> 16) - v17)
        : (v10 = *(_QWORD *)(v16 + 8)),
          v15 >= *(_DWORD *)(v10 + 20)) )
    {
      v8 = 0LL;
    }
    else
    {
      v13 = 2LL * (unsigned __int8)v15;
      v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                     + 16LL * (unsigned __int8)v15
                     + 8);
    }
    if ( (DC *)v8 != v12 || !v5 )
    {
      v5 = 0LL;
LABEL_27:
      v7 = a3;
      v6 = 1;
      v4 = a1;
      goto LABEL_28;
    }
    v20 = *(_QWORD *)(v5 + 16);
    if ( v20 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v8 = *((unsigned int *)v22 + 73);
        v73 = *((_DWORD *)v22 + 73);
        if ( ProcessWow64Process )
          v74 = (unsigned int)__ROR4__(v20, 32 - (v73 & 0x1F));
        else
          v74 = __ROR8__(v20, 64 - (v73 & 0x3Fu));
        v23 = (struct _DC_ATTR *)(v8 ^ v74);
        v5 = 0LL;
LABEL_25:
        if ( v23 && !(unsigned int)DC::SaveAttributes(v12, v23) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
          v12 = 0LL;
          v93 = 0LL;
          goto LABEL_114;
        }
        goto LABEL_27;
      }
      v5 = 0LL;
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    else
    {
      v5 = 0LL;
    }
    v23 = 0LL;
    goto LABEL_25;
  }
LABEL_29:
  if ( (*((_DWORD *)v12 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(v12);
  v24 = a2;
  v25 = a2 & 0xFFFFFFBF;
  v9 = v24 & 0x40;
  if ( v25 == 32 )
  {
    if ( (*((_DWORD *)v12 + 10) & 1) != 0 )
      v26 = (_QWORD *)((char *)v12 + 1024);
    else
      v26 = (_QWORD *)((char *)v12 + 1016);
    *(_QWORD *)v7 = *v26;
    if ( (_DWORD)v9 && (*((_DWORD *)v12 + 9) & 0x4000) != 0 )
    {
      v92 = 0LL;
      if ( IS_USERCRIT_OWNED_AT_ALL(v9, v8, v10, v11) )
      {
        v88 = 0;
      }
      else
      {
        v88 = 1;
        PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v9, v85, v86, v87);
      }
      if ( qword_1C02D5758 && (unsigned int)qword_1C02D5758(v4, &v92) )
      {
        *(_DWORD *)v7 += (_DWORD)v92;
        *(_DWORD *)(v7 + 4) += HIDWORD(v92);
      }
      if ( v88 )
        UserSessionSwitchLeaveCrit(v9, v85, v86, v87);
      v6 = 1;
    }
    goto LABEL_36;
  }
  v79 = v25 - 1;
  if ( v79 )
  {
    v80 = v79 - 1;
    if ( v80 )
    {
      v81 = v80 - 2;
      if ( v81 )
      {
        v82 = v81 - 4;
        if ( !v82 )
        {
          *(_QWORD *)v7 = *(_QWORD *)(*((_QWORD *)v12 + 122) + 308LL);
          v9 = *(unsigned int *)(*((_QWORD *)v12 + 122) + 304LL);
          *(_DWORD *)v7 = v9;
          goto LABEL_36;
        }
        if ( v82 == 8 )
        {
          if ( !qword_1C02D58D0 || (int)qword_1C02D58D0(v9) < 0 )
            goto LABEL_36;
          if ( qword_1C02D58D8 )
          {
            v6 = qword_1C02D58D8(v4, v7);
            v100 = v6;
            goto LABEL_36;
          }
        }
LABEL_114:
        v6 = 0;
        v100 = 0;
        goto LABEL_36;
      }
      v83 = *(_QWORD *)(*((_QWORD *)v12 + 122) + 324LL);
    }
    else
    {
      v83 = *(_QWORD *)(*((_QWORD *)v12 + 122) + 316LL);
    }
    *(_QWORD *)v7 = v83;
    v9 = *(unsigned int *)(*((_QWORD *)v12 + 122) + 108LL);
    if ( (v9 & 1) != 0 )
      *(_DWORD *)v7 = -(int)v83;
  }
  else
  {
    v84 = *((_QWORD *)v12 + 122);
    if ( (*(_DWORD *)(v84 + 340) & 0x4000) != 0 && *(_DWORD *)(v84 + 104) == 7 )
      DC::vMakeIso(v12);
    v9 = *(_QWORD *)(*((_QWORD *)v12 + 122) + 332LL);
    *(_QWORD *)v7 = v9;
  }
LABEL_36:
  if ( !v12 )
    return v6;
  if ( (_DWORD)v94 && (*((_DWORD *)v12 + 11) & 2) != 0 )
  {
    if ( HIDWORD(v94) )
      goto LABEL_63;
    v27 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
    v28 = *(_QWORD *)(v27 + 8008);
    v29 = (unsigned __int16)*(_DWORD *)v12 | (*(_DWORD *)v12 >> 8) & 0xFF0000;
    if ( v29 >= 0x10000 )
    {
      if ( *(_DWORD *)v28 > 0x10000u )
      {
        v27 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *(GdiHandleEntryDirectory **)(v28 + 16),
                                     (unsigned __int16)*(_DWORD *)v12,
                                     1)
              + 13);
        if ( (_DWORD)v27 == HIWORD(v29) )
          v29 = (unsigned __int16)v29;
      }
      else
      {
        v29 = (unsigned __int16)*(_DWORD *)v12;
      }
    }
    v30 = *(_QWORD *)(v28 + 16);
    v31 = *(_DWORD *)(v30 + 2056);
    v32 = v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16);
    if ( v29 < v32 )
    {
      if ( v29 >= v31 )
      {
        v27 = ((v29 - v31) >> 16) + 1;
        v33 = *(_QWORD *)(v30 + 8 * v27 + 8);
        v34 = v29 + -65536 * ((v29 - v31) >> 16) - v31;
      }
      else
      {
        v33 = *(_QWORD *)(v30 + 8);
        v34 = v29;
      }
      if ( v34 < *(_DWORD *)(v33 + 20) )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                        + 16LL * (unsigned __int8)v34
                        + 8);
        if ( v27 )
        {
          v27 = 3LL * v34;
          v5 = *(_QWORD *)v33 + 24LL * v34;
        }
      }
    }
    if ( v29 >= 0x10000 )
    {
      v89 = *(_DWORD *)v28 <= 0x10000u;
      LODWORD(v91) = (unsigned __int16)v29;
      if ( v89 )
      {
        v29 = (unsigned __int16)v29;
      }
      else
      {
        v27 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     (GdiHandleEntryDirectory *)v30,
                                     (unsigned __int16)v29,
                                     1)
              + 13);
        if ( (_DWORD)v27 == HIWORD(v29) )
          v29 = v91;
      }
    }
    if ( v29 >= v32
      || (v29 >= v31
        ? (v27 = ((v29 - v31) >> 16) + 1, v35 = *(_QWORD *)(v30 + 8 * v27 + 8),
                                          v29 += -65536 * ((v29 - v31) >> 16) - v31)
        : (v35 = *(_QWORD *)(v30 + 8)),
          v29 >= *(_DWORD *)(v35 + 20)) )
    {
      v36 = 0LL;
    }
    else
    {
      v27 = 2LL * (unsigned __int8)v29;
      v36 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                   + 16LL * (unsigned __int8)v29
                   + 8);
    }
    if ( v36 != v12 || !v5 )
      goto LABEL_63;
    v37 = *(_QWORD *)(v5 + 16);
    if ( v37 )
    {
      v38 = (_QWORD *)PsGetCurrentProcessWin32Process(v27);
      v39 = v38;
      if ( v38 && *v38 )
      {
        v75 = PsGetProcessWow64Process(*v38);
        v76 = *((unsigned int *)v39 + 73);
        v77 = v75 == 0;
        v78 = *((_DWORD *)v39 + 73);
        if ( v77 )
          v40 = (struct _DC_ATTR *)(v76 ^ __ROR8__(v37, 64 - (v78 & 0x3Fu)));
        else
          v40 = (struct _DC_ATTR *)(v76 ^ (unsigned int)__ROR4__(v37, 32 - (v78 & 0x1F)));
LABEL_61:
        if ( v40 )
          DC::RestoreAttributes(v12, v40);
LABEL_63:
        *((_DWORD *)v12 + 11) &= ~2u;
        goto LABEL_64;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v40 = 0LL;
    goto LABEL_61;
  }
LABEL_64:
  v41 = *(HDC *)v12;
  v42 = (unsigned __int16)*(_QWORD *)v12;
  v43 = 0;
  v44 = ((unsigned int)*(_QWORD *)v12 >> 8) & 0xFF0000;
  v91 = 0LL;
  v45 = v42 | v44;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v91);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v47, v46, v48, v49);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v96 = 1;
  v50 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v47) + 24) + 8008LL);
  v51 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v50, v45);
  v52 = *(_QWORD *)(v50 + 16);
  v53 = v51;
  v54 = *(_DWORD *)(v52 + 2056);
  if ( v51 >= v54 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16)
    || (v51 >= v54
      ? (GdiHandleEntryTable *)(v55 = *(GdiHandleEntryTable **)(v52 + 8LL * (((v51 - v54) >> 16) + 1) + 8),
                                v53 = -65536 * ((v51 - v54) >> 16) - v54 + v51)
      : (v55 = *(GdiHandleEntryTable **)(v52 + 8)),
        v56 = GdiHandleEntryTable::AcquireEntryLock(v55, v53, 0),
        v95 = v56,
        (v57 = v56) == 0LL) )
  {
    KeLeaveCriticalRegion();
    return v100;
  }
  _m_prefetchw((char *)v56 + 8);
  v58 = *((unsigned int *)v56 + 2);
  v97 = *((_DWORD *)v56 + 2);
  if ( HIDWORD(v94) || (*((_BYTE *)v56 + 15) & 0x20) == 0 )
    goto LABEL_72;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v95);
  if ( v96 )
  {
    v57 = v95;
LABEL_72:
    if ( (*((_BYTE *)v57 + 15) & 8) != 0 && !*((_DWORD *)v12 + 2) && *((_WORD *)v12 + 6) == 1 )
      v43 = 1;
    _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    v59 = *(_QWORD *)(SGDGetSessionState(v58) + 24);
    v60 = *(_QWORD *)(v59 + 8008);
    v61 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v59) + 24) + 8008LL);
    v62 = *(_DWORD *)v95 & 0xFFFFFF;
    if ( v62 >= 0x10000 )
    {
      if ( *(_DWORD *)v61 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v61 + 16),
                                    *(unsigned __int16 *)v95,
                                    1)
             + 13) == HIWORD(v62) )
          v62 = (unsigned __int16)v62;
      }
      else
      {
        v62 = *(unsigned __int16 *)v95;
      }
    }
    v63 = *(_QWORD *)(v61 + 16);
    v64 = *(_DWORD *)(v63 + 2056);
    if ( v62 >= v64 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16)
      || (v62 >= v64
        ? (v65 = *(_QWORD *)(v63 + 8LL * (((v62 - v64) >> 16) + 1) + 8), v62 += -65536 * ((v62 - v64) >> 16) - v64)
        : (v65 = *(_QWORD *)(v63 + 8)),
          v62 >= *(_DWORD *)(v65 + 20)) )
    {
      v66 = 0LL;
    }
    else
    {
      v66 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v65 + 24) + 8 * ((unsigned __int64)v62 >> 8))
                       + 16LL * (unsigned __int8)v62
                       + 8);
    }
    v67 = (unsigned __int16)*v66 | (*v66 >> 8) & 0xFF0000;
    if ( v67 >= 0x10000 )
    {
      if ( *(_DWORD *)v60 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v60 + 16),
                                    (unsigned __int16)*v66,
                                    1)
             + 13) == HIWORD(v67) )
          v67 = (unsigned __int16)v67;
      }
      else
      {
        v67 = (unsigned __int16)*v66;
      }
    }
    v68 = *(_QWORD *)(v60 + 16);
    v69 = *(_DWORD *)(v68 + 2056);
    if ( v67 < v69 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16) )
    {
      if ( v67 >= v69 )
      {
        v70 = *(_QWORD *)(v68 + 8LL * (((v67 - v69) >> 16) + 1) + 8);
        v67 += -65536 * ((v67 - v69) >> 16) - v69;
      }
      else
      {
        v70 = *(_QWORD *)(v68 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v70 + 24LL * v67 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)v67 >> 8)) + 16LL * (unsigned __int8)v67,
        0LL);
      KeLeaveCriticalRegion();
    }
    v96 = 0;
    v95 = 0LL;
    KeLeaveCriticalRegion();
  }
  if ( v43 )
    GrepDeleteDC(v41, 0x2000000u);
  return v100;
}
