__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, unsigned int a2, int a3, char a4, char a5, unsigned int *a6)
{
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r12d
  __int64 v17; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 CurrentThread; // rcx
  unsigned int v24; // edi
  __int64 v25; // r13
  __int64 v26; // r13
  unsigned int v27; // edx
  __int64 v28; // r13
  unsigned __int16 *v29; // rsi
  _QWORD *v30; // rax
  int v31; // edx
  char v32; // al
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // r12
  unsigned int v41; // eax
  GdiHandleManager *v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // r10d
  unsigned int v46; // ebp
  __int64 v47; // r9
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  char v53; // al
  int v54; // ebx
  unsigned int v55; // ebp
  char EtwGdiHandleType; // r14
  __int64 v57; // rcx
  GdiHandleManager *v58; // rdi
  unsigned int v59; // eax
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 *v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rdi
  GdiHandleManager *v68; // rbx
  unsigned int v69; // eax
  __int64 v70; // r8
  unsigned __int64 v71; // rdx
  unsigned int v72; // r9d
  __int64 v73; // r8
  _DWORD *v74; // r14
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // r9
  _QWORD **v81; // r11
  unsigned __int64 v82; // r10
  __int64 v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // r8d
  struct _ERESOURCE *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v92; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rdi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // edi
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v100; // rax
  unsigned int v101; // ebx
  __int64 v102; // rdx
  __int64 v103; // rcx
  _DWORD *v104; // rax
  int v105; // r8d
  unsigned int v106; // esi
  __int64 v107; // [rsp+40h] [rbp-88h] BYREF
  __int64 v108; // [rsp+48h] [rbp-80h]
  unsigned __int64 v109; // [rsp+50h] [rbp-78h]
  __int64 v110; // [rsp+58h] [rbp-70h]
  unsigned __int16 *v111; // [rsp+60h] [rbp-68h] BYREF
  int v112; // [rsp+68h] [rbp-60h]
  int v113; // [rsp+6Ch] [rbp-5Ch]
  PVOID Object; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v115; // [rsp+D8h] [rbp+10h]
  int v116; // [rsp+E0h] [rbp+18h]
  unsigned int v117; // [rsp+E8h] [rbp+20h]

  v116 = a3;
  v115 = a2;
  v7 = (unsigned int)a1;
  SGDGetSessionState(a1);
  v11 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v12 = *(struct _ERESOURCE **)(v11 + 1912);
  if ( v12 )
  {
    PsEnterPriorityRegion(v10, v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v12);
  }
  v13 = *(_QWORD *)(v11 + 1912);
  v14 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
  if ( *(_DWORD *)(v14 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v14,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v15,
      v13,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  if ( (a4 & 2) != 0 )
  {
    v17 = 0LL;
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v17 = 0LL;
  }
  v107 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v107);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v98 = *(_DWORD *)SGDGetUserSessionState(v20, v19, v21, v22),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v98 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v108 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v108 = 0LL;
  }
  v112 = 1;
  CurrentThread = *(_QWORD *)(SGDGetSessionState(v20) + 24);
  v24 = (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000;
  v25 = *(_QWORD *)(CurrentThread + 8008);
  if ( v24 >= 0x10000 )
  {
    if ( *(_DWORD *)v25 > 0x10000u )
    {
      CurrentThread = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                             *(GdiHandleEntryDirectory **)(v25 + 16),
                                             (unsigned __int16)v7,
                                             1)
                      + 13);
      if ( (_DWORD)CurrentThread == HIWORD(v24) )
        v24 = (unsigned __int16)v7;
    }
    else
    {
      v24 = (unsigned __int16)v7;
    }
  }
  v26 = *(_QWORD *)(v25 + 16);
  v27 = *(_DWORD *)(v26 + 2056);
  if ( v24 >= v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
  {
    v111 = 0LL;
LABEL_142:
    v112 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_98;
  }
  if ( v24 >= v27 )
  {
    CurrentThread = ((v24 - v27) >> 16) + 1;
    v28 = *(_QWORD *)(v26 + 8 * CurrentThread + 8);
    v24 += -65536 * ((v24 - v27) >> 16) - v27;
  }
  else
  {
    v28 = *(_QWORD *)(v26 + 8);
  }
  v29 = 0LL;
  if ( v24 < *(_DWORD *)(v28 + 20) )
  {
    v110 = 16LL * (unsigned __int8)v24;
    v30 = *(_QWORD **)(v28 + 24);
    v109 = 8 * ((unsigned __int64)v24 >> 8);
    Object = (PVOID)(v110 + *(_QWORD *)(*v30 + v109));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(Object, 0LL);
    if ( v24 < *(_DWORD *)(v28 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + v109) + v110 + 8) )
    {
      CurrentThread = 24LL * v24;
      *(_DWORD *)(CurrentThread + *(_QWORD *)v28 + 8) |= 1u;
      v29 = (unsigned __int16 *)(CurrentThread + *(_QWORD *)v28);
    }
    else
    {
      ExReleasePushLockExclusiveEx(Object, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v111 = v29;
  if ( !v29 )
    goto LABEL_142;
  _m_prefetchw(v29 + 4);
  v31 = *((_DWORD *)v29 + 2);
  v113 = v31;
  if ( v16 )
  {
    CurrentThread = v31 & 0xFFFFFFFE;
    if ( ((v31 ^ v107 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
      && (_DWORD)CurrentThread
      && (!v108 || (_DWORD)CurrentThread != *(_DWORD *)(v108 + 8)) )
    {
      goto LABEL_96;
    }
  }
  v32 = *((_BYTE *)v29 + 15);
  if ( (v32 & 0x20) != 0 )
    goto LABEL_96;
  if ( (v32 & 0x40) == 0 )
    goto LABEL_26;
  v100 = HANDLELOCK::pObj((HANDLELOCK *)&v111);
  if ( !*((_WORD *)v100 + 6) || (CurrentThread = (__int64)KeGetCurrentThread(), *((_QWORD *)v100 + 2) != CurrentThread) )
  {
LABEL_96:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v111);
    if ( !v112 )
    {
LABEL_98:
      v40 = 0LL;
      goto LABEL_79;
    }
  }
  v29 = v111;
LABEL_26:
  v33 = SGDGetSessionState(CurrentThread);
  v34 = *(_DWORD *)v29 & 0xFFFFFF;
  v35 = *(_QWORD *)(v33 + 24);
  v36 = *(_QWORD *)(v35 + 8008);
  if ( v34 >= 0x10000 )
  {
    if ( *(_DWORD *)v36 > 0x10000u )
    {
      v35 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v36 + 16), *v29, 1) + 13);
      if ( (_DWORD)v35 == HIWORD(v34) )
        v34 = (unsigned __int16)v34;
    }
    else
    {
      v34 = *v29;
    }
  }
  v37 = *(_QWORD *)(v36 + 16);
  v38 = *(_DWORD *)(v37 + 2056);
  if ( v34 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16)
    || (v34 >= v38
      ? (v35 = ((v34 - v38) >> 16) + 1, v39 = *(_QWORD *)(v37 + 8 * v35 + 8), v34 += -65536 * ((v34 - v38) >> 16) - v38)
      : (v39 = *(_QWORD *)(v37 + 8)),
        v34 >= *(_DWORD *)(v39 + 20)) )
  {
    v40 = 0LL;
  }
  else
  {
    v35 = 2LL * (unsigned __int8)v34;
    v40 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                    + 16LL * (unsigned __int8)v34
                    + 8);
  }
  if ( (a4 & 2) != 0 )
  {
    v101 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
    if ( v101 != -2147483630 && v101 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && v101 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v111);
      goto LABEL_98;
    }
  }
  if ( *((_BYTE *)v29 + 14) == a5 && v29[6] == HIWORD(v7) )
  {
    if ( (a4 & 4) != 0 || (v41 = *(_DWORD *)(v40 + 8), v35 = v115, v41 == v116) && *(_WORD *)(v40 + 12) == (_WORD)v115 )
    {
      if ( (a4 & 1) != 0 || (*((_BYTE *)v29 + 15) & 1) == 0 )
      {
        v42 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v35) + 24) + 8008LL);
        v43 = GdiHandleManager::DecodeIndex(v42, (unsigned __int16)*(_DWORD *)v40 | (*(_DWORD *)v40 >> 8) & 0xFF0000);
        v44 = *((_QWORD *)v42 + 2);
        v45 = v43;
        v46 = *(_DWORD *)(v44 + 2056);
        v117 = v46 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16);
        if ( v43 >= v117 )
        {
          v48 = 0LL;
        }
        else
        {
          if ( v43 >= v46 )
          {
            v47 = *(_QWORD *)(v44 + 8LL * (((v43 - v46) >> 16) + 1) + 8);
            v43 += -65536 * ((v43 - v46) >> 16) - v46;
          }
          else
          {
            v47 = *(_QWORD *)(v44 + 8);
          }
          v48 = 0LL;
          if ( v43 < *(_DWORD *)(v47 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                         + 16LL * (unsigned __int8)v43
                         + 8) )
          {
            v48 = *(_QWORD *)v47 + 24LL * v43;
          }
        }
        v49 = GdiHandleManager::DecodeIndex(v42, v45);
        v51 = v49;
        if ( v49 >= v117
          || (v49 >= v46
            ? (v50 = *(_QWORD *)(v44 + 8LL * (((v49 - v46) >> 16) + 1) + 8),
               v51 = -65536 * ((v49 - v46) >> 16) - v46 + v49)
            : (v50 = *(_QWORD *)(v44 + 8)),
              (unsigned int)v51 >= *(_DWORD *)(v50 + 20)) )
        {
          v52 = 0LL;
        }
        else
        {
          v52 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v50 + 24) + 8 * (v51 >> 8)) + 16LL * (unsigned __int8)v51 + 8);
        }
        if ( v52 != v40 )
          v48 = 0LL;
        v53 = *(_BYTE *)(v48 + 14);
        if ( v53 == 5 )
        {
          v102 = *(_QWORD *)(v40 + 680);
          v103 = 0LL;
        }
        else
        {
          if ( v53 != 16 )
          {
LABEL_57:
            v54 = *((_DWORD *)v29 + 2);
            v55 = v54 & 0xFFFFFFFE;
            if ( (v54 & 0xFFFFFFFE) != 0 && v55 != -2147483630 )
            {
              Object = 0LL;
              W32ProcessFromId = GetW32ProcessFromId(v55, (struct _EPROCESS **)&Object);
              if ( W32ProcessFromId )
              {
                GreAcquireHmgrSemaphore(v92);
                --*((_DWORD *)W32ProcessFromId + 15);
                GreReleaseHmgrSemaphore(v95, v94, v96, v97);
              }
              if ( Object )
                ObfDereferenceObject(Object);
            }
            EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v29 + 14), v52, v50);
            v58 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v57) + 24) + 8008LL);
            v59 = GdiHandleManager::DecodeIndex(v58, *(_DWORD *)v29 & 0xFFFFFF);
            v60 = *((_QWORD *)v58 + 2);
            v61 = v59;
            v62 = *(unsigned int *)(v60 + 2056);
            v63 = (unsigned int)v62 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16);
            if ( v59 >= (unsigned int)v63
              || (v59 >= (unsigned int)v62
                ? (v63 = ((v59 - (unsigned int)v62) >> 16) + 1,
                   v60 = *(_QWORD *)(v60 + 8 * v63 + 8),
                   v61 = -65536 * ((v59 - (unsigned int)v62) >> 16) - (_DWORD)v62 + v59)
                : (v60 = *(_QWORD *)(v60 + 8)),
                  (unsigned int)v61 >= *(_DWORD *)(v60 + 20)) )
            {
              v64 = 0LL;
            }
            else
            {
              v63 = 2LL * (unsigned __int8)v61;
              v64 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * (v61 >> 8)) + 16LL * (unsigned __int8)v61 + 8);
            }
            v65 = *v64;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
            {
              v104 = (_DWORD *)SGDGetUserSessionState(v63, v64, v60, v62);
              McTemplateK0pqqq_EtwWriteTransfer(
                *v104,
                (unsigned int)&GdiDestroyHandle,
                v105,
                v65,
                EtwGdiHandleType,
                *v104,
                v55);
            }
            *((_BYTE *)v29 + 14) = 0;
            *((_QWORD *)v29 + 2) = 0LL;
            *((_DWORD *)v29 + 2) = v54 & 1;
            v66 = *(_QWORD *)(SGDGetSessionState(v63) + 24);
            v67 = *(_QWORD *)(v66 + 8008);
            v68 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v66) + 24) + 8008LL);
            v69 = GdiHandleManager::DecodeIndex(v68, *(_DWORD *)v29 & 0xFFFFFF);
            v70 = *((_QWORD *)v68 + 2);
            v71 = v69;
            v72 = *(_DWORD *)(v70 + 2056);
            if ( v69 >= v72 + ((*(unsigned __int16 *)(v70 + 2) + 0xFFFF) << 16)
              || (v69 >= v72
                ? (v73 = *(_QWORD *)(v70 + 8LL * (((v69 - v72) >> 16) + 1) + 8),
                   v71 = -65536 * ((v69 - v72) >> 16) - v72 + v69)
                : (v73 = *(_QWORD *)(v70 + 8)),
                  (unsigned int)v71 >= *(_DWORD *)(v73 + 20)) )
            {
              v74 = 0LL;
            }
            else
            {
              v74 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v73 + 24) + 8 * (v71 >> 8)) + 16LL * (unsigned __int8)v71 + 8);
            }
            v75 = GdiHandleManager::DecodeIndex(
                    (GdiHandleManager *)v67,
                    (unsigned __int16)*v74 | (*v74 >> 8) & 0xFF0000);
            v76 = *(_QWORD *)(v67 + 24);
            if ( v76 )
            {
              v106 = *(_DWORD *)(v76 + 4LL * (unsigned __int16)v75);
              if ( v106 )
              {
                if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v67 + 16), v106, 1) )
                  GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v67 + 16), v106, 1);
                *(_DWORD *)(*(_QWORD *)(v67 + 24) + 4LL * (unsigned __int16)v75) = 0;
                --*(_DWORD *)(v67 + 4);
              }
            }
            v77 = *(_QWORD *)(v67 + 16);
            v78 = *(_DWORD *)(v77 + 2056);
            if ( (unsigned int)v75 >= v78 + ((*(unsigned __int16 *)(v77 + 2) + 0xFFFF) << 16) )
              goto LABEL_78;
            if ( (unsigned int)v75 >= v78 )
            {
              v80 = *(_QWORD *)(v77 + 8LL * ((((unsigned int)v75 - v78) >> 16) + 1) + 8);
              v75 = -65536 * (((unsigned int)v75 - v78) >> 16) - v78 + (unsigned int)v75;
              v79 = v80;
            }
            else
            {
              v79 = *(_QWORD *)(v77 + 8);
              v80 = v79;
            }
            if ( (unsigned int)v75 >= *(_DWORD *)(v80 + 20) )
            {
              v81 = (_QWORD **)(v79 + 24);
            }
            else
            {
              v81 = (_QWORD **)(v80 + 24);
              if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v80 + 24) + 8 * ((unsigned __int64)(unsigned int)v75 >> 8))
                             + 16LL * (unsigned __int8)v75
                             + 8) )
              {
                v82 = (unsigned __int64)(unsigned int)v75 >> 8;
                *(_QWORD *)(*(_QWORD *)(**v81 + 8 * v82) + 16LL * (unsigned __int8)v75 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)v80 + 24 * v75) = *(unsigned int *)(v80 + 12);
                --*(_DWORD *)(v80 + 16);
                *(_DWORD *)(v80 + 12) = v75;
LABEL_77:
                ExReleasePushLockExclusiveEx(*(_QWORD *)(**v81 + 8 * v82) + 16LL * (unsigned __int8)v75, 0LL);
                KeLeaveCriticalRegion();
                *(_BYTE *)v77 = 0;
LABEL_78:
                *(_QWORD *)v74 = 0LL;
                --*(_DWORD *)(v67 + 4);
                v112 = 0;
                v111 = 0LL;
                KeLeaveCriticalRegion();
LABEL_79:
                v17 = v40;
                goto LABEL_80;
              }
            }
            v82 = (unsigned __int64)(unsigned int)v75 >> 8;
            goto LABEL_77;
          }
          v102 = *(_QWORD *)(v40 + 136);
          v103 = 2LL;
        }
        TrackObjectReferenceDecrement(v103, v102);
        goto LABEL_57;
      }
    }
    else
    {
      *((_BYTE *)v29 + 15) |= 8u;
      if ( a6 )
        *a6 = v41;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v111);
LABEL_80:
  if ( v112 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v111);
  v83 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
  v84 = *(_QWORD *)(v83 + 1912);
  v86 = *(_QWORD *)(SGDGetSessionState(v85) + 24);
  if ( *(_DWORD *)(v86 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v86, (unsigned int)&LockRelease, v87, v84, (__int64)L"GreBaseGlobals.hsemHmgr");
  v88 = *(struct _ERESOURCE **)(v83 + 1912);
  if ( v88 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v88);
    PsLeavePriorityRegion(v90, v89);
  }
  return v17;
}
