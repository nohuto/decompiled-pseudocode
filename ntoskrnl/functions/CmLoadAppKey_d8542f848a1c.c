__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        const UNICODE_STRING **a8,
        ULONG_PTR *a9)
{
  __int64 Pool; // rsi
  const UNICODE_STRING *v10; // rdi
  unsigned __int16 *v12; // rax
  char v13; // r15
  volatile signed __int32 *LastHive; // r14
  unsigned int v15; // ecx
  _QWORD *v16; // r12
  unsigned int i; // edx
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int KeyCommon; // ebx
  __int64 j; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *k; // rcx
  __int64 NextHive; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  const UNICODE_STRING **v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // r9d
  int v52; // r11d
  int v53; // r9d
  int v54; // r10d
  _QWORD *v56; // rax
  __int64 v57; // rbx
  struct _EX_RUNDOWN_REF *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // r9d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  int v70; // edx
  int v71; // r9d
  int v72; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  _WORD v74[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v75; // [rsp+64h] [rbp-9Ch] BYREF
  char v76; // [rsp+66h] [rbp-9Ah]
  int v77; // [rsp+68h] [rbp-98h] BYREF
  int v78; // [rsp+6Ch] [rbp-94h] BYREF
  int v79; // [rsp+70h] [rbp-90h] BYREF
  int v80; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  __int64 v82; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h]
  int v84; // [rsp+90h] [rbp-70h]
  int v85; // [rsp+94h] [rbp-6Ch] BYREF
  const UNICODE_STRING *v86; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+ACh] [rbp-54h]
  _BYTE v90[80]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v91; // [rsp+100h] [rbp+0h] BYREF
  __int64 v92; // [rsp+108h] [rbp+8h]
  PVOID v93; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR *v94; // [rsp+118h] [rbp+18h]
  char *v95; // [rsp+120h] [rbp+20h]
  const UNICODE_STRING **v96; // [rsp+128h] [rbp+28h]
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  int *v101; // [rsp+190h] [rbp+90h]
  __int64 v102; // [rsp+198h] [rbp+98h]
  int *v103; // [rsp+1A0h] [rbp+A0h]
  __int64 v104; // [rsp+1A8h] [rbp+A8h]
  __int64 *v105; // [rsp+1B0h] [rbp+B0h]
  __int64 v106; // [rsp+1B8h] [rbp+B8h]
  __int64 v107; // [rsp+1C0h] [rbp+C0h]
  __int64 v108; // [rsp+1C8h] [rbp+C8h]
  __int64 v109; // [rsp+1D0h] [rbp+D0h]
  int v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1DCh] [rbp+DCh]
  __int64 v112; // [rsp+1E0h] [rbp+E0h]
  __int64 v113; // [rsp+1E8h] [rbp+E8h]
  __int64 v114; // [rsp+1F0h] [rbp+F0h]
  int v115; // [rsp+1F8h] [rbp+F8h]
  int v116; // [rsp+1FCh] [rbp+FCh]
  __int64 v117; // [rsp+200h] [rbp+100h]
  __int64 v118; // [rsp+208h] [rbp+108h]
  __int64 v119; // [rsp+210h] [rbp+110h]
  int v120; // [rsp+218h] [rbp+118h]
  int v121; // [rsp+21Ch] [rbp+11Ch]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  int *v125; // [rsp+250h] [rbp+150h]
  __int64 v126; // [rsp+258h] [rbp+158h]
  _WORD *v127; // [rsp+260h] [rbp+160h]
  __int64 v128; // [rsp+268h] [rbp+168h]
  int *v129; // [rsp+270h] [rbp+170h]
  __int64 v130; // [rsp+278h] [rbp+178h]
  int *v131; // [rsp+280h] [rbp+180h]
  __int64 v132; // [rsp+288h] [rbp+188h]
  __int64 v133; // [rsp+290h] [rbp+190h]
  __int64 v134; // [rsp+298h] [rbp+198h]
  __int64 v135; // [rsp+2A0h] [rbp+1A0h]
  int v136; // [rsp+2A8h] [rbp+1A8h]
  int v137; // [rsp+2ACh] [rbp+1ACh]
  __int64 v138; // [rsp+2B0h] [rbp+1B0h]
  __int64 v139; // [rsp+2B8h] [rbp+1B8h]
  __int64 v140; // [rsp+2C0h] [rbp+1C0h]
  int v141; // [rsp+2C8h] [rbp+1C8h]
  int v142; // [rsp+2CCh] [rbp+1CCh]
  __int64 v143; // [rsp+2D0h] [rbp+1D0h]
  __int64 v144; // [rsp+2D8h] [rbp+1D8h]
  __int64 v145; // [rsp+2E0h] [rbp+1E0h]
  int v146; // [rsp+2E8h] [rbp+1E8h]
  int v147; // [rsp+2ECh] [rbp+1ECh]
  __int64 *v148; // [rsp+2F0h] [rbp+1F0h]
  __int64 v149; // [rsp+2F8h] [rbp+1F8h]

  Pool = 0LL;
  v10 = a2;
  v81 = (__int64)a5;
  v96 = a8;
  v78 = a3;
  v86 = a2;
  v94 = a9;
  v82 = a4;
  v92 = (__int64)a6;
  v84 = 0;
  Handle = 0LL;
  memset(v90, 0, sizeof(v90));
  v12 = (unsigned __int16 *)a1[2];
  LOBYTE(v75) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v74[0]) = 0;
  v13 = 0;
  v76 = 0;
  LastHive = 0LL;
  v15 = *v12;
  v16 = 0LL;
  P = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    for ( i = v15 >> 1; i; *(_WORD *)v18 -= 2 )
    {
      v18 = a1[2];
      if ( *(_WORD *)(*(_QWORD *)(v18 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
  {
    KeyCommon = -1073741811;
    goto LABEL_123;
  }
  Pool = CmpAllocatePool(256LL, 432LL, 859393347LL);
  if ( !Pool )
  {
    KeyCommon = -1073741670;
    goto LABEL_123;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    KeyCommon = -1073741431;
    goto LABEL_57;
  }
  v89 = v78 & 0x20;
  v19 = (v89 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v78 & 0x80u) == 0 )
    v19 = v89 != 0 ? 119078913 : 51970049;
  v20 = v19 | 0x10000000;
  if ( (v78 & 0x200) == 0 )
    v20 = v19;
  v88 = v20;
  v77 = v78 & 0x2000;
  v21 = (v77 != 0) | 0x20;
  if ( (v78 & 0x8000) == 0 )
    v21 = (v78 & 0x2000) != 0;
  v79 = v21;
  v22 = CmpOpenHiveFile(v10, 8, (__int64)a6, 0LL, 0LL, (__int64)&P, Pool);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    LOBYTE(v74[0]) = 1;
    *(_QWORD *)&v90[32] = v10;
    v90[40] = 1;
  }
  else
  {
    if ( v22 < 0 )
    {
      SetFailureLocation(Pool, 0, 32, v22, 16);
      goto LABEL_51;
    }
    v91 = 0LL;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v91, 0LL);
    v16 = v91;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(Pool, 0, 32, KeyCommon, 32);
      goto LABEL_49;
    }
    *(_QWORD *)&v90[32] = v16[5];
    v90[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v90[48], NotificationEvent, 0);
  *(_QWORD *)&v90[72] = 0LL;
  *(_QWORD *)&v90[24] = &v90[16];
  *(_QWORD *)&v90[16] = &v90[16];
  CmpLockAppHiveLoadList();
  for ( j = CmpAppHiveLoadList; ; j = *(_QWORD *)j )
  {
    if ( (__int64 *)j == &CmpAppHiveLoadList )
    {
      if ( *(__int64 **)qword_140C13D08 == &CmpAppHiveLoadList )
      {
        *(_QWORD *)v90 = &CmpAppHiveLoadList;
        *(_QWORD *)&v90[8] = qword_140C13D08;
        *(_QWORD *)qword_140C13D08 = v90;
        qword_140C13D08 = (__int64)v90;
        CmpUnlockAppHiveLoadList();
        goto LABEL_21;
      }
LABEL_81:
      __fastfail(3u);
    }
    if ( *(_BYTE *)(j + 40) )
      break;
    if ( *(_QWORD *)(j + 32) == *(_QWORD *)&v90[32] )
      goto LABEL_72;
LABEL_71:
    ;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(j + 32), v10, 1u) )
    goto LABEL_71;
LABEL_72:
  v56 = *(_QWORD **)(j + 24);
  v57 = j + 16;
  if ( *v56 != v57 )
    goto LABEL_81;
  *(_QWORD *)&v90[24] = v56;
  *(_QWORD *)&v90[16] = v57;
  *v56 = &v90[16];
  *(_QWORD *)(v57 + 8) = &v90[16];
  v58 = *(struct _EX_RUNDOWN_REF **)&v90[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v90[24] + 56LL));
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v58[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v58 + 7);
  while ( 1 )
  {
LABEL_21:
    v95 = 0LL;
    v75 = 256;
    v25 = CmpCmdHiveOpen((int)v10, v88, v79, v92, (__int64)&v75, Pool);
    KeyCommon = v25;
    if ( !v25 )
    {
      KeyCommon = CmpLoadKeyCommon(v95, a1, v78, v82, 0LL, (struct _KEVENT *)v81, a7, v94, SHIBYTE(v75), v75, Pool);
      goto LABEL_43;
    }
    if ( v25 != -1073741757 || v89 || v13 )
    {
      SetFailureLocation(Pool, 0, 32, v25, 48);
      goto LABEL_43;
    }
    if ( LOBYTE(v74[0]) )
    {
      KeyCommon = CmpOpenHiveFile(v10, 8, v92, 0LL, 0LL, (__int64)&P, Pool);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_106:
        v64 = KeyCommon;
        goto LABEL_109;
      }
      v93 = 0LL;
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v93, 0LL);
      v16 = v93;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        Object = 80;
        goto LABEL_106;
      }
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v26) = 1;
    CmpLockRegistryFreezeAware(v26);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
    CmpUnlockRegistry(v28, v27, v29, v30);
    UNLOCK_HIVE_LOAD();
    v13 = 1;
  }
LABEL_27:
  while ( 1 )
  {
    v80 = CmpActiveAppHiveUnloadCount;
    if ( !CmpActiveAppHiveUnloadCount )
      break;
    CmpUnlockRegistry(v28, v27, v29, v30);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v80, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    LOBYTE(v62) = 1;
    CmpLockRegistryFreezeAware(v62);
  }
  for ( k = 0LL; ; k = (void *)v33 )
  {
    NextHive = CmpGetNextHive(k);
    v33 = NextHive;
    if ( !NextHive )
      goto LABEL_101;
    v34 = (_QWORD *)(NextHive + 4768);
    v28 = *(unsigned int *)(NextHive + 4768);
    v85 = v28;
    if ( (_DWORD)v28 )
    {
      CmpUnlockRegistry(v28, v27, v29, v30);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v33 + 4776, v34, &v85, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v63) = 1;
      CmpLockRegistryFreezeAware(v63);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v33);
      if ( (volatile signed __int32 *)v33 == LastHive )
        goto LABEL_101;
      goto LABEL_27;
    }
    v27 = *(_QWORD *)(NextHive + 1544);
    if ( v27 )
    {
      if ( (unsigned __int8)CmpIsThisSameFile(v16) )
        break;
    }
    if ( (volatile signed __int32 *)v33 == LastHive )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v33);
LABEL_101:
      CmpUnlockRegistry(v28, v27, v29, v30);
      UNLOCK_HIVE_LOAD();
      v10 = v86;
      v13 = 1;
      goto LABEL_21;
    }
  }
  v35 = *(unsigned int *)(v33 + 4112);
  v36 = *(_DWORD *)(v33 + 160) & 0x8000;
  if ( (v35 & 0x20) == 0 || (v35 & 0x40) != 0 )
  {
    CmpUnlockRegistry(v35, v27, v29, v30);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v33);
    Object = 96;
LABEL_108:
    KeyCommon = -1073741757;
    v64 = -1073741757;
LABEL_109:
    SetFailureLocation(Pool, 0, 32, v64, Object);
    goto LABEL_43;
  }
  if ( !v77 )
  {
    if ( !v36 )
      goto LABEL_39;
    CmpUnlockRegistry(v35, v27, v29, v30);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v33);
    Object = 112;
    goto LABEL_108;
  }
  if ( !v36 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
  {
    CmpUnlockRegistry(v66, v65, v67, v68);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v33);
    KeyCommon = -1073741790;
    Object = 128;
    goto LABEL_106;
  }
LABEL_39:
  CmpAttachToRegistryProcess(&ApcState);
  v37 = *(_QWORD *)(v33 + 2936);
  v86 = 0LL;
  CmpConstructNameWithStatus(v37, &v86);
  v38 = v96;
  *v96 = v86;
  CmpDetachFromRegistryProcess(&ApcState);
  if ( *v38 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v33 + 2936));
    v43 = v94;
    *v94 = *(_QWORD *)(v33 + 2936);
    CmpUnlockRegistry(v43, v44, v45, v46);
    UNLOCK_HIVE_LOAD();
    KeyCommon = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v33);
    v76 = 1;
  }
  else
  {
    CmpUnlockRegistry(v40, v39, v41, v42);
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v33);
  }
LABEL_43:
  CmpLockAppHiveLoadList();
  v47 = *(_QWORD *)v90;
  v48 = *(_QWORD *)&v90[8];
  if ( *(_BYTE **)(*(_QWORD *)v90 + 8LL) != v90 || **(_BYTE ***)&v90[8] != v90 )
    goto LABEL_81;
  **(_QWORD **)&v90[8] = *(_QWORD *)v90;
  *(_QWORD *)(v47 + 8) = v48;
  v49 = *(_QWORD *)&v90[16];
  if ( *(_BYTE **)&v90[16] == &v90[16] )
    goto LABEL_46;
  v59 = *(_QWORD *)&v90[24];
  v60 = (_QWORD *)(*(_QWORD *)&v90[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v90[16] + 8LL) != &v90[16] )
    goto LABEL_81;
  if ( **(_BYTE ***)&v90[24] != &v90[16] )
    goto LABEL_81;
  **(_QWORD **)&v90[24] = *(_QWORD *)&v90[16];
  *(_QWORD *)(v49 + 8) = v59;
  v61 = (_QWORD *)qword_140C13D08;
  if ( *(__int64 **)qword_140C13D08 != &CmpAppHiveLoadList )
    goto LABEL_81;
  *v60 = &CmpAppHiveLoadList;
  v60[1] = v61;
  *v61 = v60;
  qword_140C13D08 = (__int64)v60;
LABEL_46:
  CmpUnlockAppHiveLoadList();
  KeSetEvent((PRKEVENT)&v90[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v90[72]);
  if ( LastHive && _InterlockedExchangeAdd(LastHive + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)LastHive);
LABEL_49:
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseHiveLoadUnloadRundown();
  if ( KeyCommon < 0 )
  {
LABEL_57:
    if ( *(_WORD *)(Pool + 8) || *(_WORD *)(Pool + 10) || *(_BYTE *)(Pool + 394) )
    {
      if ( (unsigned int)dword_140C04328 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
        {
          v82 = 1LL;
          v53 = *(unsigned __int16 *)(Pool + 10);
          v54 = *(unsigned __int8 *)(Pool + 394);
          v123 = &v82;
          v125 = &v77;
          v127 = v74;
          v129 = &v79;
          v131 = &v78;
          v135 = Pool + 12;
          v140 = Pool + 108;
          v141 = 12 * v53;
          v145 = Pool + 396;
          v148 = &v81;
          LOWORD(v78) = v54;
          LOWORD(v79) = v53;
          v136 = 12 * v52;
          v138 = Pool + 10;
          v124 = 8LL;
          v77 = KeyCommon;
          v126 = 4LL;
          v74[0] = v52;
          v128 = 2LL;
          v130 = 2LL;
          v132 = 2LL;
          v133 = Pool + 8;
          v134 = 2LL;
          v137 = 0;
          v139 = 2LL;
          v142 = 0;
          v143 = Pool + 394;
          v144 = 2LL;
          v146 = 8 * v54;
          v147 = 0;
          v81 = 0x1000000LL;
          v149 = 8LL;
          tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&word_140036936, Pool + 394, 0xEu, &v122);
          v51 = dword_140C04328;
        }
        if ( v51 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
        {
          v70 = *(unsigned __int16 *)(Pool + 8);
          v71 = *(unsigned __int16 *)(Pool + 10);
          v72 = *(unsigned __int8 *)(Pool + 394);
          v99 = (__int64 *)&v77;
          v101 = &v78;
          v103 = &v79;
          v105 = (__int64 *)v74;
          v109 = Pool + 12;
          v110 = 12 * v70;
          v114 = Pool + 108;
          v115 = 12 * v71;
          v119 = Pool + 396;
          v74[0] = v72;
          LOWORD(v78) = v70;
          LOWORD(v79) = v71;
          v112 = Pool + 10;
          v117 = Pool + 394;
          v77 = KeyCommon;
          v100 = 4LL;
          v102 = 2LL;
          v104 = 2LL;
          v106 = 2LL;
          v107 = Pool + 8;
          v108 = 2LL;
          v111 = 0;
          v113 = 2LL;
          v116 = 0;
          v118 = 2LL;
          v120 = 8 * v72;
          v121 = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04328,
            (unsigned __int8 *)&dword_140036B5C,
            0LL,
            0LL,
            0xCu,
            &v98);
        }
      }
LABEL_64:
      if ( Pool )
        goto LABEL_65;
      return (unsigned int)KeyCommon;
    }
LABEL_123:
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
    {
      v82 = 1LL;
      v99 = &v82;
      v100 = 8LL;
      v101 = &v77;
      v77 = KeyCommon;
      v103 = (int *)&v81;
      v102 = 4LL;
      v81 = 0x1000000LL;
      v104 = 8LL;
      tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&byte_140036A99, v69, 5u, &v98);
    }
    goto LABEL_64;
  }
  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
  {
    v100 = 8LL;
    v82 = 1LL;
    v99 = &v82;
    v104 = 1LL;
    v101 = &v77;
    LOBYTE(v74[0]) = v76;
    v103 = (int *)v74;
    v105 = &v81;
    v77 = KeyCommon;
    v102 = 4LL;
    v81 = 0x1000000LL;
    v106 = 8LL;
    tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&word_140036AF2, v50, 6u, &v98);
  }
LABEL_65:
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)KeyCommon;
}
