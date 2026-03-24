/*
 * XREFs of CmLoadAppKey @ 0x1406E8CDC
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     ExBlockOnAddressPushLock @ 0x1402F4BA0 (ExBlockOnAddressPushLock.c)
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     _tlgWriteAgg @ 0x14036D53C (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC7E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpGetLastHive @ 0x140699A30 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1406E9BF4 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x1406E9C9C (CmpIsThisSameFile.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        _QWORD *a8,
        ULONG_PTR *a9)
{
  __int16 v9; // di
  unsigned __int16 *v12; // rax
  char v13; // r15
  volatile signed __int32 *LastHive; // r14
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID TransientPoolWithTag; // rax
  __int64 v20; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int KeyCommon; // edi
  NTSTATUS v27; // eax
  struct _DMA_ADAPTER *v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rbx
  struct _EX_RUNDOWN_REF *v34; // rbx
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  _DWORD *v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rdi
  struct _KTHREAD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // r8
  int *v62; // rdx
  unsigned __int8 v63; // r9
  struct _EVENT_DATA_DESCRIPTOR *v64; // rax
  unsigned int v65; // r9d
  int v66; // r11d
  int v67; // r9d
  int v68; // r10d
  __int64 v69; // r15
  int v70; // r8d
  int v71; // r9d
  int Object; // [rsp+20h] [rbp-E0h]
  char v73; // [rsp+60h] [rbp-A0h] BYREF
  char v74; // [rsp+61h] [rbp-9Fh] BYREF
  char v75; // [rsp+62h] [rbp-9Eh]
  char v76; // [rsp+63h] [rbp-9Dh]
  char v77; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h] BYREF
  __int16 v80; // [rsp+78h] [rbp-88h] BYREF
  __int16 v81; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v82; // [rsp+80h] [rbp-80h] BYREF
  __int16 v83; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v84; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  int v86; // [rsp+98h] [rbp-68h]
  __int64 v87; // [rsp+9Ch] [rbp-64h] BYREF
  int v88; // [rsp+A4h] [rbp-5Ch]
  char *v89; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  int v91; // [rsp+B8h] [rbp-48h] BYREF
  int v92; // [rsp+BCh] [rbp-44h] BYREF
  int v93; // [rsp+C0h] [rbp-40h] BYREF
  int v94; // [rsp+C4h] [rbp-3Ch] BYREF
  int v95; // [rsp+C8h] [rbp-38h]
  int v96; // [rsp+CCh] [rbp-34h]
  int v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+D8h] [rbp-28h]
  _BYTE v99[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v100; // [rsp+130h] [rbp+30h] BYREF
  PVOID v101; // [rsp+138h] [rbp+38h] BYREF
  __int64 v102; // [rsp+140h] [rbp+40h] BYREF
  __int64 v103; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v104; // [rsp+150h] [rbp+50h]
  _QWORD *v105; // [rsp+158h] [rbp+58h]
  __int64 v106; // [rsp+160h] [rbp+60h]
  __int64 v107; // [rsp+168h] [rbp+68h]
  __int64 v108; // [rsp+170h] [rbp+70h] BYREF
  __int64 v109; // [rsp+178h] [rbp+78h] BYREF
  __int64 v110; // [rsp+180h] [rbp+80h] BYREF
  __int64 v111; // [rsp+188h] [rbp+88h] BYREF
  __int64 v112; // [rsp+190h] [rbp+90h] BYREF
  __int64 v113; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v116; // [rsp+1F0h] [rbp+F0h]
  __int64 v117; // [rsp+1F8h] [rbp+F8h]
  int *v118; // [rsp+200h] [rbp+100h]
  __int64 v119; // [rsp+208h] [rbp+108h]
  char *v120; // [rsp+210h] [rbp+110h]
  __int64 v121; // [rsp+218h] [rbp+118h]
  __int16 *v122; // [rsp+220h] [rbp+120h]
  __int64 v123; // [rsp+228h] [rbp+128h]
  __int16 *v124; // [rsp+230h] [rbp+130h]
  __int64 v125; // [rsp+238h] [rbp+138h]
  __int64 v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  __int64 v128; // [rsp+250h] [rbp+150h]
  int v129; // [rsp+258h] [rbp+158h]
  int v130; // [rsp+25Ch] [rbp+15Ch]
  __int64 v131; // [rsp+260h] [rbp+160h]
  __int64 v132; // [rsp+268h] [rbp+168h]
  __int64 v133; // [rsp+270h] [rbp+170h]
  int v134; // [rsp+278h] [rbp+178h]
  int v135; // [rsp+27Ch] [rbp+17Ch]
  __int64 v136; // [rsp+280h] [rbp+180h]
  __int64 v137; // [rsp+288h] [rbp+188h]
  __int64 v138; // [rsp+290h] [rbp+190h]
  int v139; // [rsp+298h] [rbp+198h]
  int v140; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v141; // [rsp+2A0h] [rbp+1A0h]
  __int64 v142; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v144; // [rsp+2D0h] [rbp+1D0h]
  __int64 v145; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v146; // [rsp+2E0h] [rbp+1E0h]
  __int64 v147; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v148; // [rsp+2F0h] [rbp+1F0h]
  __int64 v149; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v150; // [rsp+300h] [rbp+200h]
  __int64 v151; // [rsp+308h] [rbp+208h]
  __int64 v152; // [rsp+310h] [rbp+210h]
  __int64 v153; // [rsp+318h] [rbp+218h]
  __int64 v154; // [rsp+320h] [rbp+220h]
  int v155; // [rsp+328h] [rbp+228h]
  int v156; // [rsp+32Ch] [rbp+22Ch]
  __int64 v157; // [rsp+330h] [rbp+230h]
  __int64 v158; // [rsp+338h] [rbp+238h]
  __int64 v159; // [rsp+340h] [rbp+240h]
  int v160; // [rsp+348h] [rbp+248h]
  int v161; // [rsp+34Ch] [rbp+24Ch]
  __int64 v162; // [rsp+350h] [rbp+250h]
  __int64 v163; // [rsp+358h] [rbp+258h]
  __int64 v164; // [rsp+360h] [rbp+260h]
  int v165; // [rsp+368h] [rbp+268h]
  int v166; // [rsp+36Ch] [rbp+26Ch]
  char v167; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v168; // [rsp+390h] [rbp+290h]
  __int64 v169; // [rsp+398h] [rbp+298h]
  int *v170; // [rsp+3A0h] [rbp+2A0h]
  __int64 v171; // [rsp+3A8h] [rbp+2A8h]
  char *v172; // [rsp+3B0h] [rbp+2B0h]
  __int64 v173; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v174; // [rsp+3C0h] [rbp+2C0h]
  __int64 v175; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v176; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v177; // [rsp+3F0h] [rbp+2F0h]
  __int64 v178; // [rsp+3F8h] [rbp+2F8h]
  int *v179; // [rsp+400h] [rbp+300h]
  __int64 v180; // [rsp+408h] [rbp+308h]
  __int64 *v181; // [rsp+410h] [rbp+310h]
  __int64 v182; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v106 = a5;
  v105 = a8;
  v95 = a3;
  v104 = a9;
  v107 = a4;
  v98 = (__int64)a6;
  v86 = 0;
  Handle = 0LL;
  memset(v99, 0, sizeof(v99));
  v12 = (unsigned __int16 *)a1[2];
  v73 = 0;
  memset(v114, 0, sizeof(v114));
  v75 = 0;
  v13 = 0;
  v76 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v103 = 0LL;
  v78 = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    LODWORD(v16) = v15 >> 1;
    if ( v15 >> 1 )
    {
      do
      {
        v17 = a1[2];
        v16 = (unsigned int)(v16 - 1);
        if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
          break;
        *(_WORD *)v17 -= 2;
      }
      while ( (_DWORD)v16 );
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, (PLOOKASIDE_LIST_EX)2);
  v20 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return 3221225626LL;
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmSiFreeMemory((PPRIVILEGE_SET)v20);
    return 3221225865LL;
  }
  v96 = v9 & 0x20;
  v22 = (v96 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v22 = v96 != 0 ? 119078913 : 51970049;
  v23 = v22 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v23 = v22;
  v88 = v23;
  v97 = v9 & 0x2000;
  v24 = (v97 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v24 = (v9 & 0x2000) != 0;
  HIDWORD(v87) = v24;
  v25 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v25;
  if ( v25 == -1073741772 )
  {
    v75 = 1;
    *(_QWORD *)&v99[32] = a2;
    v99[40] = 1;
  }
  else
  {
    if ( v25 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v25, 16);
      goto LABEL_102;
    }
    v100 = 0LL;
    v27 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v100, 0LL);
    v28 = (struct _DMA_ADAPTER *)v100;
    KeyCommon = v27;
    v78 = (struct _DMA_ADAPTER *)v100;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 32);
      goto LABEL_100;
    }
    *(_QWORD *)&v99[32] = v28[2].DmaOperations;
    v99[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v99[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v99[72]);
  *(_QWORD *)&v99[24] = &v99[16];
  *(_QWORD *)&v99[16] = &v99[16];
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v30 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C480B8 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v99 = &CmpAppHiveLoadList;
      *(_QWORD *)&v99[8] = qword_140C480B8;
      *(_QWORD *)qword_140C480B8 = v99;
      qword_140C480B8 = (__int64)v99;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v31 = *(_QWORD *)&v99[32];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v30 + 40) )
    {
      if ( *(_QWORD *)(v30 + 32) == v31 )
        break;
      goto LABEL_31;
    }
    if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v30 + 32), a2, 1u) )
      break;
LABEL_31:
    v30 = *(_QWORD *)v30;
    if ( (__int64 *)v30 == &CmpAppHiveLoadList )
      goto LABEL_32;
  }
  v32 = *(_QWORD **)(v30 + 24);
  v33 = v30 + 16;
  if ( *v32 != v33 )
    goto LABEL_123;
  *(_QWORD *)&v99[24] = v32;
  *(_QWORD *)&v99[16] = v33;
  *v32 = &v99[16];
  *(_QWORD *)(v33 + 8) = &v99[16];
  v34 = *(struct _EX_RUNDOWN_REF **)&v99[24];
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&v99[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v34[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection(v34 + 7);
LABEL_34:
  v35 = v98;
  v89 = 0LL;
  v74 = 1;
  v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v74, (__int64)&v89, v88, SBYTE4(v87), v98, (__int64)&v73, v20);
  while ( 1 )
  {
    KeyCommon = v36;
    if ( !v36 )
    {
      KeyCommon = CmpLoadKeyCommon(v89, a1, v95, v107, 0LL, v106, a7, v104, v74, v73, v20);
      goto LABEL_89;
    }
    if ( v36 != -1073741757 || v96 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v36, 48);
      goto LABEL_89;
    }
    if ( v75 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 8, v35, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v101 = 0LL;
      v38 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v101, 0LL);
      v28 = (struct _DMA_ADAPTER *)v101;
      KeyCommon = v38;
      v78 = (struct _DMA_ADAPTER *)v101;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 80);
        goto LABEL_90;
      }
      v35 = v98;
    }
    LOCK_HIVE_LOAD(v37);
    LOBYTE(v39) = 1;
    CmpLockRegistryFreezeAware(v39);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v74 = 1;
    v73 = 0;
    v89 = 0LL;
    v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v74, (__int64)&v89, v88, SBYTE4(v87), v35, (__int64)&v73, v20);
    v13 = 1;
  }
LABEL_44:
  LODWORD(v79) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v79 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v79, 4uLL, 0LL);
    LOCK_HIVE_LOAD(v40);
    LOBYTE(v41) = 1;
    CmpLockRegistryFreezeAware(v41);
    LODWORD(v79) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v44 )
  {
    NextHive = CmpGetNextHive(i);
    v44 = NextHive;
    if ( !NextHive )
      break;
    LODWORD(v87) = *(_DWORD *)(NextHive + 4808);
    if ( (_DWORD)v87 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v44 + 4816, (_QWORD *)(v44 + 4808), &v87, 4uLL, 0LL);
      LOCK_HIVE_LOAD(v48);
      LOBYTE(v49) = 1;
      CmpLockRegistryFreezeAware(v49);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v44);
      if ( (volatile signed __int32 *)v44 == LastHive )
        break;
      goto LABEL_44;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v78) )
    {
      v50 = *(_DWORD *)(v44 + 4152);
      v51 = *(_DWORD *)(v44 + 160) & 0x8000;
      if ( (v50 & 0x20) == 0 || (v50 & 0x40) != 0 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v44);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 96);
        goto LABEL_89;
      }
      if ( v97 )
      {
        if ( !v51 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v44);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v51 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v44);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 112);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess((__int64)v114, v45, v46, v47);
      v52 = *(_QWORD *)(v44 + 2928);
      v103 = v44;
      v102 = 0LL;
      CmpConstructNameWithStatus(v52, &v102);
      v53 = v105;
      *v105 = v102;
      CmpDetachFromRegistryProcess((__int64)v114);
      if ( !*v53 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v44);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(v44 + 2928));
      *v104 = *(_QWORD *)(v44 + 2928);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v44);
      break;
    }
    if ( (volatile signed __int32 *)v44 == LastHive )
      goto LABEL_69;
  }
  if ( !v103 )
  {
    v35 = v98;
    goto LABEL_73;
  }
  v76 = 1;
LABEL_89:
  v28 = v78;
LABEL_90:
  v54 = KeGetCurrentThread();
  --v54->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v55 = *(_QWORD *)v99;
  v56 = *(_QWORD *)&v99[8];
  if ( *(_BYTE **)(*(_QWORD *)v99 + 8LL) != v99 || **(_BYTE ***)&v99[8] != v99 )
    goto LABEL_123;
  **(_QWORD **)&v99[8] = *(_QWORD *)v99;
  *(_QWORD *)(v55 + 8) = v56;
  v57 = *(_QWORD *)&v99[16];
  if ( *(_BYTE **)&v99[16] == &v99[16] )
    goto LABEL_97;
  v58 = *(_QWORD *)&v99[24];
  v59 = (_QWORD *)(*(_QWORD *)&v99[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v99[16] + 8LL) != &v99[16]
    || **(_BYTE ***)&v99[24] != &v99[16]
    || (**(_QWORD **)&v99[24] = *(_QWORD *)&v99[16],
        *(_QWORD *)(v57 + 8) = v58,
        v60 = (_QWORD *)qword_140C480B8,
        *(__int64 **)qword_140C480B8 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v59 = &CmpAppHiveLoadList;
  v59[1] = v60;
  *v60 = v59;
  qword_140C480B8 = (__int64)v59;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent((PRKEVENT)&v99[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v99[72]);
  if ( LastHive && _InterlockedExchangeAdd(LastHive + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)LastHive);
LABEL_100:
  if ( v28 )
    HalPutDmaAdapter(v28);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
    {
      v169 = 8LL;
      v112 = 1LL;
      v168 = &v112;
      v62 = (int *)&dword_14002309C;
      v94 = KeyCommon;
      v170 = &v94;
      v63 = 6;
      v77 = v76;
      v172 = &v77;
      v174 = &v113;
      v64 = (struct _EVENT_DATA_DESCRIPTOR *)&v167;
      v171 = 4LL;
      v173 = 1LL;
      v113 = 0x1000000LL;
      v175 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)v62, v61, v63, v64);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v110 = 1LL;
        v117 = 8LL;
        v67 = *(unsigned __int16 *)(v20 + 10);
        v68 = *(unsigned __int8 *)(v20 + 394);
        v116 = &v110;
        v69 = v20 + 12;
        v81 = v68;
        v118 = &v92;
        v120 = (char *)&v79 + 4;
        v122 = &v80;
        v124 = &v81;
        v133 = v20 + 108;
        v134 = 12 * v67;
        v138 = v20 + 396;
        v141 = &v111;
        v80 = v67;
        v129 = 12 * v66;
        v131 = v20 + 10;
        v92 = KeyCommon;
        v119 = 4LL;
        WORD2(v79) = v66;
        v121 = 2LL;
        v123 = 2LL;
        v125 = 2LL;
        v126 = v20 + 8;
        v127 = 2LL;
        v128 = v20 + 12;
        v130 = 0;
        v132 = 2LL;
        v135 = 0;
        v136 = v20 + 394;
        v137 = 2LL;
        v139 = 8 * v68;
        v140 = 0;
        v111 = 0x1000000LL;
        v142 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140022DFD, v20 + 394, 0xEu, &v115);
        v65 = dword_140C02130;
      }
      else
      {
        v69 = v20 + 12;
      }
      if ( v65 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v93 = KeyCommon;
        v144 = &v93;
        v82 = *(_WORD *)(v20 + 8);
        v146 = &v82;
        v70 = *(unsigned __int16 *)(v20 + 10);
        v148 = &v83;
        v71 = *(unsigned __int8 *)(v20 + 394);
        v155 = 12 * v82;
        v159 = v20 + 108;
        v160 = 12 * v70;
        v84 = v71;
        v164 = v20 + 396;
        v83 = v70;
        v157 = v20 + 10;
        v162 = v20 + 394;
        v165 = 8 * v71;
        v145 = 4LL;
        v147 = 2LL;
        v149 = 2LL;
        v150 = &v84;
        v151 = 2LL;
        v152 = v20 + 8;
        v153 = 2LL;
        v154 = v69;
        v156 = 0;
        v158 = 2LL;
        v161 = 0;
        v163 = 2LL;
        v166 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&unk_140022F60,
          0LL,
          0LL,
          0xCu,
          &v143);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v108 = 1LL;
    v177 = &v108;
    v62 = &dword_140022DA4;
    v178 = 8LL;
    v179 = &v91;
    v63 = 5;
    v91 = KeyCommon;
    v181 = &v109;
    v64 = &v176;
    v180 = 4LL;
    v109 = 0x1000000LL;
    v182 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
