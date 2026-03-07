__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  void *Pool2; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  int VolumeClusterSize; // eax
  int ContextForFile; // ebx
  int v18; // ebx
  __int64 v19; // rax
  ULONG_PTR v20; // rsi
  __int64 v21; // rcx
  void *v22; // rdx
  void *v23; // rdx
  void *v24; // rdx
  __int64 *v25; // r13
  __int64 v26; // r8
  __int64 (__fastcall *v27)(unsigned int, char, unsigned int); // rax
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // r15d
  int started; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG_PTR *v44; // rax
  __int64 v46; // rax
  void *v47; // rdx
  __int64 v48; // rax
  signed __int8 v49; // cf
  __int64 v50; // rbx
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  signed __int64 v53; // rdx
  ULONG_PTR v54; // rtt
  int v55; // eax
  __int64 v56; // rcx
  int v57; // r9d
  int v58; // r9d
  int v59; // edx
  int v60; // r9d
  int v61; // r10d
  __int64 v62; // rax
  int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+30h] [rbp-D0h]
  char v66; // [rsp+70h] [rbp-90h]
  char v67; // [rsp+71h] [rbp-8Fh]
  int v68; // [rsp+78h] [rbp-88h] BYREF
  __int16 v69; // [rsp+7Ch] [rbp-84h]
  __int16 v70; // [rsp+80h] [rbp-80h]
  __int16 v71; // [rsp+84h] [rbp-7Ch]
  unsigned int v72; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+8Ch] [rbp-74h]
  __int16 v74; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+94h] [rbp-6Ch]
  unsigned int v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-58h]
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v82; // [rsp+C8h] [rbp-38h]
  __int128 v83; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v85)(int, int, int, int, ULONG); // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  __int16 *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  unsigned int *v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  int *v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  __int64 v96; // [rsp+190h] [rbp+90h]
  __int64 v97; // [rsp+198h] [rbp+98h]
  __int64 v98; // [rsp+1A0h] [rbp+A0h]
  int v99; // [rsp+1A8h] [rbp+A8h]
  int v100; // [rsp+1ACh] [rbp+ACh]
  __int64 v101; // [rsp+1B0h] [rbp+B0h]
  __int64 v102; // [rsp+1B8h] [rbp+B8h]
  __int64 v103; // [rsp+1C0h] [rbp+C0h]
  int v104; // [rsp+1C8h] [rbp+C8h]
  int v105; // [rsp+1CCh] [rbp+CCh]
  __int64 v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1D8h] [rbp+D8h]
  __int64 v108; // [rsp+1E0h] [rbp+E0h]
  int v109; // [rsp+1E8h] [rbp+E8h]
  int v110; // [rsp+1ECh] [rbp+ECh]
  __int64 *v111; // [rsp+1F0h] [rbp+F0h]
  __int64 v112; // [rsp+1F8h] [rbp+F8h]

  v73 = a2;
  v12 = a3;
  v78 = a7;
  Pool2 = 0LL;
  v79 = a9;
  v81 = a10;
  v77 = a11;
  v82 = a1;
  v72 = a4;
  v80 = a5;
  v85 = 0LL;
  v76 = 0;
  v66 = 0;
  v67 = 0;
  v83 = 0LL;
  v84 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    v55 = 0;
    goto LABEL_127;
  }
  if ( (a3 & 0xFD617CEC) != 0 )
  {
    v63 = 16;
LABEL_108:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, v63);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v63 = 32;
    goto LABEL_108;
  }
  if ( !a5 && a2 == 1 )
  {
    v63 = 48;
    goto LABEL_108;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      v63 = 64;
      goto LABEL_108;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v63 = 80;
      goto LABEL_108;
    }
    v14 = *(_QWORD *)(a6 + 8);
    if ( v14 && !a4 )
    {
      v63 = 96;
      goto LABEL_108;
    }
    v15 = *(_QWORD *)(a6 + 16);
    if ( v15 && a4 != 2 )
    {
      v63 = 112;
      goto LABEL_108;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v14 || v15) )
    {
      v63 = 128;
      goto LABEL_108;
    }
  }
  v66 = CmpAcquireShutdownRundown();
  if ( !v66 )
    return (unsigned int)-1073741431;
  v75 = 1;
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
        goto LABEL_123;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 32LL, 892947779LL);
  if ( !Pool2 )
  {
    ContextForFile = -1073741801;
    goto LABEL_123;
  }
  v18 = v12 & 0x2000000;
  v68 = v12 & 0x2000000;
  if ( (v12 & 0x2000000) != 0 )
    v19 = CmpAllocateForNonPagedHive(0x12D8u, 0, 0x30314D43u);
  else
    v19 = CmpAllocate(4824LL, 0LL, 808537411LL);
  v20 = v19;
  if ( v19 )
  {
    CmpHiveInitialize(v19, Pool2);
    if ( !a6 )
      goto LABEL_37;
    if ( *(_QWORD *)a6 )
    {
      ContextForFile = ObDuplicateObject(
                         (ULONG_PTR)PsInitialSystemProcess,
                         *(void **)a6,
                         0LL,
                         (unsigned __int64 *)(v20 + 1544),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_138;
      v21 = *(_QWORD *)(v20 + 1544);
      v69 = 256;
      ZwSetInformationObject(v21, 4LL);
    }
    v22 = *(void **)(a6 + 24);
    if ( v22 )
    {
      ContextForFile = ObDuplicateObject(
                         (ULONG_PTR)PsInitialSystemProcess,
                         v22,
                         0LL,
                         (unsigned __int64 *)(v20 + 1560),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_138;
      v56 = *(_QWORD *)(v20 + 1560);
      v70 = 256;
      ZwSetInformationObject(v56, 4LL);
    }
    if ( v72 == 1 )
    {
      v47 = *(void **)(a6 + 8);
      if ( !v47 )
        goto LABEL_36;
      v25 = (__int64 *)(v20 + 1552);
      ContextForFile = ObDuplicateObject(
                         (ULONG_PTR)PsInitialSystemProcess,
                         v47,
                         0LL,
                         (unsigned __int64 *)(v20 + 1552),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_138;
    }
    else
    {
      if ( v72 != 2 )
        goto LABEL_36;
      v23 = *(void **)(a6 + 8);
      if ( v23 )
      {
        ContextForFile = ObDuplicateObject(
                           (ULONG_PTR)PsInitialSystemProcess,
                           v23,
                           0LL,
                           (unsigned __int64 *)(v20 + 1576),
                           0,
                           512,
                           2,
                           0);
        if ( ContextForFile < 0 )
          goto LABEL_138;
        ZwSetInformationObject(*(_QWORD *)(v20 + 1576), 4LL);
      }
      v24 = *(void **)(a6 + 16);
      if ( !v24 )
        goto LABEL_36;
      v25 = (__int64 *)(v20 + 1584);
      ContextForFile = ObDuplicateObject(
                         (ULONG_PTR)PsInitialSystemProcess,
                         v24,
                         0LL,
                         (unsigned __int64 *)(v20 + 1584),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_138;
      v71 = 256;
    }
    ZwSetInformationObject(*v25, 4LL);
LABEL_36:
    v18 = v68;
LABEL_37:
    if ( (a8 & 0x8000000) != 0 )
      *(_DWORD *)(v20 + 4112) |= 0x80u;
    if ( a8 < 0 )
      *(_DWORD *)(v20 + 4112) |= 0x800u;
    CmpAttachToRegistryProcess(&ApcState);
    v67 = 1;
    v27 = (__int64 (__fastcall *)(unsigned int, char, unsigned int))CmpAllocate;
    if ( v18 )
      v27 = CmpAllocateForNonPagedHive;
    *(_QWORD *)&v83 = v27;
    *((_QWORD *)&v83 + 1) = CmpFree;
    *((_QWORD *)&v84 + 1) = CmpFileWrite;
    v85 = CmpFileRead;
    v28 = v73;
    *(_QWORD *)(v20 + 56) = a12;
    *(_QWORD *)a12 = v20;
    if ( v28 == 5 || v28 == 2 || !v28 && a6 && *(_QWORD *)a6 )
    {
      v12 |= 0x20000u;
      ContextForFile = CmpVolumeManagerGetContextForFile(
                         (__int64)CmpAllocateForNonPagedHive,
                         *(void **)a6,
                         v26,
                         (PPRIVILEGE_SET *)(v20 + 4792));
      if ( ContextForFile < 0 )
        goto LABEL_138;
      if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v20 + 4792))
        || (a8 & 0x2000000) != 0 )
      {
        v12 |= 0x800000u;
      }
      v30 = v73;
      LOBYTE(v29) = v73 == 0;
      started = HvHiveStartFileBacked(
                  v20,
                  v29,
                  v12,
                  v72,
                  (__int64)&v83,
                  v75,
                  v65,
                  v78,
                  a8,
                  v79,
                  v81,
                  v77,
                  (__int64)&v76,
                  a12);
      ContextForFile = started;
      if ( started < 0 )
      {
        SetFailureLocation(a12, 0, 1, started, 228);
        goto LABEL_138;
      }
    }
    else
    {
      v32 = HvHiveStartMemoryBacked(v20, v80, (__int64)&v83, v75, v78, a8, v79, v81, v77, (__int64)&v76, a12);
      ContextForFile = v32;
      if ( v32 < 0 )
      {
        v64 = 232;
        goto LABEL_134;
      }
      v30 = v73;
    }
    if ( (v12 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
    {
      v46 = *(_QWORD *)(v20 + 64);
      if ( *(_DWORD *)(v46 + 24) < 6u || (*(_DWORD *)(v46 + 144) & 2) == 0 )
      {
        ContextForFile = -1073741811;
LABEL_138:
        CmpDestroyHive((PVOID)v20);
        if ( !v67 )
          goto LABEL_76;
LABEL_75:
        CmpDetachFromRegistryProcess(&ApcState);
        goto LABEL_76;
      }
    }
    if ( ((v30 - 1) & 0xFFFFFFFA) != 0 || v30 == 6 )
      goto LABEL_54;
    v32 = CmCheckRegistry(v20);
    ContextForFile = v32;
    if ( v32 == -2147483606 )
    {
      if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
      {
        LODWORD(v77) = v58;
        v88 = &v77;
        v90 = &v74;
        v59 = *(unsigned __int16 *)(a12 + 8);
        v60 = *(unsigned __int16 *)(a12 + 10);
        v96 = a12 + 8;
        v92 = &v72;
        v98 = a12 + 12;
        v61 = *(unsigned __int8 *)(a12 + 394);
        v99 = 12 * v59;
        v103 = a12 + 108;
        v104 = 12 * v60;
        v108 = a12 + 396;
        v111 = &v80;
        LOWORD(v68) = v61;
        v74 = v59;
        LOWORD(v72) = v60;
        v101 = a12 + 10;
        v106 = a12 + 394;
        v89 = 4LL;
        v91 = 2LL;
        v93 = 2LL;
        v94 = &v68;
        v95 = 2LL;
        v97 = 2LL;
        v100 = 0;
        v102 = 2LL;
        v105 = 0;
        v107 = 2LL;
        v109 = 8 * v61;
        v110 = 0;
        v80 = 0x1000000LL;
        v112 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)word_1400373E2,
          0LL,
          0LL,
          0xDu,
          &v87);
      }
      goto LABEL_54;
    }
    if ( v32 >= 0 )
    {
LABEL_54:
      if ( (a8 & 0x800000) != 0 )
      {
        v62 = *(_QWORD *)(v20 + 64);
        if ( *(_DWORD *)(v62 + 24) < 6u || (*(_DWORD *)(v62 + 144) & 2) == 0 )
        {
          HvMarkBaseBlockDirty(v20);
          *(_DWORD *)(*(_QWORD *)(v20 + 64) + 24LL) = 6;
          *(_DWORD *)(*(_QWORD *)(v20 + 64) + 144LL) |= 2u;
        }
      }
      CmpReorganizeHive(v20);
      CmpLockRegistry(v34, v33, v35, v36);
      v37 = KeAbPreAcquire(v20 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v20 + 72), 0, v37, v20 + 72);
      if ( v37 )
        *(_BYTE *)(v37 + 18) = 1;
      v38 = KeAbPreAcquire(v20 + 80, 0LL);
      v39 = v38;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 80), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 80), v38, v20 + 80);
      if ( v39 )
        *(_BYTE *)(v39 + 18) = 1;
      if ( v73 )
      {
        ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v20);
      }
      else
      {
        *(_BYTE *)(v20 + 195) = 1;
        ContextForFile = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 80));
      KeAbPostRelease(v20 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 72));
      KeAbPostRelease(v20 + 72);
      CmpUnlockRegistry(v41, v40, v42, v43);
      if ( ContextForFile >= 0 )
      {
        if ( (a8 & 0x1000000) != 0 )
        {
          *(_QWORD *)(v20 + 1616) = v20 + 1608;
          *(_QWORD *)(v20 + 1608) = v20 + 1608;
        }
        else
        {
          v48 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
          v49 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v50 = v48;
          if ( v49 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v48, (__int64)&CmpHiveListHeadLock);
          if ( v50 )
            *(_BYTE *)(v50 + 18) = 1;
          v51 = (_QWORD *)qword_140D54C90;
          v52 = (_QWORD *)(v20 + 1608);
          if ( *(__int64 **)qword_140D54C90 != &CmpHiveListHead )
            __fastfail(3u);
          *v52 = &CmpHiveListHead;
          *(_QWORD *)(v20 + 1616) = v51;
          *v51 = v52;
          qword_140D54C90 = v20 + 1608;
          _m_prefetchw(&CmpHiveListHeadLock);
          v53 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v53 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v54 = CmpHiveListHeadLock,
                v54 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v53,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          CmpRecheckHiveVolumePolicy(v20);
        }
        v44 = v82;
        *(_QWORD *)(v20 + 56) = 0LL;
        *v44 = v20;
        CmpReleaseShutdownRundown();
        v66 = 0;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
          CmpLogHiveInitializeEvent(v20, v73, v78, v76);
        ContextForFile = 0;
        goto LABEL_75;
      }
      v64 = 256;
      v57 = ContextForFile;
      goto LABEL_136;
    }
    v64 = 240;
LABEL_134:
    v57 = v32;
LABEL_136:
    SetFailureLocation(a12, 0, 1, v57, v64);
    goto LABEL_138;
  }
  ContextForFile = -1073741670;
  v55 = 176;
LABEL_127:
  SetFailureLocation(a12, 0, 1, ContextForFile, v55);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_76:
  if ( v66 )
LABEL_123:
    CmpReleaseShutdownRundown();
  return (unsigned int)ContextForFile;
}
