/*
 * XREFs of CmpLoadHiveThread @ 0x140820360
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x14036C910 (RtlAreBitsClear.c)
 *     ExIsSoftBoot @ 0x140380700 (ExIsSoftBoot.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14038BE1C (CmpApplyAdminSdOnHiveFiles.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmpGetFileSize @ 0x14073078C (CmpGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     RtlAppendStringToString @ 0x14078E880 (RtlAppendStringToString.c)
 *     PsTerminateSystemThread @ 0x1407DC870 (PsTerminateSystemThread.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpMarkCurrentValueDirty @ 0x140820E94 (CmpMarkCurrentValueDirty.c)
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     CmpDiskFullWarning @ 0x140A0EDE4 (CmpDiskFullWarning.c)
 *     CmpInitBackupHive @ 0x140A18034 (CmpInitBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpLogFailureToGetFileSize @ 0x140A1DC00 (CmpLogFailureToGetFileSize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF2444 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmpLoadHiveThread(__int64 a1)
{
  int v1; // edi
  unsigned int v2; // r12d
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  wchar_t *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  wchar_t *v15; // rcx
  wchar_t *v17; // r12
  int v18; // eax
  STRING *v19; // r12
  unsigned int v20; // r15d
  void *v21; // r13
  void *v22; // r12
  NTSTATUS FileSize; // eax
  __int64 v24; // rcx
  int v25; // ebx
  void *v26; // r15
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int128 v34; // xmm0
  __int64 v35; // rax
  int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  ULONG v45; // ebx
  ULONG i; // r15d
  ULONG v47; // eax
  wchar_t *v48; // r15
  __int64 v49; // rax
  __int64 v50; // r12
  struct _KEVENT *v51; // r15
  int v52; // r13d
  signed __int64 *v53; // rsi
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  signed __int64 *v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // [rsp+38h] [rbp-D0h]
  int v82; // [rsp+40h] [rbp-C8h]
  __int64 v83; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v84; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v86; // [rsp+70h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-90h]
  int v88; // [rsp+80h] [rbp-88h] BYREF
  int v89; // [rsp+84h] [rbp-84h] BYREF
  int v90; // [rsp+88h] [rbp-80h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  STRING *Source; // [rsp+98h] [rbp-70h]
  __int64 v93; // [rsp+A0h] [rbp-68h]
  void *v94; // [rsp+A8h] [rbp-60h] BYREF
  void *v95; // [rsp+B0h] [rbp-58h] BYREF
  void *v96; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-40h] BYREF
  STRING *v99; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v100; // [rsp+E0h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2[54]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = 0;
  v93 = a1;
  v2 = a1;
  v84 = 0LL;
  v90 = 0;
  v97 = 0LL;
  v88 = 0;
  v95 = 0LL;
  v100 = 0LL;
  v89 = 0;
  v96 = 0LL;
  LOBYTE(v83) = 0;
  LODWORD(v85) = 0;
  v94 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  *(_QWORD *)Length = 0LL;
  CmpInitializeThreadInfo((__int64)&v100);
  v3 = 23LL * v2;
  BugCheckParameter3 = v2;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v2 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v9 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v9 )
  {
    v17 = v9 + 80;
    v84 = (ULONG_PTR)v9;
    v18 = *((_DWORD *)v9 + 40);
    v86 = v9 + 80;
    if ( (v18 & 0x8001) != 0 )
    {
      if ( CmpMiniNTBoot || CmpVolatileBoot )
      {
        if ( (v18 & 2) != 0 )
        {
          CmpLockRegistry(v6, v5, v7, v8);
          HvLockHiveFlusherExclusive(v9);
          *(_DWORD *)v17 &= ~2u;
          HvUnlockHiveFlusherExclusive(v9);
          CmpUnlockRegistry(v78, v77, v79, v80);
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 21]);
      }
      v52 = v93;
    }
    else
    {
      v19 = (STRING *)&CmpMachineHiveList[v3 + 21];
      Source = v19;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)v19,
                          0,
                          &v94,
                          (int *)&v85,
                          7u,
                          0LL,
                          (__int64)Length,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_99;
      v20 = (16 * ((_DWORD)v85 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 21],
                          4,
                          &v95,
                          &v88,
                          v20,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 16;
        goto LABEL_99;
      }
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 21],
                          5,
                          &v96,
                          &v89,
                          v20,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 32;
        goto LABEL_99;
      }
      v21 = v94;
      LODWORD(inited) = CmpGetFileSize(v94, &v97);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 40;
        goto LABEL_99;
      }
      v22 = v95;
      FileSize = CmpGetFileSize(v95, &v98);
      v25 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v24, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v25, 43);
        *(_QWORD *)&v98 = 0LL;
      }
      v26 = v96;
      v27 = CmpGetFileSize(v96, (_QWORD *)&v98 + 1);
      v29 = v27;
      if ( v27 < 0 )
      {
        CmpLogFailureToGetFileSize(v28, 5LL, (unsigned int)v27);
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v29, 45);
        *((_QWORD *)&v98 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v9);
      CmpLockRegistry(v31, v30, v32, v33);
      HvLockHiveFlusherExclusive(v9);
      v34 = v98;
      v35 = v97;
      *((_QWORD *)v9 + 193) = v21;
      *((_QWORD *)v9 + 197) = v22;
      v17 = v86;
      *((_QWORD *)v9 + 198) = v26;
      *((_QWORD *)v9 + 225) = v35;
      *((_OWORD *)v9 + 113) = v34;
      *(_DWORD *)v17 &= ~2u;
      v36 = *((_DWORD *)v9 + 1028) & 0x8000;
      *((_DWORD *)v9 + 1028) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v9 + 47) = Length[1];
      if ( (int)CmpDoFileSetSizeEx((__int64)v9, 0, (unsigned int)(*((_DWORD *)v9 + 70) + 4096), 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      HvUnlockHiveFlusherExclusive(v9);
      CmpUnlockRegistry(v38, v37, v39, v40);
      if ( v36 )
      {
        LODWORD(inited) = CmpRecoverFlushProtocolStateFromFiles((ULONG_PTR)v9);
        if ( (inited & 0x80000000) != 0LL )
        {
          v19 = Source;
          v1 = 72;
          goto LABEL_99;
        }
      }
      CmpLockRegistry(v42, v41, v43, v44);
      HvLockHiveFlusherExclusive(v9);
      v45 = Length[0];
      if ( *((_DWORD *)v9 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v9 + 22); i += v45 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v9 + 44), i, v45) )
            RtlSetBits((PRTL_BITMAP)(v9 + 44), i, v45);
        }
        v47 = RtlNumberOfSetBits((PRTL_BITMAP)(v9 + 44));
        v17 = v86;
        *((_DWORD *)v9 + 26) = v47;
        *((_DWORD *)v9 + 34) = v45;
      }
      v48 = v9 + 32;
      v49 = *((_QWORD *)v9 + 8);
      if ( *(_DWORD *)(v49 + 4092) || (*(_DWORD *)(v49 + 4088) & 4) != 0 || v36 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v9 + 44));
        *((_DWORD *)v9 + 26) = *((_DWORD *)v9 + 22);
      }
      HvUnlockHiveFlusherExclusive(v9);
      CmpUnlockRegistry(v60, v59, v61, v62);
      CmpLockRegistryExclusive();
      v52 = v93;
      if ( (_DWORD)v93 == 3 )
      {
        v63 = (signed __int64 *)(v9 + 36);
        v64 = KeAbPreAcquire((__int64)v63, 0LL);
        if ( _InterlockedCompareExchange64(v63, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v63, 0, v64, (__int64)v63);
        if ( v64 )
          *(_BYTE *)(v64 + 18) = 1;
        CmpMarkCurrentValueDirty(v84);
        if ( _InterlockedCompareExchange64(v63, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v63);
        KeAbPostRelease((ULONG_PTR)v63);
        v9 = (wchar_t *)v84;
      }
      CmpMachineHiveList[v3 + 6] = v9;
      LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v9);
      if ( (inited & 0x80000000) != 0LL )
      {
        v19 = Source;
        v1 = 80;
LABEL_99:
        *((_QWORD *)v9 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v9;
        SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v1);
        CmpPuntBoot = 1;
        v99 = v19;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v99, 1, &v90);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3, (int)inited);
      }
      CmpUnlockRegistry(v66, v65, v67, v68);
      CmpFinishBeingActiveFlusherAndReconciler(v9);
      if ( *(_DWORD *)(*(_QWORD *)v48 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v48 + 4088LL) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          CmpFlushHive((ULONG_PTR)v9, 0xCu);
        CmpLockRegistry(v70, v69, v71, v72);
        HvLockHiveFlusherExclusive(v9);
        *(_DWORD *)(*(_QWORD *)v48 + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)v48 + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive(v9);
        CmpUnlockRegistry(v74, v73, v75, v76);
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v9, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v9 + 1028) |= 4u;
    if ( v52 == 3 )
    {
      CmpLockRegistry(v6, v5, v7, v8);
      v53 = (signed __int64 *)(v9 + 36);
      v54 = KeAbPreAcquire((__int64)v53, 0LL);
      if ( _InterlockedCompareExchange64(v53, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v53, 0, v54, (__int64)v53);
      if ( v54 )
        *(_BYTE *)(v54 + 18) = 1;
      *(_DWORD *)v17 |= 0x200u;
      if ( _InterlockedCompareExchange64(v53, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v53);
      KeAbPostRelease((ULONG_PTR)v53);
      CmpUnlockRegistry(v56, v55, v57, v58);
      v9 = (wchar_t *)v84;
    }
    goto LABEL_13;
  }
  inited = (int)CmpInitHiveFromFile(
                  (const UNICODE_STRING *)&CmpMachineHiveList[v3 + 21],
                  (int)CmpMachineHiveList[v3 + 4],
                  &v84,
                  (_BYTE *)&CmpMachineHiveList[v3 + 7] + 3,
                  0x1590001u,
                  0LL,
                  v81,
                  v82,
                  (__int64)&v83,
                  BugCheckParameter2);
  v5 = 3221225524LL;
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || (v10 = (int)CmpMachineHiveList[v3 + 4], (v10 & 0x8000) != 0)
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_18;
  }
  if ( (_DWORD)inited == -1073741431 )
  {
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v6) )
      goto LABEL_18;
LABEL_90:
    CmpPuntBoot = 1;
    KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, inited);
  }
  if ( (inited & 0x80000000) != 0LL )
    goto LABEL_90;
  v9 = (wchar_t *)v84;
  if ( (v10 & 0x8000) == 0 && (!*(_QWORD *)(v84 + 1576) || !*(_QWORD *)(v84 + 1584)) )
    goto LABEL_90;
  *(_DWORD *)(v84 + 4112) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
  CmpMachineHiveList[v3 + 6] = v9;
  if ( (_BYTE)v83 )
  {
    CmpInitRmLogOnLoad = 1;
    v50 = 7LL;
    v51 = &stru_140C026D0;
    do
    {
      KeSetEvent(v51, 0, 0);
      v51 = (struct _KEVENT *)((char *)v51 + 184);
      --v50;
    }
    while ( v50 );
  }
  if ( (*((_DWORD *)v9 + 40) & 0x8001) == 0
    && CmpDoIdleProcessing
    && (int)CmpInitBackupHive(v9, CmpMachineHiveList[v3]) < 0 )
  {
    CmpDoIdleProcessing = 0;
  }
LABEL_13:
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v6, v5, v7) )
  {
    if ( (*((_DWORD *)v9 + 40) & 0x8001) == 0 )
    {
      if ( *((_QWORD *)v9 + 193) )
      {
        v14 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v9, (ULONG_PTR)CmpMachineHiveList[v3]);
        LODWORD(inited) = v14;
        if ( v14 < 0 )
          KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v9, (ULONG_PTR)CmpMachineHiveList[v3], v14);
      }
    }
    CmpReleaseShutdownRundown(v12, v11, v13);
  }
  else
  {
    LODWORD(inited) = -1073741431;
  }
LABEL_18:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v15 = CmpMachineHiveList[v3 + 22];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_OWORD *)&CmpMachineHiveList[v3 + 21] = 0LL;
  }
  PsTerminateSystemThread(inited);
  return CmCleanupThreadInfo((__int64 *)&v100);
}
