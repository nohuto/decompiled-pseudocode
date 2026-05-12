/*
 * XREFs of RaUnitStartIo @ 0x1C0003A20
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitClaimIrp @ 0x1C0004470 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005010 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 *     RaidUnitReleaseIrp @ 0x1C0007844 (RaidUnitReleaseIrp.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008E00 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C000AC08 (IsUntaggedRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B640 (RaUnitReleaseRemoveLock.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C00119DC (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0015968 (RaidDeleteDeviceQueueEntry.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C001D48C (RaidDmaFlushDmaBuffers.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C001E5B4 (RaidUpdateZoneIoMetadata.c)
 *     Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage @ 0x1C001E8AC (Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002B2DC (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002E890 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C00366B4 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C00368B0 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0045670 (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C0046900 (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004A948 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rdi
  char v7; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  char v13; // bl
  int v14; // edx
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  char *v24; // r9
  unsigned __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rbx
  char v28; // cl
  char v29; // cl
  char v30; // al
  int v31; // ebp
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v33; // rax
  unsigned int v34; // ebp
  unsigned int v35; // ebx
  int v36; // eax
  __int64 v37; // r14
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // r12
  bool v43; // zf
  LARGE_INTEGER v44; // r15
  const char *v45; // r14
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // esi
  int v57; // r15d
  unsigned int v58; // esi
  int v59; // ebp
  int v60; // ecx
  bool v61; // r15
  __int64 *v62; // r12
  __int64 v63; // rcx
  __int64 v64; // rcx
  bool v65; // si
  __int64 v66; // rcx
  __int64 v67; // rax
  void (__fastcall *v68)(__int64, _QWORD, bool); // rax
  __int64 v69; // rdx
  __int64 v70; // rbx
  BOOL v71; // r14d
  unsigned int v72; // ebx
  unsigned int HighestNodeNumber; // r8d
  unsigned __int8 v74; // al
  int v75; // ebx
  char v76; // al
  struct _KDPC *v77; // rcx
  int v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+90h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  __int64 v82; // [rsp+A0h] [rbp-68h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-58h]
  int v85; // [rsp+110h] [rbp+8h]
  int v86; // [rsp+118h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v80 = 0;
  v10 = *(_QWORD *)(v4 + 8);
  v11 = 0LL;
  v12 = *(_QWORD *)(v6 + 24);
  v86 = 0;
  v81 = 0LL;
  *(_BYTE *)(v10 + 3) = 0;
  if ( *(int *)(v12 + 4264) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v12 + 1248)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v12 + 4264)) == 1 )
      RaidProcessDeferredItemsWorker(v12 + 1152, *(_QWORD *)(v12 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 4264));
  }
  v13 = *(_BYTE *)(v10 + 2);
  if ( v13 != 40 )
  {
    v26 = *(_DWORD *)(v10 + 12);
    v7 = *(_BYTE *)(v10 + 72);
    v84 = *(_QWORD *)(v10 + 40);
    v85 = v26;
    if ( v84 )
      *(_QWORD *)(v10 + 40) = 0LL;
    goto LABEL_29;
  }
  v14 = *(_DWORD *)(v10 + 24);
  v84 = *(_QWORD *)(v10 + 104);
  v81 = v10;
  v85 = v14;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_29;
  v15 = *(_DWORD *)(v10 + 56);
  v16 = 0;
  if ( !v15 )
    goto LABEL_29;
  while ( 1 )
  {
    v17 = *(unsigned int *)(v10 + 4LL * v16 + 120);
    if ( (unsigned int)v17 < 0x80 )
      goto LABEL_21;
    v18 = *(unsigned int *)(v10 + 16);
    if ( (unsigned int)v17 > (unsigned int)v18 )
      goto LABEL_21;
    v19 = v17 + v10;
    v20 = (unsigned int)v17;
    v21 = *(_DWORD *)(v17 + v10) - 64;
    if ( !v21 )
      break;
    v22 = v21 - 1;
    if ( !v22 )
    {
      v25 = v20 + 56;
      goto LABEL_20;
    }
    if ( v22 == 1 && v20 + 40 <= v18 )
    {
      v23 = *(_DWORD *)(v19 + 12);
      v24 = (char *)(v19 + 32);
      if ( !v23 )
        v24 = 0LL;
      goto LABEL_25;
    }
LABEL_21:
    if ( ++v16 >= v15 )
      goto LABEL_29;
  }
  v25 = v20 + 40;
LABEL_20:
  if ( v25 > v18 )
    goto LABEL_21;
  if ( !*(_BYTE *)(v19 + 10) )
    goto LABEL_29;
  v24 = (char *)(v19 + 24);
LABEL_25:
  if ( v24 )
    v7 = *v24;
LABEL_29:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v13 == 40 )
    {
      v27 = *(_QWORD **)(v10 + 96);
      v81 = v10;
      *(_QWORD *)(v10 + 96) = v27[2];
    }
    else
    {
      v27 = *(_QWORD **)(v10 + 48);
      *(_QWORD *)(v10 + 48) = v27[2];
    }
    if ( v27[1] != -1LL )
      v11 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v6 + 3240)) - v27[1];
    ExFreePoolWithTag(v27, 0x54436152u);
  }
  if ( (*(_BYTE *)(v6 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v10) )
  {
    RaUnitReleaseRemoveLock(v6);
    v28 = *(_BYTE *)(v10 + 3);
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      v29 = ((v28 >> 7) & 0x80) + 56;
    }
    else
    {
      v30 = 56;
      if ( v28 < 0 )
        v30 = -72;
      v29 = v30;
    }
    *(_BYTE *)(v10 + 3) = v29;
    v31 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2104));
LABEL_99:
    RaidUpdateZoneIoMetadata(v6, a2, 0LL);
LABEL_100:
    v49 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v49 + 2) == 40 )
    {
      v50 = *(unsigned int *)(v49 + 20);
      v51 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v52 = *(unsigned int *)(v49 + 24);
    }
    else
    {
      v52 = *(unsigned int *)(v49 + 12);
      v50 = *(unsigned __int8 *)(v49 + 2);
      v51 = v81;
    }
    v71 = IsUntaggedRequest(v52, v50) != 0;
    if ( v86 )
    {
      v72 = *a3;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v72 / *(_DWORD *)(v6 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v72 / *(_DWORD *)(v6 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v6 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v6 + 576) + 16LL * v72));
    }
    RaidDeleteDeviceQueueEntry(v6 + 656, v71);
    if ( v80 )
      RaidUnitReleaseIrp(a2);
    v74 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v6 + 664));
    *(_QWORD *)(a2 + 56) = 0LL;
    v75 = v74;
    if ( (*(_BYTE *)(v49 + 3) & 0x3F) == 0 )
    {
      v76 = RaidNtStatusToSrbStatus((unsigned int)v31);
      *(_BYTE *)(v49 + 3) = v76;
      if ( (v76 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v49 + 2) == 40 )
          *(_DWORD *)(v51 + 44) = -1073741670;
        else
          *(_DWORD *)(v49 + 64) = -1073741670;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
        *(_QWORD *)(v6 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v6, a2);
    RaidCompleteRequestEx((PIRP)a2);
    if ( v75 )
      v77 = (struct _KDPC *)(*(_QWORD *)(v6 + 24) + 1856LL);
    else
      v77 = (struct _KDPC *)(v6 + 1184);
    LOBYTE(v48) = KeInsertQueueDpc(v77, 0LL, 0LL);
    return v48;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v33 )
  {
    v34 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v35 = 0;
      if ( v34 )
        break;
LABEL_49:
      if ( ++v5 == 10 )
      {
        v36 = -1;
        goto LABEL_52;
      }
    }
    while ( 1 )
    {
      v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 512) + ((unsigned __int64)v35 << 6)));
      if ( v33 )
        break;
      if ( ++v35 >= v34 )
        goto LABEL_49;
    }
  }
  v36 = *((_DWORD *)&v33->Next + 2);
LABEL_52:
  v37 = v84;
  v38 = v84;
  v86 = 1;
  *a3 = v36;
  v31 = RaidUnitClaimIrp(v6, a2, v38, a3);
  if ( v31 < 0 )
  {
    RaUnitReleaseRemoveLock(v6);
    goto LABEL_99;
  }
  v80 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v6 + 24) + 2220LL) && v7 != 18 && v7 != -96 )
  {
    LOBYTE(v39) = 37;
    *(_BYTE *)(v10 + 3) = 37;
    v31 = RaidSrbStatusToNtStatus(v39);
    goto LABEL_99;
  }
  if ( *(char *)(v6 + 449) < 0
    && *(_DWORD *)(v6 + 492) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v6, v10)
    && (v85 & 0x100000) != 0 )
  {
    v31 = -1073741823;
    *(_BYTE *)(v10 + 3) = 36;
    goto LABEL_99;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v40 + 2) == 40 )
    v41 = *(_QWORD **)(v40 + 96);
  else
    v41 = *(_QWORD **)(v40 + 48);
  v41[96] = v37;
  v41[82] = RaidUnitCompleteRequest;
  if ( v11 || *(_BYTE *)(v10 + 2) != 40 )
  {
    v42 = v81;
  }
  else
  {
    v42 = v10;
    v81 = v10;
    if ( *(_DWORD *)(v10 + 4) || *(_DWORD *)(v10 + 28) )
    {
      v43 = StorEtwLoggingEnabled == 0;
      LODWORD(v82) = *(_DWORD *)(v10 + 4);
      HIDWORD(v82) = *(_DWORD *)(v10 + 28);
      *(_DWORD *)(v10 + 28) = 0;
      *(_DWORD *)(v10 + 4) = 0;
      if ( !v43 )
      {
        v43 = UseQPCTime == 0;
        goto LABEL_72;
      }
      if ( g_StorpTraceLoggingPerformanceEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_77;
        v43 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_72:
        if ( v43 )
LABEL_77:
          v44.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          v44 = KeQueryPerformanceCounter(&PerformanceFrequency);
      }
      else
      {
        v44.QuadPart = 0LL;
      }
      v11 = v44.QuadPart - v82;
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v11 = 10000000 * v11 / PerformanceFrequency.QuadPart;
    }
  }
  v41[86] = v11;
  if ( v11 < DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(v6 + 2232), 0LL) )
    {
      v45 = "End";
      goto LABEL_89;
    }
  }
  else if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2232)) == 1 )
  {
    v45 = "Start";
LABEL_89:
    if ( (byte_1C0069845 & 0x40) != 0 )
      McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
        v6 + 169,
        v6 + 160,
        v6 + 1976,
        *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
        *(_QWORD *)(v6 + 24) + 5192LL,
        *(_BYTE *)(v6 + 96),
        *(_BYTE *)(v6 + 97),
        *(_BYTE *)(v6 + 98),
        v6 + 1976,
        v6 + 160,
        v6 + 169,
        v6 + 186,
        *(_BYTE *)(v6 + 450) & 1,
        (__int64)v45);
  }
  v46 = *(_QWORD *)(v6 + 24);
  if ( *(_QWORD *)(v46 + 5736) )
  {
    v47 = RaidAdapterAcquireCryptoKeyResources(v46, v41);
    v31 = v47;
    if ( v47 == 259 )
    {
      v31 = 0;
      LODWORD(v48) = Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage();
      if ( !(_DWORD)v48 )
        goto LABEL_99;
      return v48;
    }
    if ( v47 < 0 )
    {
      if ( *(_BYTE *)(v10 + 2) == 40 )
      {
        *(_BYTE *)(v42 + 3) = 48;
        *(_DWORD *)(v42 + 44) = v47;
      }
      else
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = v47;
      }
      goto LABEL_99;
    }
  }
  v53 = *(_QWORD *)(v6 + 24);
  if ( !*(_BYTE *)(v53 + 4514) )
    goto LABEL_142;
  v54 = v41[21];
  v55 = *(unsigned __int8 *)(v54 + 2);
  if ( (_BYTE)v55 == 40 )
    v56 = *(_DWORD *)(v54 + 24);
  else
    v56 = *(_DWORD *)(v54 + 12);
  if ( (*(_BYTE *)(v53 + 4515) & 4) != 0 )
  {
    v65 = (v56 & 0x40) != 0;
    if ( v41[13] )
    {
      if ( v53 != -728 )
      {
        v66 = *(_QWORD *)(v53 + 728);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 8);
          if ( v67 )
          {
            if ( *(int *)(v53 + 756) >= 3 && (v68 = *(void (__fastcall **)(__int64, _QWORD, bool))(v67 + 240)) != 0LL )
              v68(v66, v41[13], v65);
            else
              KeFlushIoBuffers(v41[13], v65);
          }
        }
      }
    }
    v69 = v41[17];
    if ( v69 )
      RaidDmaFlushDmaBuffers(v53 + 728, v69, v65);
    goto LABEL_142;
  }
  if ( v41[17] )
  {
    LODWORD(v48) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v6 + 24), v41);
    goto LABEL_143;
  }
  if ( (v56 & 0xC0) == 0 )
  {
LABEL_142:
    LODWORD(v48) = RaidAdapterPostScatterGatherExecute(v53, v41);
LABEL_143:
    v31 = v48;
    goto LABEL_144;
  }
  if ( (_BYTE)v55 == 40 )
  {
    v57 = *(_DWORD *)(v54 + 24);
    v58 = *(_DWORD *)(v54 + 60);
    v59 = *(_DWORD *)(v54 + 20);
  }
  else
  {
    v57 = *(_DWORD *)(v54 + 12);
    v59 = *(unsigned __int8 *)(v54 + 2);
    v58 = *(_DWORD *)(v54 + 16);
  }
  LODWORD(v48) = *(_DWORD *)(v53 + 548);
  v60 = v57 & 0x40;
  v61 = (v57 & 0x80) != 0;
  if ( (v48 & 8) == 0 && (*(_BYTE *)(v53 + 109) & 2) == 0 )
  {
    LOBYTE(v55) = v60 != 0;
    LOBYTE(v48) = KeFlushIoBuffers(v41[13], v55);
  }
  if ( v59 == 23 )
  {
    v48 = v41[13];
    if ( *(_DWORD *)(v48 + 40) > v58 )
      v58 = *(_DWORD *)(v48 + 40);
  }
  v62 = (__int64 *)(v53 + 728);
  if ( v53 != -728 && (v63 = *v62) != 0 && (v48 = *(_QWORD *)(v63 + 8)) != 0 && (v48 = *(_QWORD *)(v48 + 112)) != 0 )
  {
    LOBYTE(v79) = v61;
    LODWORD(v48) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v48)(
                     v63,
                     *(_QWORD *)(v53 + 8),
                     v41[13],
                     v41[23],
                     v58,
                     RaidpAdapterContinueScatterGather,
                     v41,
                     v79,
                     v41 + 29,
                     424);
    v31 = v48;
  }
  else
  {
    v31 = -1073741811;
  }
  if ( v31 == -1073741789 )
  {
    if ( v53 != -728 )
    {
      v64 = *v62;
      if ( *v62 )
      {
        v48 = *(_QWORD *)(v64 + 8);
        if ( v48 )
        {
          v48 = *(_QWORD *)(v48 + 88);
          if ( v48 )
          {
            LOBYTE(v79) = v61;
            LODWORD(v48) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v48)(
                             v64,
                             *(_QWORD *)(v53 + 8),
                             v41[13],
                             v41[23],
                             v58,
                             RaidpAdapterContinueScatterGather,
                             v41,
                             v79);
            goto LABEL_143;
          }
        }
      }
    }
    v31 = -1073741811;
  }
LABEL_144:
  if ( v31 < 0 )
    goto LABEL_100;
  v70 = *(_QWORD *)(v6 + 24);
  if ( *(int *)(v70 + 4264) <= 0 )
  {
    LOWORD(v48) = ExQueryDepthSList((PSLIST_HEADER)(v70 + 1248));
    if ( (_WORD)v48 )
    {
      LODWORD(v48) = _InterlockedIncrement((volatile signed __int32 *)(v70 + 4264));
      if ( (_DWORD)v48 == 1 )
        LOBYTE(v48) = RaidProcessDeferredItemsWorker(v70 + 1152, *(_QWORD *)(v70 + 8), a4);
      _InterlockedDecrement((volatile signed __int32 *)(v70 + 4264));
    }
  }
  return v48;
}
