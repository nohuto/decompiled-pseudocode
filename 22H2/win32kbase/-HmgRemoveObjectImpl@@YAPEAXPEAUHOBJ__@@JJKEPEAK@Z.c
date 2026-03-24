/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002D7C0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000DEF0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023350 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C002B990 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0032950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00360CC (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0081D30 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00C87BC (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CB468 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E8C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0030C60 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C003173C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0033140 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C00335E0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003370C (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C01262A8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014CC98 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CD50 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // esi
  int v10; // r15d
  __int64 v11; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // r9
  GdiHandleManager *v16; // r14
  unsigned int v17; // ebx
  bool v18; // cc
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int16 *v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  unsigned int v28; // ecx
  char v29; // al
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r15
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rax
  char v50; // cl
  int v51; // ebx
  unsigned int v52; // edi
  GdiHandleManager *v53; // rdi
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned int v57; // r9d
  __int64 v58; // rcx
  __int64 v59; // r8
  _DWORD *v60; // r14
  int v61; // eax
  unsigned int v62; // ebx
  __int64 v63; // r8
  GdiHandleEntryDirectory *v64; // rcx
  GdiHandleEntryDirectory *v65; // rsi
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // r10
  __int64 v70; // r11
  int v71; // ecx
  int v72; // r8d
  __int64 v74; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rsi
  __int64 v76; // rcx
  unsigned int v77; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v82; // rbx
  unsigned int v83; // eax
  __int64 v84; // r9
  unsigned __int64 v85; // rdx
  unsigned int v86; // r8d
  __int64 v87; // rcx
  __int64 v88; // r10
  __int64 v89; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  char EtwGdiHandleType; // al
  _QWORD *v94; // r9
  int v95; // ecx
  int v96; // r8d
  unsigned int v97; // r13d
  __int64 v98; // [rsp+40h] [rbp-78h]
  __int64 v99; // [rsp+48h] [rbp-70h] BYREF
  __int64 v100; // [rsp+50h] [rbp-68h]
  unsigned __int64 v101; // [rsp+58h] [rbp-60h]
  __int64 v102; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v103; // [rsp+68h] [rbp-50h] BYREF
  int v104; // [rsp+70h] [rbp-48h]
  int v105; // [rsp+74h] [rbp-44h]
  PVOID Object; // [rsp+C0h] [rbp+8h] BYREF
  int v107; // [rsp+D0h] [rbp+18h]
  unsigned int v108; // [rsp+D8h] [rbp+20h]

  v107 = a3;
  v6 = ghsemHmgr;
  v7 = (unsigned int)a1;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a4 & 2) != 0 )
  {
    v11 = 0LL;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v11 = 0LL;
  }
  v99 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v99);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v14, v13),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v15 = *(_DWORD **)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = gpHandleManager;
  v104 = 1;
  v17 = (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000;
  Object = v15;
  if ( v17 >= 0x10000 )
  {
    v18 = *(_DWORD *)gpHandleManager <= 0x10000u;
    v108 = (unsigned __int16)v7;
    if ( v18 )
    {
      v17 = (unsigned __int16)v7;
    }
    else
    {
      Entry = GdiHandleEntryDirectory::GetEntry(
                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                (unsigned __int16)v7,
                1);
      v15 = Object;
      if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v17) )
        v17 = v108;
    }
  }
  v19 = *((_QWORD *)v16 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v17 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
  {
    v103 = 0LL;
LABEL_164:
    v104 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_165;
  }
  v21 = ((v17 - v20) >> 16) + 1;
  if ( v17 < v20 )
    v21 = 0LL;
  v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
  v100 = v22;
  if ( (_DWORD)v21 )
    v17 += ((1 - (_DWORD)v21) << 16) - v20;
  v23 = 0LL;
  if ( v17 < *(_DWORD *)(v22 + 20) )
  {
    v102 = 16LL * (unsigned __int8)v17;
    v24 = *(_QWORD **)(v22 + 24);
    v101 = 8 * ((unsigned __int64)v17 >> 8);
    v98 = v102 + *(_QWORD *)(*v24 + v101);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v98, 0LL);
    v25 = (_QWORD *)v100;
    if ( v17 < *(_DWORD *)(v100 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v100 + 24) + v101) + v102 + 8) )
    {
      v26 = 24LL * v17;
      *(_DWORD *)(v26 + *(_QWORD *)v100 + 8) |= 1u;
      v23 = (unsigned __int16 *)(v26 + *v25);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v98, 0LL);
      KeLeaveCriticalRegion();
    }
    v15 = Object;
  }
  v103 = v23;
  if ( !v23 )
    goto LABEL_164;
  _m_prefetchw(v23 + 4);
  v27 = *((_DWORD *)v23 + 2);
  v105 = v27;
  if ( v10 )
  {
    v28 = v27 & 0xFFFFFFFE;
    if ( v28 != (v99 & 0xFFFFFFFC) && v28 && (!v15 || v28 != v15[2]) )
      goto LABEL_132;
  }
  v29 = *((_BYTE *)v23 + 15);
  if ( (v29 & 0x20) != 0 )
    goto LABEL_132;
  if ( (v29 & 0x40) == 0 )
    goto LABEL_29;
  v82 = gpHandleManager;
  v83 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
  v84 = *((_QWORD *)v82 + 2);
  v85 = v83;
  v86 = *(_DWORD *)(v84 + 2056);
  if ( v83 >= v86 + ((*(unsigned __int16 *)(v84 + 2) + 0xFFFF) << 16) )
    goto LABEL_129;
  v87 = ((v83 - v86) >> 16) + 1;
  if ( v83 < v86 )
    v87 = 0LL;
  v88 = *(_QWORD *)(v84 + 8 * v87 + 8);
  if ( (_DWORD)v87 )
    v85 = ((1 - (_DWORD)v87) << 16) - v86 + v83;
  if ( (unsigned int)v85 >= *(_DWORD *)(v88 + 20) )
LABEL_129:
    v89 = 0LL;
  else
    v89 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v88 + 24) + 8 * (v85 >> 8)) + 16LL * (unsigned __int8)v85 + 8);
  if ( !*(_WORD *)(v89 + 12) || *(struct _KTHREAD **)(v89 + 16) != KeGetCurrentThread() )
  {
LABEL_132:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v103);
    if ( !v104 )
    {
LABEL_165:
      v35 = 0LL;
LABEL_93:
      v11 = v35;
      goto LABEL_94;
    }
  }
  v23 = v103;
LABEL_29:
  v30 = *(_DWORD *)v23 & 0xFFFFFF;
  if ( v30 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v23,
                                  1)
           + 13) == HIWORD(v30) )
        v30 = (unsigned __int16)v30;
    }
    else
    {
      v30 = *v23;
    }
  }
  v31 = *((_QWORD *)gpHandleManager + 2);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( v30 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    goto LABEL_137;
  v33 = ((v30 - v32) >> 16) + 1;
  if ( v30 < v32 )
    v33 = 0LL;
  v34 = *(_QWORD *)(v31 + 8 * v33 + 8);
  if ( (_DWORD)v33 )
    v30 += ((1 - (_DWORD)v33) << 16) - v32;
  if ( v30 >= *(_DWORD *)(v34 + 20) )
LABEL_137:
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                    + 16LL * (unsigned __int8)v30
                    + 8);
  if ( (a4 & 2) != 0 )
  {
    v77 = *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    if ( v77 != -2147483630 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( v77 != (CurrentProcessId & 0xFFFFFFFC) && v77 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v103);
        goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)v23 + 14) == a5 && v23[6] == HIWORD(v7) )
  {
    v36 = *(_DWORD *)(v35 + 8);
    if ( v36 == v107 && *(_WORD *)(v35 + 12) == a2 )
    {
      if ( (a4 & 1) != 0 || (*((_BYTE *)v23 + 15) & 1) == 0 )
      {
        v37 = (unsigned __int16)*(_DWORD *)v35;
        v38 = v37 | (*(_DWORD *)v35 >> 8) & 0xFF0000;
        if ( v38 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v37,
                                        1)
                 + 13) == HIWORD(v38) )
              v38 = (unsigned __int16)v38;
          }
          else
          {
            v38 = (unsigned __int16)v37;
          }
        }
        v39 = *((_QWORD *)gpHandleManager + 2);
        v40 = *(_DWORD *)(v39 + 2056);
        if ( v38 >= v40 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
        {
          v44 = 0LL;
        }
        else
        {
          v41 = ((v38 - v40) >> 16) + 1;
          if ( v38 < v40 )
            v41 = 0LL;
          v42 = *(_QWORD *)(v39 + 8 * v41 + 8);
          if ( (_DWORD)v41 )
            v43 = v38 + ((1 - (_DWORD)v41) << 16) - v40;
          else
            v43 = v38;
          v44 = 0LL;
          if ( v43 < *(_DWORD *)(v42 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                         + 16LL * (unsigned __int8)v43
                         + 8) )
          {
            v44 = *(_QWORD *)v42 + 24LL * v43;
          }
        }
        if ( v38 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v38,
                                        1)
                 + 13) == HIWORD(v38) )
              v38 = (unsigned __int16)v38;
          }
          else
          {
            v38 = (unsigned __int16)v38;
          }
        }
        v45 = *(_DWORD *)(v39 + 2056);
        if ( v38 >= v45 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
          goto LABEL_151;
        v46 = ((v38 - v45) >> 16) + 1;
        if ( v38 < v45 )
          v46 = 0LL;
        v47 = *(_QWORD *)(v39 + 8 * v46 + 8);
        if ( (_DWORD)v46 )
          v38 += ((1 - (_DWORD)v46) << 16) - v45;
        if ( v38 >= *(_DWORD *)(v47 + 20) )
LABEL_151:
          v48 = 0LL;
        else
          v48 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                          + 16LL * (unsigned __int8)v38
                          + 8);
        v49 = 0LL;
        if ( v48 == v35 )
          v49 = v44;
        v50 = *(_BYTE *)(v49 + 14);
        if ( v50 == 5 )
        {
          v91 = *(_QWORD *)(v35 + 680);
          v92 = 0LL;
        }
        else
        {
          if ( v50 != 16 )
            goto LABEL_69;
          v91 = *(_QWORD *)(v35 + 136);
          v92 = 2LL;
        }
        TrackObjectReferenceDecrement(v92, v91);
LABEL_69:
        v51 = *((_DWORD *)v23 + 2);
        v52 = v51 & 0xFFFFFFFE;
        if ( (v51 & 0xFFFFFFFE) != 0 && v52 != -2147483630 )
        {
          Object = 0LL;
          W32ProcessFromId = GetW32ProcessFromId(v52, (struct _EPROCESS **)&Object);
          if ( W32ProcessFromId )
          {
            GreAcquireHmgrSemaphore(v74);
            --*((_DWORD *)W32ProcessFromId + 15);
            GreReleaseHmgrSemaphore(v76);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v23 + 14));
          McTemplateK0pqqq_EtwWriteTransfer(v95, (unsigned int)&GdiDestroyHandle, v96, *v94, EtwGdiHandleType);
        }
        *((_BYTE *)v23 + 14) = 0;
        *((_QWORD *)v23 + 2) = 0LL;
        *((_DWORD *)v23 + 2) = v51 & 1;
        v53 = gpHandleManager;
        v54 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
        v55 = *((_QWORD *)v53 + 2);
        v56 = v54;
        v57 = *(_DWORD *)(v55 + 2056);
        if ( v54 >= v57 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16) )
          goto LABEL_155;
        v58 = ((v54 - v57) >> 16) + 1;
        if ( v54 < v57 )
          v58 = 0LL;
        v59 = *(_QWORD *)(v55 + 8 * v58 + 8);
        if ( (_DWORD)v58 )
          v56 = ((1 - (_DWORD)v58) << 16) - v57 + v54;
        if ( (unsigned int)v56 >= *(_DWORD *)(v59 + 20) )
LABEL_155:
          v60 = 0LL;
        else
          v60 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * (v56 >> 8)) + 16LL * (unsigned __int8)v56 + 8);
        v61 = (unsigned __int16)*v60;
        v62 = v61 | (*v60 >> 8) & 0xFF0000;
        if ( v62 >= 0x10000 )
        {
          if ( *(_DWORD *)v53 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v53 + 2),
                                        (unsigned __int16)v61,
                                        1)
                 + 13) == HIWORD(v62) )
              v62 = (unsigned __int16)v62;
          }
          else
          {
            v62 = (unsigned __int16)v61;
          }
        }
        v63 = *((_QWORD *)v53 + 3);
        v64 = (GdiHandleEntryDirectory *)*((_QWORD *)v53 + 2);
        v65 = v64;
        if ( v63 )
        {
          v97 = *(_DWORD *)(4LL * (unsigned __int16)v62 + v63);
          Object = (PVOID)(4LL * (unsigned __int16)v62);
          if ( v97 )
          {
            if ( GdiHandleEntryDirectory::AcquireEntryLock(v64, v97, 1) )
              GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v53 + 2), v97, 1);
            *(_DWORD *)((char *)Object + *((_QWORD *)v53 + 3)) = 0;
            --*((_DWORD *)v53 + 1);
            v65 = (GdiHandleEntryDirectory *)*((_QWORD *)v53 + 2);
          }
        }
        v66 = *((_DWORD *)v65 + 514);
        if ( v62 < v66 + ((*((unsigned __int16 *)v65 + 1) + 0xFFFF) << 16) )
        {
          v67 = ((v62 - v66) >> 16) + 1;
          if ( v62 < v66 )
            v67 = 0LL;
          v68 = *((_QWORD *)v65 + v67 + 1);
          if ( (_DWORD)v67 )
            v62 += ((1 - (_DWORD)v67) << 16) - v66;
          v69 = *(_QWORD **)(v68 + 24);
          if ( v62 < *(_DWORD *)(v68 + 20) )
          {
            v70 = *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v62 >> 8));
            if ( *(_QWORD *)(v70 + 16LL * (unsigned __int8)v62 + 8) )
            {
              *(_QWORD *)(v70 + 16LL * (unsigned __int8)v62 + 8) = 0LL;
              *(_QWORD *)(*(_QWORD *)v68 + 24LL * v62) = *(unsigned int *)(v68 + 12);
              --*(_DWORD *)(v68 + 16);
              v69 = *(_QWORD **)(v68 + 24);
              *(_DWORD *)(v68 + 12) = v62;
            }
          }
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v62 >> 8)) + 16LL * (unsigned __int8)v62,
            0LL);
          KeLeaveCriticalRegion();
          *(_BYTE *)v65 = 0;
        }
        *(_QWORD *)v60 = 0LL;
        --*((_DWORD *)v53 + 1);
        v104 = 0;
        v103 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_93;
      }
    }
    else
    {
      *((_BYTE *)v23 + 15) |= 8u;
      if ( a6 )
        *a6 = v36;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v103);
LABEL_94:
  if ( v104 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v103);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v71, (unsigned int)&LockRelease, v72, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  return v11;
}
