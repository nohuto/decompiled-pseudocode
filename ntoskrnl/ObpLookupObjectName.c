NTSTATUS __fastcall ObpLookupObjectName(
        ULONG_PTR a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11,
        int *a12,
        __int64 *a13)
{
  PVOID v13; // r15
  __int64 v14; // r9
  unsigned int v16; // r12d
  unsigned __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r8
  POBJECT_TYPE *v21; // r14
  int v22; // ecx
  NTSTATUS result; // eax
  __int16 v24; // dx
  __int64 v25; // rbx
  PVOID v26; // rax
  KPROCESSOR_MODE v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  PVOID ProcessServerSilo; // rbx
  bool v33; // r12
  struct _KTHREAD *v34; // r15
  _QWORD *p_Lock; // rbx
  signed __int64 *ServerSiloGlobals; // rax
  int TokenDeviceMap; // eax
  volatile signed __int64 *v38; // rsi
  signed __int64 v39; // r13
  signed __int64 v40; // rax
  _WORD *v41; // rcx
  unsigned __int16 v42; // r9
  __int16 v43; // ax
  _WORD *v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  signed __int64 *v48; // rbx
  signed __int64 v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rdi
  unsigned int v52; // edx
  char *v53; // rsi
  struct _KTHREAD *v54; // rax
  signed __int64 *v55; // rsi
  struct _KTHREAD *v56; // rax
  __int64 v57; // r14
  char v58; // cl
  NTSTATUS v59; // eax
  signed __int64 v60; // rax
  signed __int64 v61; // rtt
  int v62; // edx
  void *v63; // r12
  __int16 *v64; // rax
  __int16 v65; // cx
  volatile signed __int64 *v66; // rax
  void *v67; // rax
  int PermanentSiloContext; // eax
  __int64 v69; // r12
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 (__fastcall *v72)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rbx
  bool v73; // si
  struct _KTHREAD *v74; // rax
  ULONG_PTR v75; // rcx
  signed __int64 *v76; // rbx
  signed int v77; // r13d
  unsigned int v78; // ebx
  unsigned __int16 *v79; // rdi
  unsigned __int64 v80; // r11
  __int64 v81; // r9
  __int64 v82; // r10
  unsigned int v83; // edx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v85; // dx
  __int128 v86; // rt0
  unsigned int v87; // r10d
  unsigned int v88; // edx
  int v89; // r10d
  struct _LIST_ENTRY *v90; // rax
  unsigned __int16 v91; // dx
  unsigned __int16 v92; // ax
  int v93; // r10d
  char v94; // r15
  int v95; // r15d
  __int64 v96; // rcx
  __int64 **v97; // r14
  __int64 *v98; // rsi
  struct _LIST_ENTRY *v99; // rax
  __int64 v100; // rdx
  char *v101; // r11
  unsigned int v102; // ecx
  struct _LIST_ENTRY *Flink; // rbx
  char *v104; // r10
  _QWORD *v105; // r11
  char *v106; // rdi
  signed __int64 v107; // r11
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // r9
  char v110; // si
  __int64 (__fastcall *v111)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rax
  __int64 v112; // rbx
  __int64 ShadowDirectory; // rax
  NTSTATUS v114; // eax
  __int16 v115; // bx
  PVOID v116; // rax
  __int16 v117; // cx
  int v118; // eax
  PVOID v119; // r14
  KPROCESSOR_MODE v120; // r9
  struct _OBJECT_TYPE *v121; // r8
  void *v122; // rcx
  NTSTATUS v123; // eax
  signed __int64 v124; // rax
  signed __int64 v125; // rtt
  signed __int64 v126; // rax
  signed __int64 v127; // rcx
  bool v128; // zf
  signed __int64 v129; // rtt
  char *v130; // rax
  struct _KTHREAD *v131; // rcx
  volatile signed __int64 *v132; // rbx
  signed __int64 v133; // rcx
  bool v134; // cc
  signed __int64 v135; // rcx
  ACCESS_MASK v136; // edx
  struct _ACCESS_STATE *v137; // r8
  _DWORD *v138; // r14
  int v139; // ebx
  unsigned int v140; // ebx
  void *Pool2; // rsi
  char *v142; // rbx
  void *v143; // rcx
  __int16 v144; // ax
  struct _KTHREAD *v145; // rax
  NTSTATUS v146; // ecx
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v148; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v149; // [rsp+68h] [rbp-98h]
  __int64 v150[2]; // [rsp+70h] [rbp-90h] BYREF
  int v151; // [rsp+80h] [rbp-80h]
  unsigned int v152; // [rsp+84h] [rbp-7Ch] BYREF
  volatile signed __int64 *v153; // [rsp+88h] [rbp-78h]
  volatile signed __int64 *v154; // [rsp+90h] [rbp-70h] BYREF
  int v155; // [rsp+98h] [rbp-68h]
  int v156; // [rsp+9Ch] [rbp-64h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v158[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v159; // [rsp+B4h] [rbp-4Ch]
  __int64 v160; // [rsp+B8h] [rbp-48h]
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v162; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v163; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v164; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v165; // [rsp+E0h] [rbp-20h] BYREF
  PVOID ThreadServerSilo; // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int64 *v168; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v169; // [rsp+108h] [rbp+8h] BYREF
  __int128 v170; // [rsp+118h] [rbp+18h]
  __int128 v171; // [rsp+128h] [rbp+28h]
  __int64 v172; // [rsp+138h] [rbp+38h]
  char v173; // [rsp+190h] [rbp+90h]
  int v175; // [rsp+1A0h] [rbp+A0h]

  v175 = a3;
  v13 = 0LL;
  v14 = a5;
  Object = 0LL;
  v172 = 0LL;
  *(_OWORD *)a11 = 0LL;
  a11[2] = 0LL;
  v16 = a3;
  v158[1] = 0;
  v18 = 0LL;
  v167 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 64;
  v169 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  *(_OWORD *)v150 = 0LL;
  if ( a12 )
    *a12 = 0;
  v128 = ObpCaseInsensitive == 0;
  v19 = 0LL;
  v20 = a9;
  v21 = (POBJECT_TYPE *)a4;
  *a13 = 0LL;
  v158[0] = 16;
  v148 = 0;
  v156 = 0;
  v173 = 1;
  v149 = 0LL;
  v159 = -1;
  v160 = a9;
  if ( !v128
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 |= 0x40u;
    v175 = v16;
  }
  v22 = 1;
  if ( (v16 & 0x400) == 0 )
    v22 = a5;
  v151 = v22;
  v152 = v16 & 0x40;
  if ( !a8 )
    v152 = v16 & 0x40 | 1;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x746C6644u, (__int64)&Object, 0LL, (__int64)&v167);
    v148 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v167) )
    {
      v159 &= HIDWORD(v167);
      if ( (v159 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
    }
    v19 = (__int64)Object;
    if ( *(_WORD *)a2 )
    {
      if ( **(_WORD **)(a2 + 8) == 92
        && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(Object);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      v148 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
      if ( v148 >= 0 )
        v13 = Object;
      ObfDereferenceObject(Object);
      result = v148;
      *a13 = (__int64)v13;
      return result;
    }
    *(_OWORD *)v150 = *(_OWORD *)a2;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v170 + 1) = a2;
      *(_QWORD *)&v170 = a4 + 16;
      *(_QWORD *)&v171 = a1;
      SeSetLearningModeObjectInformation((__int64)&v169);
    }
    goto LABEL_142;
  }
  v24 = *(_WORD *)a2;
  if ( !v24 )
    return -1073741765;
  v25 = a2 + 8;
  if ( **(_WORD **)(a2 + 8) != 92 )
    return -1073741765;
  if ( v24 == 2 )
  {
    v26 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
    v28 = (__int64)v26;
    if ( v26 )
    {
      result = ObReferenceObjectByPointer(v26, 0, (POBJECT_TYPE)a4, v27);
      if ( result >= 0 )
        *a13 = v28;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, (POBJECT_TYPE)a4, v27);
      if ( result >= 0 )
        *a13 = (__int64)a8;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  v29 = a2;
  if ( SepLearningModeTokenCount )
  {
    *((_QWORD *)&v170 + 1) = a2;
    *(_QWORD *)&v170 = a4 + 16;
    *(_QWORD *)&v171 = 0LL;
    SeSetLearningModeObjectInformation((__int64)&v169);
  }
  while ( 1 )
  {
LABEL_39:
    if ( *(_WORD *)v29 < 8u )
    {
      if ( *(_WORD *)v29 == 6 && **(_DWORD **)v25 == 4128860 && *(_WORD *)(*(_QWORD *)v25 + 4LL) == 63 )
      {
        v66 = (volatile signed __int64 *)ObpReferenceCurrentDeviceMap(v16, &v154, v20, v14);
        v153 = v66;
        v18 = (unsigned __int64)v66;
        if ( v66 )
        {
          v67 = (void *)*v66;
          if ( v67 )
          {
            v120 = a5;
            v19 = (__int64)v67;
            v121 = (struct _OBJECT_TYPE *)v21;
            v122 = v67;
            goto LABEL_291;
          }
        }
      }
      goto LABEL_137;
    }
    if ( **(_QWORD **)v25 != 0x5C003F003F005CLL )
      goto LABEL_137;
    if ( v21 == IoFileObjectType && ObpUseSystemDeviceMap(v29) )
      v175 = v16 | 0x800;
    CurrentThread = KeGetCurrentThread();
    v153 = 0LL;
    v154 = 0LL;
    Process = (__int64)CurrentThread->Process;
    ProcessServerSilo = (PVOID)PsGetProcessServerSilo(Process);
    ThreadServerSilo = (PVOID)PsGetThreadServerSilo((__int64)CurrentThread);
    v33 = ProcessServerSilo != ThreadServerSilo;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || (v175 & 0x800) != 0 )
      goto LABEL_61;
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_62;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
        if ( !p_Lock )
          p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
      }
      else
      {
        p_Lock = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v34);
      if ( p_Lock )
      {
        if ( p_Lock[3] == 999LL )
        {
          v33 = 1;
          ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
          ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals((__int64)ThreadServerSilo);
          goto LABEL_64;
        }
        v168 = 0LL;
        TokenDeviceMap = SeGetTokenDeviceMap(p_Lock, &v168);
        v38 = v153;
        if ( TokenDeviceMap >= 0 )
          v38 = v168;
        v153 = v38;
        ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
        if ( v38 )
        {
          v18 = (unsigned __int64)v153;
          goto LABEL_74;
        }
LABEL_61:
        if ( v33 )
        {
LABEL_62:
          ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals((__int64)ThreadServerSilo);
          goto LABEL_64;
        }
      }
    }
    ServerSiloGlobals = (signed __int64 *)(Process + 1416);
LABEL_64:
    v154 = ServerSiloGlobals;
    _m_prefetchw(ServerSiloGlobals);
    v39 = *ServerSiloGlobals;
    if ( (*ServerSiloGlobals & 0xF) == 0 )
      goto LABEL_68;
    do
    {
      v40 = _InterlockedCompareExchange64(v154, v39 - 1, v39);
      if ( v39 == v40 )
        break;
      v39 = v40;
    }
    while ( (v40 & 0xF) != 0 );
    if ( (v39 & 0xF) != 0 )
    {
      v18 = v39 & 0xFFFFFFFFFFFFFFF0uLL;
      v153 = (volatile signed __int64 *)v18;
    }
    else
    {
LABEL_68:
      v18 = ObpSlowReferenceDeviceMap(v154);
      v153 = (volatile signed __int64 *)v18;
    }
    if ( v18 )
      goto LABEL_75;
    if ( !v33 )
    {
      v154 = 0LL;
      v18 = ObpSetCurrentProcessDeviceMap();
      v153 = (volatile signed __int64 *)v18;
    }
LABEL_74:
    if ( !v18 )
      goto LABEL_131;
LABEL_75:
    if ( !*(_QWORD *)v18 )
    {
LABEL_131:
      v29 = a2;
LABEL_137:
      if ( !v19 )
      {
        v164 = 0LL;
        PermanentSiloContext = PsGetPermanentSiloContext(
                                 a9,
                                 PsObjectDirectorySiloContextSlot,
                                 (unsigned __int64 *)&v164);
        v19 = v164;
        if ( PermanentSiloContext < 0 )
          v19 = (__int64)ObpRootDirectoryObject;
        v164 = v19;
      }
      *(_OWORD *)v150 = *(_OWORD *)v29;
LABEL_142:
      v57 = a10;
LABEL_143:
      v42 = v150[0];
      v44 = (_WORD *)v150[1];
LABEL_144:
      v69 = (__int64)a11;
      while ( 1 )
      {
        v70 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8);
        v71 = ObTypeIndexTable[v70];
        v72 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v71 + 144);
        if ( !v72 )
          break;
LABEL_244:
        v162 = 0LL;
        if ( v72 == ObpParseSymbolicLinkEx )
        {
          v29 = a2;
          v115 = v175;
          v62 = ObpParseSymbolicLinkEx(
                  (unsigned __int16 *)v19,
                  (POBJECT_TYPE)a4,
                  (struct _SECURITY_SUBJECT_CONTEXT *)v57,
                  v151,
                  v175,
                  a2,
                  (unsigned __int16 *)v150,
                  a6,
                  a7,
                  (__int64)v158,
                  (unsigned __int16 **)&v162);
          v148 = v62;
        }
        else
        {
          if ( a8 )
            goto LABEL_343;
          ObfReferenceObject((PVOID)v19);
          if ( *(_QWORD *)v69 )
          {
            ExReleasePushLockEx((__int64 *)(*(_QWORD *)v69 + 296LL), 0LL);
            if ( *(_BYTE *)(v69 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
              *(_BYTE *)(v69 + 22) = 0;
            }
            *(_QWORD *)v69 = 0LL;
            *(_BYTE *)(v69 + 21) = 0;
            KeLeaveCriticalRegion();
          }
          v128 = (*(_BYTE *)(v71 + 67) & 1) == 0;
          v29 = a2;
          if ( v128 )
            v114 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64, __int64 *, __int64, __int64, __int64 *))v72)(
                     v19,
                     a4,
                     v57,
                     (unsigned __int8)v151,
                     v175,
                     a2,
                     v150,
                     a6,
                     a7,
                     &v162);
          else
            v114 = v72(
                     (unsigned __int16 *)v19,
                     (POBJECT_TYPE)a4,
                     (struct _SECURITY_SUBJECT_CONTEXT *)v57,
                     v151,
                     v175,
                     a2,
                     (unsigned __int16 *)v150,
                     a6,
                     a7,
                     (__int64)v158,
                     (unsigned __int16 **)&v162);
          v148 = v114;
          ObfDereferenceObject((PVOID)v19);
          v62 = v148;
          v115 = v175;
        }
        if ( v62 < 0 )
          goto LABEL_293;
        v116 = v149;
        v19 = v162;
        if ( v149 )
        {
          ObDereferenceObjectDeferDelete(v149);
          v62 = v148;
          v116 = 0LL;
          v149 = 0LL;
        }
        if ( v62 != 260 )
        {
          if ( v62 != 872 )
            v116 = (PVOID)v19;
          v149 = v116;
        }
        if ( (v159 & *(_DWORD *)(v57 + 24)) != *(_DWORD *)(v57 + 24) )
          goto LABEL_333;
        if ( v62 != 260 && v62 != 872 && v62 != 280 )
          goto LABEL_285;
        if ( (v115 & 0x1000) != 0 && v62 != 872 )
          goto LABEL_288;
        if ( !--v155 )
          goto LABEL_321;
        if ( !*(_WORD *)v29 )
          goto LABEL_289;
        if ( v18 )
        {
          ObpDereferenceCurrentDeviceMap(v18, v154);
          v62 = v148;
          v18 = 0LL;
          v153 = 0LL;
        }
        if ( *(_QWORD *)v69 )
        {
          ExReleasePushLockEx((__int64 *)(*(_QWORD *)v69 + 296LL), 0LL);
          if ( *(_BYTE *)(v69 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
            *(_BYTE *)(v69 + 22) = 0;
          }
          *(_QWORD *)v69 = 0LL;
          *(_BYTE *)(v69 + 21) = 0;
          KeLeaveCriticalRegion();
          v62 = v148;
        }
        v25 = v29 + 8;
        v117 = **(_WORD **)(v29 + 8);
        if ( v62 != 280 )
        {
          if ( v117 != 92 )
            goto LABEL_289;
          if ( v62 == 872 )
          {
            v19 = (__int64)ObpRootDirectoryObject;
            v16 = v175;
            v21 = (POBJECT_TYPE *)a4;
          }
          else
          {
            v165 = 0LL;
            v118 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v165);
            v19 = v165;
            v25 = v29 + 8;
            v16 = v175;
            v21 = (POBJECT_TYPE *)a4;
            if ( v118 < 0 )
              v19 = (__int64)ObpRootDirectoryObject;
            v165 = v19;
          }
          goto LABEL_39;
        }
        if ( v117 == 92 )
          goto LABEL_289;
        *(_OWORD *)v150 = *(_OWORD *)v29;
        v44 = (_WORD *)v150[1];
        v42 = v150[0];
      }
LABEL_146:
      if ( (POBJECT_TYPE)v71 != ObpDirectoryObjectType )
      {
LABEL_343:
        v119 = v149;
        v148 = -1073741788;
        goto LABEL_295;
      }
      ThreadServerSilo = (PVOID)v19;
      if ( v42 && *v44 == 92 )
      {
        ++v44;
        v42 -= 2;
        WORD1(v150[0]) -= 2;
        v150[1] = (__int64)v44;
        LOWORD(v150[0]) = v42;
      }
      *(_OWORD *)Src = *(_OWORD *)v150;
      if ( v42 )
      {
        do
        {
          if ( *v44 == 92 )
            break;
          ++v44;
          v128 = v42 == 2;
          v42 -= 2;
          v150[1] = (__int64)v44;
          LOWORD(v150[0]) = v42;
        }
        while ( !v128 );
      }
      WORD1(v150[0]) -= LOWORD(Src[0]) - v42;
      LOWORD(Src[0]) -= v42;
      if ( !LOWORD(Src[0]) )
        goto LABEL_289;
      if ( (_BYTE)v151 && (*(_DWORD *)(v57 + 12) & 1) == 0 )
      {
        v173 = ObpCheckTraverseAccess(v19, v70, v57);
        if ( !v173 )
        {
          v62 = v156;
          if ( v156 >= 0 )
            v62 = -1073741772;
          v156 = v62;
          if ( LOWORD(v150[0]) || !a8 )
            goto LABEL_342;
          v73 = 1;
LABEL_167:
          if ( *(_QWORD *)v69 )
          {
            v75 = v19 + 296;
            if ( v73 )
              ExAcquirePushLockExclusiveEx(v75, 0LL);
            else
              ExAcquirePushLockSharedEx(v75, 0LL);
            v76 = *(signed __int64 **)v69;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v69 + 296LL), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v76 + 37);
            KeAbPostRelease((ULONG_PTR)(v76 + 37));
            if ( *(_BYTE *)(v69 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
              *(_BYTE *)(v69 + 22) = 0;
            }
            *(_QWORD *)v69 = v19;
            *(_BYTE *)(v69 + 21) = v73;
          }
          else if ( v73 )
          {
            ObpLockDirectoryExclusive(v69, v19);
          }
          else
          {
            *(_QWORD *)v69 = v19;
            *(_BYTE *)(v69 + 21) = 0;
            v74 = KeGetCurrentThread();
            --v74->KernelApcDisable;
            ExAcquirePushLockSharedEx(v19 + 296, 0LL);
          }
          v77 = LOWORD(Src[0]);
          v78 = LOWORD(Src[0]) >> 1;
          v79 = (unsigned __int16 *)Src[1];
          if ( v78 < 4 )
          {
            v87 = 0;
          }
          else
          {
            v80 = 0LL;
            do
            {
              v81 = *(_QWORD *)v79;
              if ( (*(_QWORD *)v79 & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v82 = 4LL;
                do
                {
                  v83 = (unsigned __int16)v81;
                  if ( (unsigned __int16)v81 >= 0x61u )
                  {
                    if ( (unsigned __int16)v81 <= 0x7Au )
                    {
                      v83 = (unsigned __int16)v81 - 32;
                    }
                    else
                    {
                      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                      v83 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v85);
                    }
                  }
                  *(_QWORD *)&v86 = v81;
                  *((_QWORD *)&v86 + 1) = v83;
                  v81 = v86 >> 16;
                  --v82;
                }
                while ( v82 );
              }
              else
              {
                v81 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              v79 += 4;
              v78 -= 4;
              v80 = v81 + (v80 >> 1) + 3 * v80;
            }
            while ( v78 >= 4 );
            v69 = (__int64)a11;
            v77 = LOWORD(Src[0]);
            v87 = v80 + HIDWORD(v80);
          }
          if ( !v78 )
          {
LABEL_199:
            v94 = v152;
            *(_DWORD *)(v69 + 16) = v87;
            v95 = v94 & 0x40;
            v96 = v87 % 0x25;
            v97 = (__int64 **)(*(_QWORD *)v69 + 8 * v96);
            *(_BYTE *)(v69 + 20) = v96;
            v98 = *v97;
            if ( !*v97 )
            {
LABEL_238:
              v19 = 0LL;
              goto LABEL_239;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v98 + 4) == *(_DWORD *)(v69 + 16) )
              {
                v99 = PsGetCurrentServerSiloGlobals();
                v102 = v77;
                Flink = v99[77].Flink;
                if ( v77 == *(unsigned __int16 *)(v100 + 8) )
                {
                  v104 = v101;
                  v105 = *(_QWORD **)(v100 + 16);
                  v106 = &v104[v77];
                  if ( (unsigned __int64)v77 >= 8 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v104 != *v105 )
                        break;
                      v102 -= 8;
                      if ( !v102 )
                        goto LABEL_224;
                      v104 += 8;
                      ++v105;
                    }
                    while ( v102 >= 8 );
                  }
                  if ( v104 >= v106 )
                  {
LABEL_224:
                    v19 = v98[1];
                    *(_QWORD *)(v69 + 8) = v97;
                    if ( v19 )
                    {
                      v18 = (unsigned __int64)v153;
                      v57 = a10;
                      v110 = v151;
                      goto LABEL_226;
                    }
LABEL_239:
                    v18 = (unsigned __int64)v153;
                    v57 = a10;
                    v110 = v151;
                    if ( (v152 & 1) != 0 )
                    {
                      v112 = *(_QWORD *)v69;
                      do
                      {
                        ShadowDirectory = ObpGetShadowDirectory(v112, v18, (unsigned int)&v152, a10, v110);
                        v112 = ShadowDirectory;
                        if ( !ShadowDirectory )
                          break;
                        ObpLockUnrelatedDirectoryShared(v69, ShadowDirectory);
                        v19 = ObpLookupDirectoryUsingHash(v112, Src, v69, v152);
                      }
                      while ( !v19 );
                    }
LABEL_226:
                    if ( v173 )
                    {
                      if ( !v19 )
                        goto LABEL_318;
                      v42 = v150[0];
                      if ( LOWORD(v150[0])
                        || (v111 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8)] + 144)) != 0LL
                        && (v111 == ObpParseSymbolicLinkEx || !a8) )
                      {
                        v70 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8);
                        v71 = ObTypeIndexTable[v70];
                        v72 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v71 + 144);
                        if ( v72 )
                          goto LABEL_244;
                        v44 = (_WORD *)v150[1];
                        goto LABEL_146;
                      }
                      v120 = a5;
                      v121 = (struct _OBJECT_TYPE *)a4;
                      v122 = (void *)v19;
LABEL_291:
                      v123 = ObReferenceObjectByPointer(v122, 0, v121, v120);
LABEL_292:
                      v148 = v123;
                      v62 = v123;
                      goto LABEL_293;
                    }
                    if ( !v19 )
                    {
LABEL_318:
                      if ( LOWORD(v150[0]) )
                      {
                        v119 = v149;
                        v148 = -1073741766;
                        goto LABEL_295;
                      }
                      if ( !a8 )
                        goto LABEL_321;
                      v136 = 4;
                      v137 = (struct _ACCESS_STATE *)v57;
                      v138 = ThreadServerSilo;
                      if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                        v136 = 8;
                      LOBYTE(Tag) = 0;
                      if ( !ObCheckCreateObjectAccess(
                              (__int64)ThreadServerSilo,
                              v136,
                              v137,
                              (__int64)Src,
                              Tag,
                              v110,
                              &v148) )
                      {
                        v62 = v148;
                        if ( v148 >= 0 )
                        {
                          v123 = -1073741772;
                          goto LABEL_292;
                        }
LABEL_293:
                        v119 = v149;
LABEL_294:
                        if ( v62 < 0 )
                          goto LABEL_295;
                        goto LABEL_299;
                      }
                      v139 = v138[85];
                      if ( v139 == -1
                        || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != ObpSymbolicLinkObjectType
                        || v139 == (unsigned int)PsGetCurrentProcessSessionId()
                        || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v110)
                        || (unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                      {
                        v140 = LOWORD(Src[0]);
                        Pool2 = (void *)ExAllocatePool2(256LL, LOWORD(Src[0]), 1833853519LL);
                        if ( Pool2 )
                        {
                          if ( (unsigned __int8)ObpInsertDirectoryEntry(v138, a8) )
                          {
                            memmove(Pool2, Src[1], v140);
                            v142 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                            v143 = (void *)*((_QWORD *)v142 + 2);
                            if ( v143 )
                              ExFreePoolWithTag(v143, 0);
                            v144 = (__int16)Src[0];
                            v19 = (__int64)a8;
                            v119 = v149;
                            *((_WORD *)v142 + 4) = Src[0];
                            *((_WORD *)v142 + 5) = v144;
                            *((_QWORD *)v142 + 2) = Pool2;
                            v148 = 0;
                            goto LABEL_299;
                          }
                          ExFreePoolWithTag(Pool2, 0);
                        }
                        v119 = v149;
                        v148 = -1073741670;
                        goto LABEL_295;
                      }
LABEL_333:
                      v119 = v149;
                      v148 = -1073741790;
                      goto LABEL_295;
                    }
                    v62 = v156;
LABEL_342:
                    v148 = v62;
                    goto LABEL_293;
                  }
                  if ( v95 )
                  {
                    v107 = (char *)v105 - v104;
                    while ( 1 )
                    {
                      v108 = *(unsigned __int16 *)v104;
                      v109 = *(unsigned __int16 *)&v104[v107];
                      if ( (_WORD)v108 != (_WORD)v109 )
                      {
                        if ( (unsigned int)v108 >= 0x61 )
                        {
                          if ( (unsigned int)v108 > 0x7A )
                          {
                            if ( Flink && (unsigned __int16)v108 >= 0xC0u )
                              LOWORD(v108) = *((_WORD *)&Flink->Flink
                                             + (v108 & 0xF)
                                             + *((unsigned __int16 *)&Flink->Flink
                                               + ((unsigned __int8)v108 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v108 >> 8))))
                                           + v108;
                          }
                          else
                          {
                            LOWORD(v108) = v108 - 32;
                          }
                        }
                        if ( (unsigned int)v109 >= 0x61 )
                        {
                          if ( (unsigned int)v109 > 0x7A )
                          {
                            if ( Flink && (unsigned __int16)v109 >= 0xC0u )
                              LOWORD(v109) = *((_WORD *)&Flink->Flink
                                             + (v109 & 0xF)
                                             + *((unsigned __int16 *)&Flink->Flink
                                               + ((unsigned __int8)v109 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v109 >> 8))))
                                           + v109;
                          }
                          else
                          {
                            LOWORD(v109) = v109 - 32;
                          }
                        }
                        if ( (_WORD)v108 != (_WORD)v109 )
                          break;
                      }
                      v104 += 2;
                      if ( v104 >= v106 )
                        goto LABEL_224;
                    }
                  }
                  else
                  {
                    while ( *(_WORD *)v104 == *(_WORD *)v105 )
                    {
                      v104 += 2;
                      v105 = (_QWORD *)((char *)v105 + 2);
                      if ( v104 >= v106 )
                        goto LABEL_224;
                    }
                  }
                }
              }
              v97 = (__int64 **)v98;
              v98 = (__int64 *)*v98;
              if ( !v98 )
                goto LABEL_238;
            }
          }
          while ( 1 )
          {
            v88 = *v79++;
            --v78;
            v89 = (v87 >> 1) + 3 * v87;
            if ( v88 < 0x61 )
              goto LABEL_197;
            if ( v88 <= 0x7A )
              break;
            v90 = PsGetCurrentServerSiloGlobals();
            v92 = NLS_UPCASE((__int64)v90[77].Flink, v91);
            v87 = v92 + v93;
LABEL_198:
            if ( !v78 )
              goto LABEL_199;
          }
          v89 -= 32;
LABEL_197:
          v87 = v88 + v89;
          goto LABEL_198;
        }
        v42 = v150[0];
      }
      v73 = a8 && !v42;
      goto LABEL_167;
    }
    v41 = *(_WORD **)(a2 + 8);
    v42 = *(_WORD *)a2 - 8;
    v43 = *(_WORD *)(a2 + 2) - 8;
    LOWORD(v150[0]) = v42;
    v44 = v41 + 4;
    v150[1] = (__int64)(v41 + 4);
    WORD1(v150[0]) = v43;
    if ( (POBJECT_TYPE *)a4 != IoFileObjectType
      || (v152 & 1) == 0
      || v42 < 6u
      || v41[5] != 58
      || v41[6] != 92
      || (v45 = ((unsigned __int16)*v44 | 0x20u) - 97, (unsigned int)v45 >= 0x1A) )
    {
LABEL_101:
      v19 = *(_QWORD *)v18;
      v57 = a10;
      goto LABEL_144;
    }
    v46 = v18;
    v47 = 8 * v45 + 32;
    while ( 1 )
    {
      v48 = (signed __int64 *)(v47 + v46);
      if ( !*(_QWORD *)(v47 + v46) )
        goto LABEL_99;
      _m_prefetchw(v48);
      v49 = *v48;
      if ( (*v48 & 0xF) != 0 )
      {
        do
        {
          v50 = _InterlockedCompareExchange64(v48, v49 - 1, v49);
          if ( v49 == v50 )
            break;
          v49 = v50;
        }
        while ( (v50 & 0xF) != 0 );
      }
      v51 = v49;
      v52 = v49 & 0xF;
      v19 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v52 <= 1 )
      {
        if ( !v52 )
          goto LABEL_93;
        ObpFastReplenishReference((signed __int64 *)(v47 + v46), v19);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48, 1, 1u, 0x554C624Fu);
      if ( v19 )
        break;
LABEL_93:
      v53 = (char *)PsGetServerSiloGlobals(*(_QWORD *)(v46 + 16));
      v54 = KeGetCurrentThread();
      v55 = (signed __int64 *)(v53 + 120);
      --v54->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v55, 0LL);
      v19 = ObFastReferenceObjectLocked((_QWORD *)(v47 + v46), 0x554C624Fu);
      if ( _InterlockedCompareExchange64(v55, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v55);
      KeAbPostRelease((ULONG_PTR)v55);
      v56 = KeGetCurrentThread();
      v128 = v56->SpecialApcDisable++ == -1;
      if ( v128 && ($C71981A45BEB2B45F82C232A7085991E *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
        KiCheckForKernelApcDelivery();
      if ( v19 )
        break;
LABEL_99:
      v46 = *(_QWORD *)(v46 + 24);
      if ( !v46 )
      {
        v44 = (_WORD *)v150[1];
        v42 = v150[0];
        goto LABEL_101;
      }
    }
    v150[1] += 4LL;
    LOWORD(v150[0]) -= 4;
    v57 = a10;
    v58 = ObHeaderCookie ^ *(_BYTE *)(v19 - 24) ^ ((unsigned __int16)(v19 - 48) >> 8);
    v163 = 0LL;
    if ( v58 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v59 = IopParseDevice(v19, v175, a2, (__int64)v150, a6, a7, (__int64)v158, (__int64)&v163);
    else
      v59 = ObpParseSymbolicLinkEx(
              (unsigned __int16 *)v19,
              (POBJECT_TYPE)a4,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v151,
              v175,
              a2,
              (unsigned __int16 *)v150,
              a6,
              a7,
              (__int64)v158,
              (unsigned __int16 **)&v163);
    v148 = v59;
    _m_prefetchw(v48);
    v60 = *v48;
    if ( (v19 ^ (unsigned __int64)*v48) >= 0xF )
    {
LABEL_108:
      ObfDereferenceObjectWithTag((PVOID)v19, 0x554C624Fu);
    }
    else
    {
      while ( 1 )
      {
        v61 = v60;
        v60 = _InterlockedCompareExchange64(v48, v60 + 1, v60);
        if ( v61 == v60 )
          break;
        if ( (v19 ^ (unsigned __int64)v60) >= 0xF )
          goto LABEL_108;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48, 0, 1u, 0x554C624Fu);
    }
    v62 = v148;
    if ( v148 < 0 )
      goto LABEL_293;
    v19 = v163;
    if ( v148 != 260 )
    {
      v63 = v149;
      if ( v148 != 872 )
        v63 = (void *)v163;
      v149 = v63;
    }
    if ( (v159 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      goto LABEL_333;
    if ( v148 != 260 && v148 != 872 && v148 != 280 )
    {
LABEL_285:
      v119 = 0LL;
      if ( !v19 )
        v62 = -1073741772;
      v148 = v62;
      goto LABEL_294;
    }
    v16 = v175;
    if ( (v175 & 0x1000) != 0 && v148 != 872 )
    {
LABEL_288:
      v119 = v149;
      v148 = -1073740533;
      goto LABEL_295;
    }
    if ( !--v155 )
    {
LABEL_321:
      v119 = v149;
      v148 = -1073741772;
      goto LABEL_295;
    }
    v29 = a2;
    if ( !*(_WORD *)a2 )
      goto LABEL_289;
    ObpDereferenceCurrentDeviceMap(v18, v154);
    v64 = *(__int16 **)(a2 + 8);
    v25 = a2 + 8;
    v18 = 0LL;
    v153 = 0LL;
    v65 = *v64;
    if ( v148 == 280 )
      break;
    if ( v65 != 92 )
      goto LABEL_289;
    if ( v148 == 872 )
    {
      v19 = (__int64)ObpRootDirectoryObject;
      v21 = (POBJECT_TYPE *)a4;
    }
    else
    {
      v21 = (POBJECT_TYPE *)a4;
      v19 = (__int64)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
    }
  }
  if ( v65 != 92 )
  {
    *(_OWORD *)v150 = *(_OWORD *)a2;
    goto LABEL_143;
  }
LABEL_289:
  v119 = v149;
  v148 = -1073741773;
LABEL_295:
  if ( *a11 )
  {
    ExReleasePushLockEx((__int64 *)(*a11 + 296LL), 0LL);
    if ( *((_BYTE *)a11 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)*a11, 0x554C624Fu);
      *((_BYTE *)a11 + 22) = 0;
    }
    *a11 = 0LL;
    *((_BYTE *)a11 + 21) = 0;
    KeLeaveCriticalRegion();
  }
LABEL_299:
  if ( v119 )
    ObDereferenceObjectDeferDelete(v119);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  SeClearLearningModeObjectInformation();
  if ( v18 )
  {
    if ( v154 && (_m_prefetchw((const void *)v154), v124 = *v154, (v18 ^ *v154) < 0xF) )
    {
      while ( 1 )
      {
        v125 = v124;
        v124 = _InterlockedCompareExchange64(v154, v124 + 1, v124);
        if ( v125 == v124 )
          break;
        if ( (v18 ^ v124) >= 0xF )
          goto LABEL_308;
      }
    }
    else
    {
LABEL_308:
      _m_prefetchw((const void *)(v18 + 240));
      v126 = *(_QWORD *)(v18 + 240);
      v127 = v126 - 1;
      v128 = v126 == 1;
      if ( v126 - 1 <= 0 )
      {
LABEL_311:
        if ( !v128 )
          __fastfail(0xEu);
        v130 = (char *)PsGetServerSiloGlobals(*(_QWORD *)(v18 + 16));
        v131 = KeGetCurrentThread();
        v132 = (volatile signed __int64 *)(v130 + 120);
        --v131->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v130 + 120), 0LL);
        v133 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 240), 0xFFFFFFFFFFFFFFFFuLL);
        v134 = v133 <= 1;
        v135 = v133 - 1;
        if ( v134 )
        {
          if ( v135 )
            __fastfail(0xEu);
          *(_QWORD *)(*(_QWORD *)v18 + 304LL) = 0LL;
        }
        else
        {
          v18 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64(v132, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v132);
        KeAbPostRelease((ULONG_PTR)v132);
        v145 = KeGetCurrentThread();
        v128 = v145->SpecialApcDisable++ == -1;
        if ( v128 && ($C71981A45BEB2B45F82C232A7085991E *)v145->ApcState.ApcListHead[0].Flink != &v145->152 )
          KiCheckForKernelApcDelivery();
        if ( v18 )
          ObpDeleteDeviceMap((PVOID)v18);
      }
      else
      {
        while ( 1 )
        {
          v129 = v126;
          v126 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 240), v127, v126);
          if ( v129 == v126 )
            break;
          v127 = v126 - 1;
          v128 = v126 == 1;
          if ( v126 - 1 <= 0 )
            goto LABEL_311;
        }
      }
    }
  }
  v146 = v148;
  if ( v148 < 0 )
  {
    v19 = 0LL;
  }
  else if ( a12 && v159 != -1 )
  {
    *a12 = v159;
    result = v146;
    *a13 = v19;
    return result;
  }
  result = v148;
  *a13 = v19;
  return result;
}
