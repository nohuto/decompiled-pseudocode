/*
 * XREFs of SfnOUTSTRING @ 0x1C00D2940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     MBToWCSEx @ 0x1C00D34F0 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00D3558 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     strncpycch @ 0x1C025E274 (strncpycch.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r13d
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rbx
  int v20; // r8d
  unsigned __int64 v21; // rdx
  ULONG_PTR v22; // r15
  __int64 v23; // rax
  _DWORD *v24; // r14
  __int64 v25; // rcx
  _DWORD *v26; // rax
  struct _KTHREAD *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  struct _KTHREAD *v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rax
  _QWORD *v38; // r9
  unsigned int v39; // r8d
  char *v40; // rcx
  struct _KTHREAD *v41; // r12
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _KTHREAD *v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v56; // rax
  __int64 v57; // rcx
  bool v58; // di
  int v59; // r12d
  __int64 v60; // rcx
  struct _KTHREAD *v61; // r15
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 *v69; // rax
  __int64 v70; // r12
  _BYTE *v71; // rax
  _BYTE *v72; // rcx
  struct _KTHREAD *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 *v77; // rax
  ULONG64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  int v82; // r14d
  SIZE_T v83; // rdi
  int v84; // r15d
  WCHAR *v85; // rbx
  SIZE_T v86; // rax
  ULONG64 v87; // rcx
  __int64 v88; // r14
  SIZE_T v89; // rax
  WCHAR *v90; // rdx
  WCHAR *v91; // r8
  WCHAR v92; // cx
  unsigned int v93; // esi
  __int64 v94; // r8
  unsigned int v95; // eax
  unsigned __int64 v96; // rax
  SIZE_T v97; // rax
  unsigned int v98; // esi
  unsigned int v99; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v102; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v104; // zf
  __int64 v105; // rax
  int v106; // ebx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // ebx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // ebx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // ebx
  __int64 v119; // rcx
  __int64 v120; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v123; // rax
  int v124; // edi
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned int v127; // eax
  tagDomLock *v128; // rax
  __int64 v129; // rax
  int v130; // ebx
  __int64 v131; // rcx
  __int64 v132; // rax
  char v133; // [rsp+31h] [rbp-3E7h]
  ULONG BytesInUnicodeString; // [rsp+34h] [rbp-3E4h] BYREF
  int v135; // [rsp+38h] [rbp-3E0h]
  unsigned __int64 v136; // [rsp+40h] [rbp-3D8h]
  __int64 v137; // [rsp+48h] [rbp-3D0h]
  __int64 v138; // [rsp+50h] [rbp-3C8h]
  unsigned int v139; // [rsp+58h] [rbp-3C0h]
  int v140; // [rsp+5Ch] [rbp-3BCh] BYREF
  int v141; // [rsp+60h] [rbp-3B8h]
  __int64 v142; // [rsp+68h] [rbp-3B0h]
  __int64 v143; // [rsp+70h] [rbp-3A8h]
  int v144; // [rsp+78h] [rbp-3A0h]
  int v145; // [rsp+80h] [rbp-398h]
  unsigned __int64 v146; // [rsp+98h] [rbp-380h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-378h] BYREF
  PVOID *v148; // [rsp+A8h] [rbp-370h]
  __int128 v149; // [rsp+B0h] [rbp-368h] BYREF
  void (*v150)(void *); // [rsp+C0h] [rbp-358h]
  SIZE_T Length[2]; // [rsp+C8h] [rbp-350h]
  volatile void *Address; // [rsp+D8h] [rbp-340h]
  WCHAR *v153; // [rsp+E8h] [rbp-330h]
  WCHAR *v154; // [rsp+F0h] [rbp-328h]
  ULONG_PTR v155; // [rsp+F8h] [rbp-320h] BYREF
  __int128 v156; // [rsp+100h] [rbp-318h]
  __int64 v157; // [rsp+110h] [rbp-308h]
  __int128 v158; // [rsp+118h] [rbp-300h] BYREF
  __int64 v159; // [rsp+128h] [rbp-2F0h]
  __int128 v160; // [rsp+158h] [rbp-2C0h]
  volatile void *v161; // [rsp+168h] [rbp-2B0h]
  _BYTE v162[96]; // [rsp+170h] [rbp-2A8h] BYREF
  _BYTE v163[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v138 = a4;
  v136 = a3;
  v144 = a2;
  v10 = a7 & 1;
  v135 = v10;
  v11 = 0LL;
  v141 = 0;
  memset(v162, 0, sizeof(v162));
  v148 = (PVOID *)v162;
  v146 = 0LL;
  v140 = 0;
  v142 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v143 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v102),
        v104 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v13 = 0LL,
        v104) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v13 = *ThreadWin32Thread;
      v143 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v19 = 0LL;
  v137 = v19;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (v20 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v21 < (v20 & 0x7FFFFFFFu) )
    goto LABEL_168;
  v139 = (v20 & 0x7FFFFFFF) + 2;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) == 0 && v20 < 0 && (a7 & 1) == 0 )
  {
    v21 *= 2LL;
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_168;
    v139 = v21;
  }
  v22 = ((unsigned int)v21 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v22;
  if ( v22 <= 0x800 )
  {
    if ( v22 + 104 > 0x200 )
    {
      v24 = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v22 + 104), 1667461973LL);
      if ( !v24 )
        return 0LL;
    }
    else
    {
      v24 = v163;
      memset(v163, 0, sizeof(v163));
    }
    v26 = v24 + 26;
    *((_QWORD *)v24 + 4) = 0LL;
    goto LABEL_13;
  }
  v23 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
  v24 = (_DWORD *)v23;
  if ( !v23 )
    return 0LL;
  *(_QWORD *)(v23 + 32) = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v23 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
  {
    Win32FreePool(v24);
    return 0LL;
  }
  v26 = (_DWORD *)*((_QWORD *)v24 + 4);
LABEL_13:
  *v24 = 104;
  *((_QWORD *)v24 + 2) = v26;
  *(_QWORD *)(v24 + 1) = (unsigned int)RegionSize;
  v24[6] = 96;
  v148 = (PVOID *)v24;
  v27 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v25)
    || (v105 = PsGetCurrentProcess(v29, v28, v30),
        v106 = PsGetProcessSessionIdEx(v105),
        v108 = PsGetCurrentThreadProcess(v107),
        v104 = v106 == (unsigned int)PsGetProcessSessionIdEx(v108),
        v19 = v137,
        v104) )
  {
    PsGetThreadWin32Thread(v27);
  }
  v149 = 0LL;
  v150 = 0LL;
  if ( v24 != (_DWORD *)v162 && v24 != (_DWORD *)v163 )
  {
    v32 = KeGetCurrentThread();
    v33 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v31)
      || (v109 = PsGetCurrentProcess(v35, v34, v36),
          v110 = PsGetProcessSessionIdEx(v109),
          v112 = PsGetCurrentThreadProcess(v111),
          v104 = v110 == (unsigned int)PsGetProcessSessionIdEx(v112),
          v19 = v137,
          v104) )
    {
      v37 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v37 )
        v33 = *v37;
    }
    *(_QWORD *)&v149 = *(_QWORD *)(v33 + 16);
    *(_QWORD *)(v33 + 16) = &v149;
    *((_QWORD *)&v149 + 1) = v24;
    v150 = Win32FreePool;
    v10 = v135;
  }
  *((_QWORD *)v24 + 5) = v19;
  v24[12] = v144;
  if ( v10 )
  {
    if ( *(int *)(v138 + 4) >= 0 )
    {
      *((_QWORD *)v24 + 7) = 2 * v136;
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000000u;
      v141 = 1;
      goto LABEL_24;
    }
  }
  else if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) != 0 )
  {
    *((_QWORD *)v24 + 7) = v136 >> 1;
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
    goto LABEL_24;
  }
  *((_QWORD *)v24 + 7) = v136;
LABEL_24:
  *((_QWORD *)v24 + 8) = a5;
  *((_QWORD *)v24 + 9) = a6;
  v38 = v24 + 20;
  v39 = v139;
  if ( v139 > v24[1] )
    goto LABEL_167;
  v40 = (char *)*((_QWORD *)v24 + 2);
  *((_QWORD *)v24 + 2) = &v40[v22];
  if ( *((_QWORD *)v24 + 4) )
  {
    *v38 = v40;
  }
  else
  {
    *v38 = v40 - (char *)v24;
    v40 = (char *)v24 + (unsigned int)v24[6];
    *(_DWORD *)&v40[4 * v24[2]++] = 80;
  }
  v24[22] = v39;
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (v113 = PsGetCurrentProcess(v44, v43, v45),
        v114 = PsGetProcessSessionIdEx(v113),
        v116 = PsGetCurrentThreadProcess(v115),
        v104 = v114 == (unsigned int)PsGetProcessSessionIdEx(v116),
        v19 = v137,
        v104) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  *(_QWORD *)&v158 = *(_QWORD *)(v42 + 416);
  *(_QWORD *)(v42 + 416) = &v158;
  *((_QWORD *)&v158 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v47 = v143;
  v48 = *(_QWORD *)(v143 + 480);
  v156 = *(_OWORD *)(v48 + 64);
  v157 = *(_QWORD *)(v48 + 80);
  *(_QWORD *)(v48 + 72) = v19;
  if ( a1 )
    v49 = *a1;
  else
    v49 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 64LL) = v49;
  if ( a1 )
    v50 = *(_QWORD *)(a1[5] + 224);
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 80LL) = v50;
  if ( gdwInAtomicOperation )
  {
    v50 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v117 = PsGetCurrentProcess(v54, v53, v55),
        v118 = PsGetProcessSessionIdEx(v117),
        v120 = PsGetCurrentThreadProcess(v119),
        v118 == (unsigned int)PsGetProcessSessionIdEx(v120)) )
  {
    v56 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v56 )
      v52 = *v56;
  }
  v133 = *(_BYTE *)(v52 + 1480);
  *(_BYTE *)(v52 + 1480) = 0;
  if ( (v133 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v52 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v58 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v57);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v24 + 2) = 0LL;
  v59 = KeUserModeCallback(35LL, v24, (unsigned int)*v24, &v146, &v140);
  EtwTraceEndCallback(35LL);
  if ( v58 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v61 = KeGetCurrentThread();
  v62 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v60)
    || (v123 = PsGetCurrentProcess(v64, v63, v65),
        v124 = PsGetProcessSessionIdEx(v123),
        v126 = PsGetCurrentThreadProcess(v125),
        v124 == (unsigned int)PsGetProcessSessionIdEx(v126)) )
  {
    v66 = (__int64 *)PsGetThreadWin32Thread(v61);
    if ( v66 )
      v62 = *v66;
  }
  if ( (v133 & 1) != 0 )
  {
    v127 = DLT_THREADINFO::getDLT();
    v128 = (tagDomLock *)GetDomainLockRef(v127);
    tagDomLock::LockShared(v128);
    tagObjLock::LockExclusive((tagObjLock *)(v62 + 392));
  }
  *(_BYTE *)(v62 + 1480) = v133;
  ThreadUnlock1(v67);
  v68 = *(_QWORD *)(v47 + 480);
  *(_OWORD *)(v68 + 64) = v156;
  *(_QWORD *)(v68 + 80) = v157;
  if ( v59 < 0 || v140 != 24 )
  {
LABEL_167:
    v11 = 0LL;
    goto LABEL_168;
  }
  v69 = (__int64 *)v146;
  if ( v146 + 8 < v146 || v146 + 8 > MmUserProbeAddress )
    v69 = (__int64 *)MmUserProbeAddress;
  v70 = *v69;
  v142 = *v69;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
  {
LABEL_142:
    v11 = 0LL;
    goto LABEL_66;
  }
  if ( !v70 )
  {
    if ( v136 )
    {
      v71 = *(_BYTE **)(v138 + 8);
      v11 = 0LL;
      if ( *(int *)(v138 + 4) < 0 )
        *v71 = 0;
      else
        *(_WORD *)v71 = 0;
      goto LABEL_66;
    }
    goto LABEL_142;
  }
  v79 = v146;
  if ( v146 + 24 < v146 || v146 + 24 > MmUserProbeAddress )
    v79 = MmUserProbeAddress;
  *(_OWORD *)Length = *(_OWORD *)v79;
  Address = *(volatile void **)(v79 + 16);
  v160 = *(_OWORD *)Length;
  v161 = Address;
  v80 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v80 )
  {
    v81 = v138;
LABEL_81:
    v82 = *(_DWORD *)(v81 + 4);
    BytesInUnicodeString = 0;
    v83 = LODWORD(Length[1]);
    v84 = v135;
    if ( LODWORD(Length[1]) )
    {
      v85 = (WCHAR *)Address;
      ProbeForRead(Address, LODWORD(Length[1]), (v135 ^ 1) + 1);
    }
    else
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v85 = (WCHAR *)Address;
    }
    if ( v82 < 0 )
    {
      if ( v84 )
      {
        LODWORD(v86) = v83;
        if ( (unsigned int)v70 < (unsigned int)v83 )
          LODWORD(v86) = v70;
        BytesInUnicodeString = v86;
      }
      else
      {
        v96 = 2LL * (unsigned int)v70;
        if ( v96 >= v83 )
          LODWORD(v96) = v83;
        RtlUnicodeToMultiByteSize(&BytesInUnicodeString, v85, v96);
        LODWORD(v86) = BytesInUnicodeString;
      }
    }
    else if ( v84 )
    {
      if ( (unsigned int)v70 >= (unsigned int)v83 )
        LODWORD(v70) = v83;
      RtlMultiByteToUnicodeSize(&BytesInUnicodeString, (const CHAR *)v85, v70);
      LODWORD(v86) = BytesInUnicodeString >> 1;
      BytesInUnicodeString >>= 1;
    }
    else
    {
      if ( (unsigned int)v70 >= (unsigned int)v83 >> 1 )
        v86 = v83 >> 1;
      else
        LODWORD(v86) = v70;
      BytesInUnicodeString = v86;
    }
    v70 = (unsigned int)v86;
    v142 = (unsigned int)v86;
    if ( (_DWORD)v83 )
    {
      ProbeForRead(v85, v83, (v84 ^ 1) + 1);
    }
    else
    {
      v87 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v88 = v138;
    if ( *(int *)(v138 + 4) >= 0 )
    {
      if ( v84 )
      {
        v94 = LODWORD(Length[0]);
        if ( LODWORD(Length[0]) >= (unsigned int)v83 )
          v94 = (unsigned int)v83;
        v93 = v136;
        v95 = MBToWCSEx(v87, v85, v94, v138 + 8, v136);
        if ( v95 < v93 )
        {
          *(_WORD *)(*(_QWORD *)(v88 + 8) + 2LL * v95) = 0;
          *(_DWORD *)v88 = 2 * v95;
          goto LABEL_133;
        }
      }
      else
      {
        if ( (unsigned int)v136 >= (unsigned int)v83 >> 1 )
          v89 = v83 >> 1;
        else
          LODWORD(v89) = v136;
        v145 = v89;
        v154 = v85;
        v90 = *(WCHAR **)(v138 + 8);
        v153 = v90;
        v91 = v90;
        while ( (_DWORD)v89 )
        {
          v92 = *v85;
          *v90++ = *v85;
          v153 = v90;
          v154 = ++v85;
          if ( !v92 )
            break;
          LODWORD(v89) = v89 - 1;
          v145 = v89;
        }
        v93 = v90 - v91;
      }
      *(_DWORD *)v88 = 2 * v93;
LABEL_133:
      v11 = 0LL;
      goto LABEL_66;
    }
    if ( v84 )
    {
      if ( (unsigned int)v136 < (unsigned int)v83 )
        LODWORD(v83) = v136;
      v99 = strncpycch(*(_QWORD *)(v138 + 8), v85, (unsigned int)v83);
    }
    else
    {
      if ( LODWORD(Length[0]) >= (unsigned int)v83 >> 1 )
        v97 = v83 >> 1;
      else
        LODWORD(v97) = Length[0];
      v98 = v136;
      v99 = WCSToMBEx(0LL, v85, (unsigned int)v97, v138 + 8, v136);
      if ( v99 >= v98 )
        goto LABEL_118;
      *(_BYTE *)(v99 + *(_QWORD *)(v88 + 8)) = 0;
    }
    v98 = v99;
LABEL_118:
    *(_DWORD *)v88 = v98;
    goto LABEL_133;
  }
  v81 = v138;
  if ( (*(_DWORD *)(v80 + 84) & 1) == 0 || *(_QWORD *)(v80 + 96) != v138 )
    goto LABEL_81;
  v11 = 0LL;
LABEL_168:
  v70 = 0LL;
  v142 = 0LL;
LABEL_66:
  if ( v148 != (PVOID *)v162 )
  {
    v72 = v163;
    if ( v148 != (PVOID *)v163 )
    {
      if ( v148[4] )
      {
        v155 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v148 + 4, &v155, 0x8000u);
      }
      v73 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v72)
        || (v129 = PsGetCurrentProcess(v75, v74, v76),
            v130 = PsGetProcessSessionIdEx(v129),
            v132 = PsGetCurrentThreadProcess(v131),
            v130 == (unsigned int)PsGetProcessSessionIdEx(v132)) )
      {
        v77 = (__int64 *)PsGetThreadWin32Thread(v73);
        if ( v77 )
          v11 = *v77;
      }
      *(_QWORD *)(v11 + 16) = v149;
      ((void (__fastcall *)(_QWORD))v150)(*((_QWORD *)&v149 + 1));
      v70 = v142;
    }
  }
  if ( v141 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
  return v70;
}
