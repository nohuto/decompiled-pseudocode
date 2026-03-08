/*
 * XREFs of CmpFlushHive @ 0x1406BEA70
 * Callers:
 *     CmpDoFlushAll @ 0x140243DB8 (CmpDoFlushAll.c)
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1406BD800 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmpDoReconcileNextHive @ 0x140732AC0 (CmpDoReconcileNextHive.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     CmpTransMgrSyncHive @ 0x140798AD0 (CmpTransMgrSyncHive.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpIsWriteQueueActive @ 0x140244040 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x140244090 (CmpAcquireWriteQueue.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HvUnCOWReconciledPages @ 0x1402D7168 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1402D7420 (RtlMergeBitMaps.c)
 *     HvMarkDirtyForFlush @ 0x1402FF80C (HvMarkDirtyForFlush.c)
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpLogFlushPhaseStart @ 0x1406BE958 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1406BE9D4 (CmpLogFlushPhaseEnd.c)
 *     CmpTraceHiveFlushStop @ 0x1406BF374 (CmpTraceHiveFlushStop.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x1406BF454 (CmpGenerateFlushControlData.c)
 *     CmpReleaseWriteQueue @ 0x1406C0054 (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406C0080 (CmpWakeWriteQueueWaiters.c)
 *     HvStoreModifiedData @ 0x14072D6A8 (HvStoreModifiedData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140730604 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1407307FC (HvpLogTypeToLogArrayIndex.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140731AB4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteLogFile @ 0x140731BB0 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1407320E4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvWriteHivePrimaryFile @ 0x14073216C (HvWriteHivePrimaryFile.c)
 *     HvIsCurrentLogSwappable @ 0x140732440 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x140732470 (HvSwapLogFiles.c)
 *     HvFreeDirtyData @ 0x14074C830 (HvFreeDirtyData.c)
 *     HvFreeUnreconciledData @ 0x14078B7A4 (HvFreeUnreconciledData.c)
 *     HvResetLogFileStatusAll @ 0x140798BB4 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140A1DCD0 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140A1DD50 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140A1DE3C (HvFoldBackUnreconciledData.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  int valid; // r15d
  REGHANDLE v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  char v16; // r13
  unsigned int v17; // r14d
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KEVENT *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KEVENT *v46; // r13
  bool v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // esi
  ULONGLONG v65; // rax
  unsigned int v66; // r9d
  __int64 v67; // rax
  unsigned int v68; // r9d
  ULONGLONG v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  unsigned int v79; // ebx
  __int64 v80; // rcx
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+30h] [rbp-D8h]
  __int64 v83; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v84; // [rsp+40h] [rbp-C8h]
  PRKEVENT Event; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT Event_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+60h] [rbp-A8h]
  int v88; // [rsp+68h] [rbp-A0h]
  int v89; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v90; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v91; // [rsp+78h] [rbp-90h] BYREF
  int v92; // [rsp+80h] [rbp-88h] BYREF
  int v93; // [rsp+84h] [rbp-84h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v95[5]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96[2]; // [rsp+E8h] [rbp-20h] BYREF
  PRKEVENT *p_Event; // [rsp+108h] [rbp+0h]
  int v98; // [rsp+110h] [rbp+8h]
  int v99; // [rsp+114h] [rbp+Ch]
  int *v100; // [rsp+118h] [rbp+10h]
  int v101; // [rsp+120h] [rbp+18h]
  int v102; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+128h] [rbp+20h] BYREF
  _DWORD *v104; // [rsp+148h] [rbp+40h]
  __int64 v105; // [rsp+150h] [rbp+48h]
  __int64 v106; // [rsp+158h] [rbp+50h]
  _DWORD v107[2]; // [rsp+160h] [rbp+58h] BYREF
  _DWORD *v108; // [rsp+168h] [rbp+60h]
  __int64 v109; // [rsp+170h] [rbp+68h]
  __int64 v110; // [rsp+178h] [rbp+70h]
  _DWORD v111[2]; // [rsp+180h] [rbp+78h] BYREF
  unsigned int *v112; // [rsp+188h] [rbp+80h]
  __int64 v113; // [rsp+190h] [rbp+88h]

  v2 = (unsigned __int16 *)(a1 + 1856);
  v87 = 0LL;
  v88 = 0;
  v89 = 0;
  valid = 0;
  *(_OWORD *)Event_8 = 0LL;
  if ( (unsigned int)dword_140C04328 > 4 )
  {
    v90 = a2;
    v104 = v107;
    v106 = *(_QWORD *)(a1 + 1864);
    v107[0] = *v2;
    v108 = v111;
    v110 = *(_QWORD *)(a1 + 1848);
    v111[0] = *(unsigned __int16 *)(a1 + 1840);
    v112 = &v90;
    v105 = 2LL;
    v107[1] = 0;
    v109 = 2LL;
    v111[1] = 0;
    v113 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)word_1400367CA, 0LL, 0LL, 7u, &v103);
  }
  v6 = EtwpRegTraceHandle;
  v91 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v65 = *(_QWORD *)(a1 + 1848);
    v66 = 0;
    WORD2(v83) = 0;
    if ( v65 )
    {
      v95[0].Ptr = v65;
      v66 = 1;
      v95[0].Size = *(unsigned __int16 *)(a1 + 1840);
      v95[0].Reserved = 0;
    }
    v67 = v66;
    v68 = v66 + 1;
    v95[v67].Ptr = (ULONGLONG)&v83 + 4;
    *(_QWORD *)&v95[v67].Size = 2LL;
    v69 = *((_QWORD *)v2 + 1);
    if ( v69 )
    {
      v70 = v68++;
      v95[v70].Ptr = v69;
      v95[v70].Size = *v2;
      *(&v95[0].Reserved + 1 * v70) = 0;
    }
    v71 = v68;
    v72 = v68 + 1;
    v95[v71].Ptr = (ULONGLONG)&v83 + 4;
    *(_QWORD *)&v95[v71].Size = 2LL;
    v73 = v72;
    v95[v73].Ptr = (ULONGLONG)&v91;
    *(_QWORD *)&v95[v73].Size = 4LL;
    EtwWrite(v6, &EventDescriptor, 0LL, v72 + 1, v95);
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    goto LABEL_80;
  if ( !*(_QWORD *)(a1 + 1544) )
  {
    valid = -1073741811;
    goto LABEL_80;
  }
  v11 = a2 | 0xC;
  v12 = 0;
  if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
    v11 = a2;
  LODWORD(v84) = (v11 >> 4) & 1;
  v13 = v11 & 1;
  LODWORD(Event) = v13;
  while ( 1 )
  {
    if ( v13 )
      CmpLockRegistry(v8, v7, v9, v10, UserData, v82, v83);
    else
      CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(a1);
    if ( (*(_DWORD *)(a1 + 164) & 4) != 0 && (v11 & 0x40) == 0 )
    {
      HvUnlockHiveFlusherExclusive(a1);
      CmpUnlockRegistry(v75, v74, v76, v77);
      valid = -1073741431;
      goto LABEL_80;
    }
    if ( (v11 & 2) != 0
      && (CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) || CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) && (v11 & 4) == 0) )
    {
      goto LABEL_79;
    }
    if ( (v11 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
      goto LABEL_87;
    if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
      break;
    if ( v15 )
    {
      v64 = 0;
    }
    else if ( *(_DWORD *)(a1 + 104) || (v64 = 2, *(_BYTE *)(a1 + 195)) )
    {
      v64 = 1;
    }
    valid = CmpWaitOnHiveWriteQueue(a1, v14);
    if ( valid >= 0 )
      v12 += v64;
LABEL_115:
    if ( v12 >= 2 )
      goto LABEL_80;
    v13 = (int)Event;
  }
  CmpGenerateFlushControlData(a1, v11, Event_8);
  v16 = (char)Event_8[1];
  v17 = (unsigned int)Event_8[0];
  if ( (unsigned int)dword_140C04328 > 4 )
  {
    v99 = 0;
    v102 = 0;
    p_Event = (PRKEVENT *)&v92;
    v98 = 4;
    v100 = &v93;
    v101 = 4;
    v92 = (int)Event_8[0];
    v93 = (int)Event_8[1];
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_14003677F, 0LL, 0LL, 4u, v96);
  }
  if ( (v17 & 0x358) == 0 )
  {
LABEL_79:
    HvUnlockHiveFlusherExclusive(a1);
    CmpUnlockRegistry(v53, v52, v54, v55);
    valid = 0;
    goto LABEL_80;
  }
  if ( (v17 & 2) == 0 )
    goto LABEL_21;
  if ( CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
  {
LABEL_87:
    CmpWaitOnHiveWriteQueue(a1, a1 + 4208);
    goto LABEL_115;
  }
  CmpAcquireWriteQueue(v18);
LABEL_21:
  if ( (v17 & 1) != 0 )
    CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
  LOBYTE(v83) = (v17 & 0x110) != 0;
  if ( (v17 & 8) == 0 )
  {
LABEL_32:
    if ( (v17 & 0x158) != 0 )
    {
      v22 = HvStoreModifiedData(a1);
      if ( v22 )
      {
        v78 = v22 - 1;
        if ( !v78 )
        {
          valid = 0;
          LOBYTE(v31) = BYTE4(Event_8[0]) | 2;
          goto LABEL_68;
        }
        valid = -1073741823;
        if ( v78 == 1 )
        {
          LOBYTE(v31) = BYTE4(Event_8[0]);
          goto LABEL_68;
        }
      }
    }
    if ( (v17 & 0x80u) != 0 )
    {
      v79 = *(_DWORD *)(a1 + 280);
      v24 = *(_DWORD *)(a1 + 4228);
      if ( v79 > v24 )
      {
        v25 = v79 + 4096;
        *(_DWORD *)(a1 + 4228) = 0;
LABEL_36:
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry(v27, v26, v28, v29);
        if ( (v17 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 1);
          valid = HvExtendHivePrimaryFileValidDataLength(a1, v25, (unsigned int)v84);
          CmpLogFlushPhaseEnd(v80, 1, valid);
          LOBYTE(v31) = BYTE4(Event_8[0]);
          if ( valid < 0 )
            goto LABEL_53;
          v31 = HIDWORD(Event_8[0]) | 0x21;
          HIDWORD(Event_8[0]) |= 0x21u;
        }
        else
        {
          v31 = HIDWORD(Event_8[0]);
        }
        if ( (v17 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 2);
          valid = HvWriteLogFile(a1, v32, v33, &v89);
          CmpLogFlushPhaseEnd(v34, 2, valid);
          if ( valid < 0 )
            goto LABEL_53;
          HvTruncateCurrentLogFileIfRequired(a1);
          v31 |= 2u;
          HIDWORD(Event_8[0]) = v31;
        }
        if ( (v17 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 3);
          v38 = v84;
          LOBYTE(v58) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(a1, 0LL, v58, (unsigned int)v84);
          CmpLogFlushPhaseEnd(v59, 3, valid);
          if ( valid < 0 )
          {
            v17 |= 0x400u;
            goto LABEL_53;
          }
          v31 |= 0x20u;
          HIDWORD(Event_8[0]) = v31;
        }
        else
        {
          v38 = v84;
        }
        CmpLogFlushPhaseStart(v30, 4);
        if ( (v17 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(a1 + 1736, (unsigned int *)(a1 + 1688));
          HvFreeDirtyData(a1);
          v31 |= 4u;
          HIDWORD(Event_8[0]) = v31;
        }
        CmpLogFlushPhaseEnd(v39, 4, valid);
        if ( (v17 & 0x20) != 0 )
        {
          LOBYTE(v35) = (v16 & 4) != 0;
          HvSwapLogFiles(a1, v35);
          v31 |= 8u;
          HIDWORD(Event_8[0]) = v31;
        }
        if ( (v17 & 0x45) == 0x41 )
        {
          CmpLockRegistry(v30, v35, v36, v37, UserData, v82, v83);
          HvLockHiveFlusherExclusive(a1);
          v41 = (struct _KEVENT *)CmpReleaseWriteQueue(v40, a1 + 4192);
          CmpWakeWriteQueueWaiters(a1 + 4192, v41);
          LOBYTE(v31) = v31 | 0x10;
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v43, v42, v44, v45);
        }
        if ( (v17 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 5);
          valid = HvWriteHivePrimaryFile(a1);
          CmpLogFlushPhaseEnd(v57, 5, valid);
          if ( valid < 0 )
            goto LABEL_53;
          LOBYTE(v31) = v31 | 0x20;
        }
        if ( (v17 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 6);
          LOBYTE(v60) = 1;
          LOBYTE(v61) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(a1, v61, v60, v38);
          CmpLogFlushPhaseEnd(v62, 6, valid);
          if ( valid < 0 )
            goto LABEL_53;
          LOBYTE(v31) = v31 | 0x20;
          HvTruncateAllLogFilesIfRequired(a1);
        }
        if ( (v17 & 0x200) != 0 && (v31 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v30, 7);
          if ( (int)CmpFileFlushAndPurge(a1, 0LL) >= 0 )
            LOBYTE(v31) = v31 | 0x20;
          CmpLogFlushPhaseEnd(v63, 7, (v31 & 0x20) == 0 ? 0xC0000001 : 0);
        }
        valid = 0;
LABEL_53:
        CmpLockRegistry(v30, v35, v36, v37, UserData, v82, v83);
        HvLockHiveFlusherExclusive(a1);
        if ( valid < 0 && (v17 & 0x80u) != 0 && (v31 & 1) == 0 )
          *(_DWORD *)(a1 + 4228) = v24;
        if ( (v31 & 0x20) != 0 )
        {
          *(_DWORD *)(a1 + 4228) = 0;
          *(_DWORD *)(a1 + 4224) |= 1u;
        }
        if ( valid < 0 )
        {
          if ( (v31 & 2) != 0 && (v17 & 0x400) != 0 )
          {
            *(_DWORD *)(a1 + 180) -= v89;
            --*(_DWORD *)(a1 + 172);
            LOBYTE(v31) = v31 & 0xFD;
          }
          goto LABEL_59;
        }
        if ( (v17 & 0x800) != 0 )
        {
          *(_QWORD *)(a1 + 4144) = KiQueryUnbiasedInterruptTime();
          if ( (v17 & 0x1000) != 0 )
            goto LABEL_108;
          CmpArmLazyWriter(1LL, 0LL, 0);
        }
        if ( (v17 & 0x1000) == 0 )
        {
LABEL_59:
          if ( ((v17 >> 6) & 1) != 0 )
          {
            if ( valid < 0 )
            {
              HvFoldBackUnreconciledData(a1);
            }
            else
            {
              HvUnCOWReconciledPages(a1);
              HvFreeUnreconciledData(a1);
              if ( (v17 & 1) == 0 || (v31 & 0x10) != 0 )
              {
                v23 = *(unsigned int *)(a1 + 168);
                if ( (unsigned int)(v23 - 4) <= 1 )
                {
                  v23 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v23 != 4));
                  *(_BYTE *)(v23 + a1 + 192) = 0;
                }
              }
              else
              {
                HvResetLogFileStatusAll(a1);
                *(_DWORD *)(a1 + 180) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                  HvSwapLogFiles(v23, 0LL);
              }
            }
          }
          if ( (v17 & 0x110) != 0 )
            HvFreeUnreconciledData(a1);
          if ( (v17 & 8) != 0 && (v31 & 4) == 0 )
          {
            if ( (v31 & 2) != 0 )
            {
              if ( ((v17 >> 6) & 1) == 0 )
              {
                RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1688));
                *(_DWORD *)(a1 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
              }
              HvFreeDirtyData(a1);
            }
            else
            {
              HvFoldBackDirtyData(a1);
            }
          }
          goto LABEL_68;
        }
LABEL_108:
        CmpArmLazyWriter(1LL, 0LL, 1);
        goto LABEL_59;
      }
      v17 &= ~0x80u;
    }
    v24 = v87;
    v25 = HIDWORD(v87);
    goto LABEL_36;
  }
  v19 = (volatile signed __int64 *)(a1 + 80);
  v20 = KeAbPreAcquire(a1 + 80, 0LL);
  v21 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v20, a1 + 80);
  if ( v21 )
    *(_BYTE *)(v21 + 18) = 1;
  valid = HvMarkDirtyForFlush(a1);
  if ( valid >= 0 )
  {
    if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    v16 = (char)Event_8[1];
    v17 = (unsigned int)Event_8[0];
    goto LABEL_32;
  }
  if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  LOBYTE(v31) = BYTE4(Event_8[0]);
  valid = -1073741823;
  LOBYTE(v17) = Event_8[0];
LABEL_68:
  Event = 0LL;
  v46 = 0LL;
  v47 = (v17 & 1) != 0 && (v31 & 0x10) == 0;
  if ( v47 )
    Event = (PRKEVENT)CmpReleaseWriteQueue(v23, a1 + 4192);
  if ( (v17 & 2) != 0 )
    v46 = (struct _KEVENT *)CmpReleaseWriteQueue(v23, a1 + 4208);
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v49, v48, v50, v51);
  if ( v47 )
    CmpWakeWriteQueueWaiters(a1 + 4192, Event);
  if ( (v17 & 2) != 0 )
    CmpWakeWriteQueueWaiters(a1 + 4208, v46);
LABEL_80:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C04328 > 4 )
  {
    v99 = 0;
    p_Event = &Event;
    LODWORD(Event) = valid;
    v98 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)&byte_140036707, 0LL, 0LL, 3u, v96);
  }
  return (unsigned int)valid;
}
