/*
 * XREFs of CmpCreateHive @ 0x14071D9E8
 * Callers:
 *     CmpInitHiveFromFile @ 0x1406E9D98 (CmpInitHiveFromFile.c)
 *     CmpCreateTemporaryHive @ 0x14072B2BC (CmpCreateTemporaryHive.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A5AA10 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A5ABA8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140361750 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x1403EFE7C (CmpAdjustFileCFSafety.c)
 *     ZwSetInformationObject @ 0x1403FA5A0 (ZwSetInformationObject.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x14069FDFC (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpLockHiveListExclusive @ 0x14071C674 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14071C694 (CmpUnlockHiveList.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14071D5AC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvUnlockHiveWriter @ 0x14071FE3C (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14071FE6C (HvLockHiveWriter.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x140720054 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x1407201B0 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407203B0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140720A98 (CmCheckRegistry.c)
 *     HvHiveStartFileBacked @ 0x140721038 (HvHiveStartFileBacked.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140721364 (CmpVolumeManagerGetContextForFile.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     HvHiveStartMemoryBacked @ 0x14076FAD4 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x14086A8C0 (CmpLogHiveInitializeEvent.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  ULONG_PTR v13; // rdi
  BOOLEAN v14; // r13
  int ContextForFile; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS VolumeClusterSize; // eax
  __int64 v19; // rax
  void *v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  void *v23; // rcx
  void *v24; // rcx
  __int64 *v25; // r13
  void *v26; // rdx
  void *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // r15d
  int started; // eax
  int v34; // r9d
  __int64 v36; // rax
  unsigned int v37; // r9d
  int v38; // edx
  int v39; // r9d
  int v40; // r10d
  __int64 v41; // rax
  __int64 v42; // r12
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  ULONG_PTR *v45; // rax
  int v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+30h] [rbp-D0h]
  BOOLEAN v49; // [rsp+70h] [rbp-90h]
  _WORD ObjectInformation[2]; // [rsp+74h] [rbp-8Ch] BYREF
  char v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v54; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v61; // [rsp+B8h] [rbp-48h]
  __int128 v62; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v64)(__int64, unsigned int, ULONG, char *, ULONG); // [rsp+E0h] [rbp-20h]
  _OWORD v65[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  _WORD *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  unsigned int *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int64 v77; // [rsp+190h] [rbp+90h]
  int v78; // [rsp+198h] [rbp+98h]
  int v79; // [rsp+19Ch] [rbp+9Ch]
  __int64 v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  __int64 v82; // [rsp+1B0h] [rbp+B0h]
  int v83; // [rsp+1B8h] [rbp+B8h]
  int v84; // [rsp+1BCh] [rbp+BCh]
  __int64 v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  __int64 v87; // [rsp+1D0h] [rbp+D0h]
  int v88; // [rsp+1D8h] [rbp+D8h]
  int v89; // [rsp+1DCh] [rbp+DCh]
  __int64 *v90; // [rsp+1E0h] [rbp+E0h]
  __int64 v91; // [rsp+1E8h] [rbp+E8h]

  v53 = a2;
  v12 = a3;
  v56 = a7;
  v13 = 0LL;
  v14 = 0;
  v60 = a9;
  v59 = a10;
  v58 = a11;
  v61 = a1;
  v54 = a4;
  v57 = a5;
  v64 = 0LL;
  v55 = 0;
  v51 = 0;
  v62 = 0LL;
  v63 = 0LL;
  memset(v65, 0, sizeof(v65));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_70;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    v46 = 16;
LABEL_6:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, v46);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v46 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v46 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v46 = 64;
      goto LABEL_6;
    }
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      v46 = 80;
      goto LABEL_6;
    }
    v16 = a6[1];
    if ( v16 && !a4 )
    {
      v46 = 96;
      goto LABEL_6;
    }
    v17 = a6[2];
    if ( v17 && a4 != 2 )
    {
      v46 = 112;
      goto LABEL_6;
    }
    if ( a6[3] && (*a6 || v16 || v17) )
    {
      v46 = 128;
      goto LABEL_6;
    }
  }
  v49 = CmpAcquireShutdownRundown();
  v14 = v49;
  if ( !v49 )
    return (unsigned int)-1073741431;
  v52 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6, &v52);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
        goto LABEL_74;
      }
    }
  }
  v19 = CmpAllocate(0x12E8uLL);
  v13 = v19;
  if ( !v19 )
  {
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
    goto LABEL_74;
  }
  CmpHiveInitialize(v19);
  if ( !a6 )
    goto LABEL_56;
  if ( *a6 )
  {
    ContextForFile = ObDuplicateObject(PsInitialSystemProcess, (void *)*a6, 0LL, (__int64 *)(v13 + 1536), 0, 512, 2, 0);
    if ( ContextForFile < 0 )
      goto LABEL_69;
    v23 = *(void **)(v13 + 1536);
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v23, ObjectHandleFlagInformation, ObjectInformation, 2u);
  }
  v20 = (void *)a6[3];
  if ( v20 )
  {
    ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v20, 0LL, (__int64 *)(v13 + 1552), 0, 512, 2, 0);
    if ( ContextForFile < 0 )
      goto LABEL_69;
    v24 = *(void **)(v13 + 1552);
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v24, ObjectHandleFlagInformation, ObjectInformation, 2u);
  }
  if ( v54 == 1 )
  {
    v20 = (void *)a6[1];
    if ( v20 )
    {
      v25 = (__int64 *)(v13 + 1544);
      goto LABEL_54;
    }
  }
  else if ( v54 == 2 )
  {
    v26 = (void *)a6[1];
    if ( v26 )
    {
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v26, 0LL, (__int64 *)(v13 + 1568), 0, 512, v54, 0);
      if ( ContextForFile < 0 )
        goto LABEL_69;
      v27 = *(void **)(v13 + 1568);
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v27, ObjectHandleFlagInformation, ObjectInformation, 2u);
    }
    v20 = (void *)a6[2];
    if ( v20 )
    {
      v25 = (__int64 *)(v13 + 1576);
LABEL_54:
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v20, 0LL, v25, 0, 512, 2, 0);
      if ( ContextForFile >= 0 )
      {
        v28 = (void *)*v25;
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v28, ObjectHandleFlagInformation, ObjectInformation, 2u);
        goto LABEL_56;
      }
LABEL_69:
      v14 = v49;
LABEL_70:
      if ( v13 )
        CmpDestroyHive((PVOID)v13);
      if ( !v51 )
        goto LABEL_74;
      goto LABEL_73;
    }
  }
LABEL_56:
  if ( (a8 & 0x8000000) != 0 )
    *(_DWORD *)(v13 + 4152) |= 0x80u;
  if ( a8 < 0 )
    *(_DWORD *)(v13 + 4152) |= 0x800u;
  CmpAttachToRegistryProcess((__int64)v65, (__int64)v20, v21, v22);
  v51 = 1;
  *(_QWORD *)&v62 = CmpAllocate;
  *((_QWORD *)&v62 + 1) = CmpFree;
  *((_QWORD *)&v63 + 1) = CmpFileWrite;
  v64 = CmpFileRead;
  v31 = v53;
  *(_QWORD *)(v13 + 56) = a12;
  *(_QWORD *)a12 = v13;
  if ( v31 != 2 && v31 != 5 && (v31 || !a6 || !*a6) )
  {
    v32 = v53;
    started = HvHiveStartMemoryBacked(v13, v57, (__int64)&v62, v52, v56, v60, v59, v58, (__int64)&v55, a12);
    ContextForFile = started;
    if ( started < 0 )
    {
      v47 = 232;
LABEL_67:
      v34 = started;
LABEL_68:
      SetFailureLocation(a12, 0, 1, v34, v47);
      goto LABEL_69;
    }
    goto LABEL_88;
  }
  v12 |= 0x20000u;
  ContextForFile = CmpVolumeManagerGetContextForFile(v29, *a6, v30, v13 + 4832);
  if ( ContextForFile < 0 )
    goto LABEL_69;
  if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v13 + 4832))
    || (a8 & 0x2000000) != 0
    || (v12 & 0x8000) != 0
    || (a8 & 0x40) != 0 )
  {
    goto LABEL_85;
  }
  if ( (a8 & 0x20) != 0 )
    goto LABEL_86;
  if ( (int)CmpAdjustFileCFSafety((HANDLE)*a6, 1) < 0 )
LABEL_85:
    v12 |= 0x800000u;
  else
    *(_DWORD *)(v13 + 4152) |= 0x10000u;
LABEL_86:
  v32 = v53;
  started = HvHiveStartFileBacked(v13, (__int64)&v62, v52, v48, v56, v60, v59, v58, (__int64)&v55, a12);
  ContextForFile = started;
  if ( started < 0 )
  {
    v47 = 228;
    goto LABEL_67;
  }
LABEL_88:
  if ( (v12 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
  {
    v36 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v36 + 24) < 6u || (*(_DWORD *)(v36 + 144) & 2) == 0 )
    {
      ContextForFile = -1073741811;
      goto LABEL_69;
    }
  }
  if ( ((v32 - 1) & 0xFFFFFFFA) == 0 && v32 != 6 )
  {
    ContextForFile = CmCheckRegistry(v13);
    if ( ContextForFile == -2147483606 )
    {
      if ( (unsigned int)dword_140C02130 <= 5 )
      {
        ContextForFile = 0;
      }
      else
      {
        ContextForFile = 0;
        if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
        {
          v54 = v37;
          v67 = &v54;
          v69 = ObjectInformation;
          v38 = *(unsigned __int16 *)(a12 + 8);
          v39 = *(unsigned __int16 *)(a12 + 10);
          v75 = a12 + 8;
          v71 = &v52;
          v77 = a12 + 12;
          v40 = *(unsigned __int8 *)(a12 + 394);
          v78 = 12 * v38;
          v82 = a12 + 108;
          v83 = 12 * v39;
          v87 = a12 + 396;
          v90 = &v57;
          LOWORD(v53) = v40;
          ObjectInformation[0] = v38;
          LOWORD(v52) = v39;
          v80 = a12 + 10;
          v85 = a12 + 394;
          v68 = 4LL;
          v70 = 2LL;
          v72 = 2LL;
          v73 = &v53;
          v74 = 2LL;
          v76 = 2LL;
          v79 = 0;
          v81 = 2LL;
          v84 = 0;
          v86 = 2LL;
          v88 = 8 * v40;
          v89 = 0;
          v57 = 0x1000000LL;
          v91 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&word_1400233EE,
            0LL,
            0LL,
            0xDu,
            &v66);
        }
      }
    }
    if ( ContextForFile < 0 )
    {
      v47 = 240;
LABEL_102:
      v34 = ContextForFile;
      goto LABEL_68;
    }
  }
  if ( (a8 & 0x800000) != 0 )
  {
    v41 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v41 + 24) < 6u || (*(_DWORD *)(v41 + 144) & 2) == 0 )
    {
      HvMarkBaseBlockDirty(v13);
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 24LL) = 6;
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 144LL) |= 2u;
    }
  }
  v42 = v56;
  CmpReorganizeHive(v13);
  CmpLockRegistry();
  HvLockHiveFlusherShared(v13);
  HvLockHiveWriter(v13);
  if ( v32 )
  {
    ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v13);
  }
  else
  {
    *(_BYTE *)(v13 + 191) = 1;
    ContextForFile = 0;
  }
  HvUnlockHiveWriter(v13);
  HvUnlockHiveFlusherShared(v13);
  CmpUnlockRegistry();
  if ( ContextForFile < 0 )
  {
    v47 = 256;
    goto LABEL_102;
  }
  v43 = (_QWORD *)(v13 + 1600);
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v13 + 1608) = v13 + 1600;
    *v43 = v43;
  }
  else
  {
    CmpLockHiveListExclusive();
    v44 = (_QWORD *)qword_140D2E918;
    if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
      __fastfail(3u);
    *v43 = &CmpHiveListHead;
    *(_QWORD *)(v13 + 1608) = v44;
    *v44 = v43;
    qword_140D2E918 = v13 + 1600;
    CmpUnlockHiveList();
    CmpRecheckHiveVolumePolicy(v13);
  }
  v45 = v61;
  *(_QWORD *)(v13 + 56) = 0LL;
  *v45 = v13;
  CmpReleaseShutdownRundown();
  v14 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v13, v32, v42, v55);
  ContextForFile = 0;
LABEL_73:
  CmpDetachFromRegistryProcess((__int64)v65);
LABEL_74:
  if ( v14 )
    CmpReleaseShutdownRundown();
  return (unsigned int)ContextForFile;
}
