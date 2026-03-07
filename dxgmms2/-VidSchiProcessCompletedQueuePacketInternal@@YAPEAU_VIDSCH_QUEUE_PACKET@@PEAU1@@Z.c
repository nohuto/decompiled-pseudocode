// write access to const memory has been detected, the output may be wrong!
struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // r15
  int v8; // eax
  struct _VIDSCH_QUEUE_PACKET **v9; // rdx
  struct _VIDSCH_QUEUE_PACKET **v10; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v11; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r12
  _DWORD *v16; // rsi
  int v17; // eax
  unsigned int i; // r14d
  unsigned int j; // esi
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // r14d
  char *v23; // r12
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned int v26; // esi
  bool v27; // zf
  int v28; // eax
  unsigned int v29; // r14d
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  char *v32; // r12
  char *v33; // rcx
  char *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int k; // ecx
  __int64 v38; // rdx
  void (__fastcall *v39)(_QWORD); // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _KEVENT *v42; // r14
  KIRQL v43; // si
  _DWORD *v44; // rsi
  struct _KEVENT *v45; // rsi
  struct _KEVENT *v46; // r12
  _QWORD *v47; // rsi
  KIRQL v48; // r12
  __int64 v49; // r14
  int v50; // eax
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int m; // esi
  void *v54; // rcx
  __int64 v55; // rax
  KSPIN_LOCK *v56; // r12
  char *v57; // rsi
  __int64 v58; // rcx
  char **v59; // rax
  char **v60; // rax
  _QWORD *v61; // rdi
  _QWORD *v62; // rax
  struct _KEVENT *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r10
  unsigned int v69; // r9d
  int v70; // eax
  char v71; // cl
  int v72; // eax
  unsigned int v73; // r14d
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // r12
  __int64 v77; // rdx
  int v78; // ecx
  struct _KEVENT *v79; // rcx
  ADAPTER_DISPLAY *v80; // rcx
  __int64 v81; // rcx
  int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  char v86; // cl
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  struct _KEVENT *v92; // r12
  int Flink; // ecx
  int v94; // ecx
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned int v97; // [rsp+60h] [rbp-A0h]
  int v98; // [rsp+64h] [rbp-9Ch]
  __int64 v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  _QWORD v101[2]; // [rsp+98h] [rbp-68h] BYREF
  char v102; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v103; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v105; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v106; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v107; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v108; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v109; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v110; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+160h] [rbp+60h] BYREF
  int v112; // [rsp+1D0h] [rbp+D0h]
  KIRQL v113; // [rsp+1D0h] [rbp+D0h]
  KIRQL v114; // [rsp+1D8h] [rbp+D8h]
  int v115; // [rsp+1E0h] [rbp+E0h]
  unsigned int v116; // [rsp+1E8h] [rbp+E8h]

  v3 = *((_QWORD *)a1 + 11);
  v115 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v3 + 96);
  v6 = 0;
  v99 = *(_QWORD *)(v3 + 104);
  v100 = v5;
  v7 = *(_QWORD *)(v5 + 24);
  v112 = 0;
  v98 = 0;
  v103 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v81 = *(_QWORD *)(v3 + 56);
    if ( !v81 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v81 = v3;
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v81, &AbortQueuePacket, a3, a1, v81);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v36 = *((_QWORD *)a1 + 36);
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 12), 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)v36 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v36, (PVOID)v36);
        else
          ExFreePoolWithTag((PVOID)v36, 0);
      }
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
  v114 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1728), &LockHandle);
  v102 = 0;
  v101[1] = v101;
  v101[0] = v101;
  v8 = *((_DWORD *)a1 + 20);
  if ( (v8 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v8 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 11272LL) != -1 )
    {
      v39 = *(void (__fastcall **)(_QWORD))(v7 + 3088);
      if ( v39 )
        v39(*(_QWORD *)(v7 + 3120));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 512LL, v7, v3, a1);
    __debugbreak();
    JUMPOUT(0x1C0021483LL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)v101, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v9 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v9[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_262;
  v10 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v10 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_262;
  *v10 = (struct _VIDSCH_QUEUE_PACKET *)v9;
  v9[1] = (struct _VIDSCH_QUEUE_PACKET *)v10;
  v11 = *(struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 **)(v3 + 664);
  if ( v11 == (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(v3 + 664) )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v41 = 13726LL;
LABEL_192:
      v40 = 10LL;
      goto LABEL_81;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v40 = 0LL;
      v41 = 13759LL;
LABEL_81:
      VidSchiUpdateContextStatus(v3, v40, v41);
    }
  }
  else
  {
    VidPnSourceId = v11[1].VidPnSourceId;
    v11 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)((char *)v11 - 32);
    if ( (VidPnSourceId & 3) == 1 )
    {
      v103 = v11;
      v11[1].Duration = VidPnSourceId | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v41 = 13707LL;
      goto LABEL_192;
    }
  }
  v13 = *((_DWORD *)a1 + 12);
  if ( v13 == 5 )
  {
    if ( (*((_DWORD *)a1 + 20) & 4) != 0 )
      goto LABEL_28;
    if ( (byte_1C00769C3 & 0x20) != 0 )
    {
      v82 = *((_DWORD *)a1 + 68);
      if ( (v82 & 0x10) != 0 )
      {
        v83 = *((_QWORD *)a1 + 11);
        if ( v83 )
        {
          v84 = *(_QWORD *)(v83 + 56);
          if ( !v84 || (*(_DWORD *)(v83 + 112) & 0x40) != 0 )
            v84 = *((_QWORD *)a1 + 11);
        }
        else
        {
          v84 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 48LL);
          if ( !v84 )
            v84 = *((_QWORD *)a1 + 12);
        }
        McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
          v84,
          v83,
          v82,
          1,
          v84,
          *((_DWORD *)a1 + 28),
          v82,
          *((_DWORD *)a1 + 69),
          (__int64)a1 + 280,
          (__int64)a1 + 536,
          (char)a1);
      }
    }
    v14 = *((_QWORD *)a1 + 99);
    v15 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
    if ( v14 )
    {
      *(_QWORD *)(v14 + 800) = *((_QWORD *)a1 + 100);
    }
    else if ( !*((_QWORD *)a1 + 100) )
    {
      v16 = (_DWORD *)((char *)a1 + 272);
      v17 = *((_DWORD *)a1 + 68);
      if ( (v17 & 2) != 0 )
      {
        v80 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 67);
        if ( (v17 & 8) != 0 )
        {
          DxgCoreInterface[69](v80, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)v80, 0, 0);
          ObfDereferenceObject(*((PVOID *)a1 + 67));
        }
        *((_QWORD *)a1 + 67) = 0LL;
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
          VidSchiCompleteSignalSyncObject(
            (__int64)v101,
            *((_QWORD *)a1 + i + 35),
            (*v16 & 4) != 0,
            (unsigned __int64 *)a1 + i + 67,
            1);
      }
LABEL_23:
      *((_DWORD *)a1 + 20) |= 4u;
      if ( (*v16 & 2) == 0 )
      {
        for ( j = 0; j < *((_DWORD *)a1 + 69); ++j )
          VidSchiReleaseSyncObjectReference(*((char **)a1 + j + 35), v11);
      }
      VidSchiCheckPendingDeviceCommand(v15);
LABEL_27:
      v5 = v100;
      v6 = 0;
      goto LABEL_28;
    }
    v85 = *((_QWORD *)a1 + 100);
    if ( v85 )
      *(_QWORD *)(v85 + 792) = *((_QWORD *)a1 + 99);
    *((_QWORD *)a1 + 99) = 0LL;
    v16 = (_DWORD *)((char *)a1 + 272);
    *((_QWORD *)a1 + 100) = 0LL;
    goto LABEL_23;
  }
  if ( v13 == 3 )
  {
    v25 = 0LL;
    v26 = *((_DWORD *)a1 + 218) & 0x3FF;
    if ( *(_BYTE *)(v7 + 156) )
      v25 = (*((_DWORD *)a1 + 218) >> 10) & 0x3FF;
    v27 = !_BitScanForward((unsigned int *)&v28, v26);
    v116 = v25;
    if ( v27 )
      LOBYTE(v28) = -1;
    v29 = (char)v28;
    v27 = !_BitScanForward((unsigned int *)&v28, v25);
    if ( v27 )
      LOBYTE(v28) = -1;
    v30 = (char)v28;
LABEL_47:
    v97 = v30;
    while ( v26 || (_DWORD)v25 )
    {
      v31 = v30;
      if ( v29 < v30 )
        v31 = v29;
      v32 = (char *)a1 + v31 * ((8 * *((_DWORD *)a1 + 220) + 231) & 0xFFFFFFF8);
      v33 = (char *)*((_QWORD *)v32 + 135);
      if ( v33 )
      {
        VidSchiReleaseSyncObjectReference(v33, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v25);
        v25 = v116;
        v30 = v97;
        *((_QWORD *)v32 + 135) = 0LL;
      }
      v34 = (char *)*((_QWORD *)v32 + 137);
      if ( v29 >= v30 )
      {
        v86 = -1;
        v25 = ~(1 << v30) & (unsigned int)v25;
        v27 = !_BitScanForward((unsigned int *)&v87, v25);
        v116 = v25;
        if ( !v27 )
          v86 = v87;
        v30 = v86;
        goto LABEL_47;
      }
      if ( v34 )
      {
        VidSchiReleaseSyncObjectReference(v34, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v25);
        v25 = v116;
        v30 = v97;
        *((_QWORD *)v32 + 137) = 0LL;
      }
      v26 &= ~(1 << v29);
      v27 = !_BitScanForward((unsigned int *)&v35, v26);
      if ( v27 )
        LOBYTE(v35) = -1;
      v29 = (char)v35;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 980));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 2872));
      RtlSetBitEx(v7 + 488, *(unsigned __int16 *)(v5 + 4));
    }
    for ( k = 0; k < *((_DWORD *)a1 + 118); ++k )
    {
      if ( k >= 0x10 )
        break;
      v38 = *((_QWORD *)a1 + k + 60);
      *((_QWORD *)a1 + k + 60) = 0LL;
      if ( v38 )
        _InterlockedDecrement((volatile signed __int32 *)(v38 + 104));
    }
  }
  v20 = *((unsigned int *)a1 + 18);
  v21 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v21 )
  {
    if ( (v20 & 0x400) == 0 || (v22 = 0, (v20 & 0x800) != 0) )
      v22 = 1;
    v23 = (char *)a1 + 160;
    v24 = *((unsigned int *)a1 + 40);
    if ( (v20 & 0x40000) != 0 )
    {
      v20 = v22;
      if ( !v21 )
        v20 = 0LL;
    }
    else
    {
      if ( (v20 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 98) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
          {
LABEL_87:
            if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v22 )
              VidSchiSubmitPresentHistoryToken((unsigned int)v101, (_DWORD)a1, 0, 0, 0LL);
            if ( v115 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 736));
              v91 = v7;
              if ( *(_BYTE *)(v7 + 2212) )
                v91 = v7 + 4 * v24;
              _InterlockedDecrement((volatile signed __int32 *)(v91 + 740));
              _InterlockedDecrement((volatile signed __int32 *)(v99 + 1572));
              _InterlockedDecrement((volatile signed __int32 *)(v99 + 4LL * (unsigned int)v24 + 1508));
            }
            v42 = (struct _KEVENT *)(v7 + 1688);
            memset(&v106, 0, sizeof(v106));
            v43 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v106);
            if ( *(struct _KEVENT **)&v42->Header.Lock == v42 )
            {
LABEL_94:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v106);
              KeLowerIrql(v43);
              v44 = v23;
              v6 = v112;
              if ( v112 )
                goto LABEL_97;
              goto LABEL_95;
            }
            v92 = *(struct _KEVENT **)&v42->Header.Lock;
            while ( 1 )
            {
              if ( LODWORD(v92->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v92[1].Header.Lock + 4LL * LODWORD(v92[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v92[1].Header.Lock + 244LL) )
                  goto LABEL_237;
              }
              else if ( ((__int64)v92[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                Flink = (int)v92[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v92[5].Header.WaitListHead.Blink) = Flink;
                if ( Flink )
                  goto LABEL_237;
              }
              ++v92[5].Header.LockNV;
              KeSetEvent(v92 + 4, 0, 0);
LABEL_237:
              v92 = *(struct _KEVENT **)&v92->Header.Lock;
              if ( v92 == v42 )
              {
                v23 = (char *)a1 + 160;
                goto LABEL_94;
              }
            }
          }
          if ( !v22 )
          {
            LODWORD(v20) = 0;
            goto LABEL_217;
          }
          v115 = 1;
          v112 = 1;
          v98 = 1;
LABEL_168:
          LOBYTE(v20) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v20, 0);
          LODWORD(v20) = v112;
LABEL_85:
          if ( !v98 )
          {
LABEL_86:
            if ( (_DWORD)v20 && (_DWORD)v24 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v99 + 4 * v24 + 1444));
              v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 + 40) + 32LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v99 + 32) + 4LL))
                              + 8 * v24
                              + 88);
              if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v24 + 6480) + 8LL));
                ++**(_DWORD **)(v7 + 8 * v24 + 6480);
              }
              _InterlockedDecrement((volatile signed __int32 *)(v90 + 8));
              ++*(_DWORD *)v90;
              if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
              {
                memset(&v105, 0, sizeof(v105));
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1736), &v105);
                *(_DWORD *)(v99 + 4 * v24 + 508) = *((_DWORD *)a1 + 96);
                *(_QWORD *)(v99 + 8 * v24 + 576) = *((unsigned int *)a1 + 33);
                *(_QWORD *)(v99 + 8 * v24 + 704) = *((_QWORD *)a1 + 17);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v105);
              }
            }
            goto LABEL_87;
          }
LABEL_217:
          if ( (*((_DWORD *)a1 + 218) & 0x3FF) != 0 )
          {
            v88 = *(unsigned int *)(v3 + 88);
            v89 = *(_QWORD *)(v7 + 632);
            if ( (unsigned int)v88 < *(_DWORD *)(v7 + 704) )
              v89 += 8 * v88;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)v101,
              (struct _VIDSCH_GLOBAL *)v7,
              v24,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 872),
              *((_DWORD *)a1 + 102),
              1 << *(_BYTE *)(*(_QWORD *)v89 + 6LL),
              0,
              0);
            LODWORD(v20) = v112;
          }
          goto LABEL_86;
        }
        v115 = v22;
      }
      v20 = v22;
    }
    v112 = v20;
    if ( !(_DWORD)v20 )
      goto LABEL_85;
    goto LABEL_168;
  }
  v44 = (_DWORD *)((char *)a1 + 160);
LABEL_95:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0);
LABEL_97:
  if ( *((_DWORD *)a1 + 12) == 3 && *v44 != -1 )
  {
    v66 = *((_QWORD *)a1 + 11);
    if ( v66 )
      v67 = *(_QWORD *)(v66 + 104);
    else
      v67 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v68 = *(_QWORD *)(v67 + 32);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v69 = ((unsigned __int16)*((_DWORD *)a1 + 218) | (unsigned __int16)(*((_DWORD *)a1 + 218) >> 10)) & 0x3FF;
    else
      v69 = (1 << *(_DWORD *)(v68 + 152)) - 1;
    v27 = !_BitScanForward((unsigned int *)&v70, v69);
    v71 = -1;
    if ( !v27 )
      v71 = v70;
    while ( v69 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v68 + 8LL * (unsigned int)*v44 + 3200) + 288LL * v71 + 192),
        0xFFFFFFFF);
      v72 = 1 << v71;
      v71 = -1;
      v69 &= ~v72;
      v27 = !_BitScanForward((unsigned int *)&v72, v69);
      if ( !v27 )
        v71 = v72;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v73 = ((unsigned __int16)*((_DWORD *)a1 + 218) | (unsigned __int16)(*((_DWORD *)a1 + 218) >> 10)) & 0x3FF;
    else
      v73 = (1 << *(_DWORD *)(v7 + 152)) - 1;
    v27 = !_BitScanForward((unsigned int *)&v74, v73);
    if ( v27 )
      LOBYTE(v74) = -1;
    if ( v73 )
    {
      do
      {
        v75 = (unsigned int)*v44;
        v76 = (unsigned int)(char)v74;
        v77 = *(int *)(*(_QWORD *)(v7 + 8 * v75 + 3200) + 288 * v76 + 188);
        if ( (int)v77 > -1 && *(_DWORD *)(160 * v77 + *(_QWORD *)(v7 + 3328) + 112) == 1 )
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v101, (struct _VIDSCH_GLOBAL *)v7, v75, v76);
        v73 &= ~(1 << v76);
        v27 = !_BitScanForward((unsigned int *)&v74, v73);
        if ( v27 )
          LOBYTE(v74) = -1;
      }
      while ( v73 );
      v6 = v112;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
  _InterlockedDecrement((volatile signed __int32 *)(v100 + 2884));
  _InterlockedDecrement((volatile signed __int32 *)(v99 + 1580));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v99 + 1584));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * (unsigned int)*v44 + 3200) + 3084LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v7, v100, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v99);
  if ( v6 )
    VidSchiSignalRegisteredEvent(v7, v99 + 120);
  if ( v115 )
  {
    VidSchiSignalRegisteredEvent(v7, v99 + 136);
    VidSchiSignalRegisteredEvent(v7, v7 + 1672);
    *(_QWORD *)(v7 + 1616) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1584), 0, 0);
  }
  v45 = (struct _KEVENT *)(v100 + 424);
  memset(&v107, 0, sizeof(v107));
  v113 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v107);
  v46 = *(struct _KEVENT **)(v100 + 424);
  if ( *(struct _KEVENT **)&v45->Header.Lock != v45 )
  {
    do
    {
      if ( LODWORD(v46->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v46[1].Header.Lock + 4LL * LODWORD(v46[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v46[1].Header.Lock + 244LL) )
          goto LABEL_249;
      }
      else if ( ((__int64)v46[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v94 = (int)v46[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v46[5].Header.WaitListHead.Blink) = v94;
        if ( v94 )
          goto LABEL_249;
      }
      ++v46[5].Header.LockNV;
      KeSetEvent(v46 + 4, 0, 0);
LABEL_249:
      v46 = *(struct _KEVENT **)&v46->Header.Lock;
    }
    while ( v46 != v45 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v107);
  KeLowerIrql(v113);
  v47 = (_QWORD *)(v7 + 1656);
  memset(&v108, 0, sizeof(v108));
  v48 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v108);
  v49 = *(_QWORD *)(v7 + 1656);
  if ( (_QWORD *)*v47 != v47 )
  {
    do
    {
      if ( *(_DWORD *)(v49 + 16) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v49 + 24) + 4LL * *(unsigned int *)(v49 + 40) + 1444) >= *(_DWORD *)(*(_QWORD *)(v49 + 24) + 244LL) )
          goto LABEL_174;
      }
      else if ( (*(_DWORD *)(v49 + 32) & 0x10) != 0 )
      {
        v78 = **(_DWORD **)(v49 + 40);
        *(_DWORD *)(v49 + 140) = v78;
        if ( v78 )
          goto LABEL_174;
      }
      ++*(_DWORD *)(v49 + 120);
      KeSetEvent((PRKEVENT)(v49 + 96), 0, 0);
LABEL_174:
      v49 = *(_QWORD *)v49;
    }
    while ( (_QWORD *)v49 != v47 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v108);
  KeLowerIrql(v48);
  *(_QWORD *)(v100 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v100 + 296), 0, 0);
  *(_QWORD *)(v7 + 1504) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 1472), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v50 = *((_DWORD *)a1 + 12);
    if ( !v50 || v50 == 7 )
    {
      v64 = (struct _KEVENT *)*((_QWORD *)a1 + 45);
      if ( v64 )
      {
        KeSetEvent(v64, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 45));
      }
    }
    else if ( v50 == 6 )
    {
      v79 = (struct _KEVENT *)*((_QWORD *)a1 + 38);
      if ( v79 )
        KeSetEvent(v79, 0, 0);
    }
  }
  v51 = *((_DWORD *)a1 + 12);
  if ( v51 <= 7 )
  {
    v52 = 137;
    if ( _bittest(&v52, v51) )
    {
      if ( !*(_BYTE *)(v3 + 909) )
      {
        for ( m = 0; m < *(_DWORD *)(v7 + 152); ++m )
        {
          v49 = m * ((8 * *((_DWORD *)a1 + 220) + 231) & 0xFFFFFFF8);
          v54 = *(void **)((char *)a1 + v49 + 1072);
          if ( v54 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v54);
            *(_QWORD *)((char *)a1 + v49 + 1072) = 0LL;
          }
        }
      }
      v55 = *((_QWORD *)a1 + 38);
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v55 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v55, (PVOID)v55);
          else
            ExFreePoolWithTag((PVOID)v55, 0);
        }
        *((_QWORD *)a1 + 38) = 0LL;
      }
    }
  }
  v56 = *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( *((_DWORD *)a1 + 12) || (v65 = *((_QWORD *)a1 + 77)) == 0 && !*((_QWORD *)a1 + 33) )
  {
    WdLogSingleEntry2(4LL, a1, v3);
    *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a1 + 13) = 0;
    v56 += 217;
    v57 = (char *)a1 + 8;
    memset(&v109, 0, sizeof(v109));
    KeAcquireInStackQueuedSpinLock(v56, &v109);
    v58 = *((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)v57 + 8LL) == v57 )
    {
      v59 = (char **)*((_QWORD *)a1 + 2);
      if ( *v59 == v57 )
      {
        *v59 = (char *)v58;
        *(_QWORD *)(v58 + 8) = v59;
        if ( v3 != -776 )
          --*(_DWORD *)(v3 + 776);
        KeReleaseInStackQueuedSpinLock(&v109);
        if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
        {
          VidSchiInterlockedInsertTailList(v56, v3 + 736, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 752));
          v7 = v3 + 728;
          v49 = v3 + 712;
        }
        else
        {
          v7 = v3 + 728;
          memset(&v110, 0, sizeof(v110));
          v49 = v3 + 712;
          KeAcquireInStackQueuedSpinLock(v56, &v110);
          v60 = *(char ***)(v3 + 720);
          if ( *v60 != (char *)(v3 + 712) )
            goto LABEL_262;
          *(_QWORD *)v57 = v49;
          *((_QWORD *)a1 + 2) = v60;
          *v60 = v57;
          *(_QWORD *)(v3 + 720) = v57;
          if ( v3 != -728 )
            ++*(_DWORD *)v7;
          KeReleaseInStackQueuedSpinLock(&v110);
        }
        if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
          goto LABEL_130;
        goto LABEL_133;
      }
    }
LABEL_262:
    __fastfail(3u);
  }
  v95 = *((_QWORD *)a1 + 33);
  g_DxgMmsBugcheckExportIndex = 1;
  v62 = (_QWORD *)WdLogSingleEntry5(0LL, 281LL, 2560LL, a1, v65, v95);
  __debugbreak();
LABEL_257:
  v61 = v62;
  if ( v62[1] != v49 )
    goto LABEL_262;
  v96 = *v62;
  if ( *(_QWORD **)(v96 + 8) != v61 )
    goto LABEL_262;
  *(_QWORD *)v49 = v96;
  *(_QWORD *)(v96 + 8) = v49;
  --*(_DWORD *)v7;
  while ( 1 )
  {
    KeReleaseInStackQueuedSpinLock(&v104);
    if ( !v61 )
      break;
    ExFreePoolWithTag(v61 - 1, 0);
LABEL_130:
    memset(&v104, 0, sizeof(v104));
    v61 = 0LL;
    KeAcquireInStackQueuedSpinLock(v56, &v104);
    v62 = *(_QWORD **)v49;
    if ( *(_QWORD *)v49 == v49 )
    {
      KeReleaseInStackQueuedSpinLock(&v104);
      break;
    }
    if ( *(_DWORD *)v7 > 0x10u )
      goto LABEL_257;
  }
LABEL_133:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v101);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v114);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v101);
  return v103;
}
