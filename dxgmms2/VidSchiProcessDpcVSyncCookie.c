void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r12
  unsigned int v4; // r15d
  bool v5; // di
  __int64 v6; // r13
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  int v9; // r8d
  int v10; // edi
  __int64 v11; // r14
  struct VIDSCH_FLIP_QUEUE *v12; // r14
  int v13; // ecx
  _QWORD *v14; // r13
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // r13
  unsigned int v18; // eax
  int v19; // r15d
  _QWORD *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  bool v27; // r13
  ADAPTER_DISPLAY *v28; // rcx
  unsigned int v29; // r15d
  __int64 v30; // rdi
  int v31; // r8d
  unsigned int v32; // r15d
  int v33; // ecx
  void (__fastcall *v34)(_QWORD, _QWORD); // rax
  unsigned int v35; // r15d
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  bool v41; // zf
  int v42; // eax
  char i; // r9
  int v44; // eax
  char v45; // al
  int v46; // r8d
  bool v47; // [rsp+70h] [rbp-90h] BYREF
  bool v48[3]; // [rsp+71h] [rbp-8Fh] BYREF
  int v49; // [rsp+74h] [rbp-8Ch]
  int v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+7Ch] [rbp-84h] BYREF
  int v52; // [rsp+80h] [rbp-80h]
  unsigned int v53; // [rsp+84h] [rbp-7Ch]
  struct _VIDSCH_PRESENT_INFO *v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+90h] [rbp-70h]
  _QWORD v56[2]; // [rsp+98h] [rbp-68h] BYREF
  char v57; // [rsp+A8h] [rbp-58h]
  _QWORD *v58; // [rsp+B0h] [rbp-50h]
  _QWORD v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D4h] [rbp-2Ch]
  struct VIDSCH_FLIP_QUEUE *v62; // [rsp+D8h] [rbp-28h]
  unsigned int v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E4h] [rbp-1Ch]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  struct _KLOCK_QUEUE_HANDLE v68; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v70[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v71; // [rsp+150h] [rbp+50h]
  int v72; // [rsp+158h] [rbp+58h]
  _QWORD v73[10]; // [rsp+160h] [rbp+60h] BYREF
  char v74[80]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v75[80]; // [rsp+200h] [rbp+100h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v51 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v74, 0, sizeof(v74));
  v3 = *((unsigned int *)a1 + 27);
  v71 = 0LL;
  v4 = 0;
  v72 = 0;
  memset(v70, 0, sizeof(v70));
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v5 = 0;
  v54 = *(struct _VIDSCH_PRESENT_INFO **)(v1 + 8 * v3 + 3200);
  v48[0] = 0;
  v6 = (unsigned int)v3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1728), &LockHandle);
  v57 = 0;
  v56[1] = v56;
  v56[0] = v56;
  VidSchiRecordVSyncTiming(a1);
  if ( *((int *)v54 + 1) >= 4 || *(_BYTE *)(v1 + 156) )
  {
    v10 = -1;
    v7 = 4673LL;
    while ( 1 )
    {
      if ( v10 == *(_DWORD *)(v1 + 152) )
      {
        v5 = v48[0];
        break;
      }
      v11 = *(_QWORD *)(v1 + 8 * v6 + 3200);
      v47 = 0;
      if ( v10 == -1 )
        v12 = *(struct VIDSCH_FLIP_QUEUE **)(v11 + 32);
      else
        v12 = *(struct VIDSCH_FLIP_QUEUE **)(v11 + 8LL * v10 + 40);
      if ( !v12 )
        goto LABEL_23;
      v13 = *((_DWORD *)v12 + 28);
      if ( v13 )
        *((_DWORD *)v12 + 28) = --v13;
      v14 = 0LL;
      v58 = 0LL;
      v53 = v4 + 1;
      *((_DWORD *)v70 + v4) = v13;
      LODWORD(v8) = 0;
      v15 = *((_DWORD *)v12 + 18);
      v16 = ((unsigned __int8)*((_DWORD *)v12 + 17) - 1) & 0x3F;
      v49 = 0;
      v50 = 0;
      if ( v15 == v16 )
        goto LABEL_16;
      while ( 1 )
      {
        v17 = 1384LL * v15;
        v18 = *(_DWORD *)((char *)v12 + v17 + 1172);
        if ( v18 <= 0xC && _bittest((const int *)&v7, v18) )
          goto LABEL_14;
        if ( v18 != 5 && v18 != 15 )
        {
LABEL_15:
          v14 = v58;
          goto LABEL_16;
        }
        if ( !*(_BYTE *)(v1 + 156) && !*((_QWORD *)a1 + 16) )
          VidSchiQueueDeferredVisibilityWorkItem(v54, (struct _VIDSCH_GLOBAL *)v1);
        if ( (unsigned int)VidSchiIsExpectedVSyncCookie(
                             (struct _VIDSCH_GLOBAL *)v1,
                             (struct _VIDSCH_PRESENT_INFO *)v7,
                             (struct VIDSCH_FLIP_QUEUE *)((char *)v12 + v17 + 120),
                             a1) )
          break;
        v7 = 4673LL;
LABEL_14:
        v15 = ((_BYTE)v15 - 1) & 0x3F;
        if ( v15 == (((unsigned __int8)*((_DWORD *)v12 + 17) - 1) & 0x3F) )
          goto LABEL_15;
      }
      v14 = *(_QWORD **)((char *)v12 + v17 + 1160);
      if ( v14 )
      {
        v59[0] = v1;
        v61 = 0;
        v64 = 0;
        v65 = *((_QWORD *)v54 + 5524);
        v66 = *((_QWORD *)v54 + 5526);
        v67 = *((_QWORD *)v54 + 5528);
        v59[1] = v14;
        v60 = v3;
        v62 = v12;
        v63 = v15;
        VidSchiProcessVsyncCompletedFlipEntry(
          (unsigned int)v56,
          (unsigned int)v59,
          (unsigned int)v74,
          (unsigned int)&v51,
          (__int64)&v50,
          (__int64)v48);
        v19 = v50;
        goto LABEL_17;
      }
LABEL_16:
      v19 = v49;
LABEL_17:
      if ( *((_DWORD *)v54 + 769) && *((_BYTE *)v54 + 78788) )
        VidSchiExecuteNextFlipQueueEntry((struct HwQueueStagingList *)v56, (struct _VIDSCH_GLOBAL *)v1, &v47, v3, v12);
      if ( v14 )
      {
        VidSchiCheckPendingDeviceCommand(v14);
        v35 = -v19;
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[5] + 32LL) + 8LL * *(unsigned int *)(v14[4] + 4LL)) + 8 * v3 + 88);
        _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 8 * v3 + 6480) + 8LL), v35);
        v8 = *(_DWORD **)(v1 + 8 * v3 + 6480);
        *v8 += v50;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 8), v35);
        *(_DWORD *)v36 += v50;
      }
      v6 = v3;
      if ( v47 )
        VidSchiCompletePendingFlipOnPlane((unsigned int)v56, v1, v3, (_DWORD)v12, 9);
      v4 = v53;
      v7 = 4673LL;
LABEL_23:
      ++v10;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        (_DWORD)v8,
        v7,
        v9,
        *(_QWORD *)(v1 + 16),
        *((_DWORD *)a1 + 28),
        *((_QWORD *)a1 + 16),
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 22),
        *((_QWORD *)a1 + 7),
        0,
        0,
        v74[0]);
    memset(v73, 0, sizeof(v73));
    memset(v75, 0, sizeof(v75));
    v22 = *((_DWORD *)a1 + 4);
    switch ( v22 )
    {
      case 10:
        v23 = *(_DWORD *)(v1 + 152);
        if ( v23 )
        {
          v20 = v73;
          v21 = v23;
          v7 = (__int64)a1 + 128;
          do
          {
            v24 = *(_QWORD *)v7;
            v7 += 16LL;
            *v20++ = v24;
            --v21;
          }
          while ( v21 );
        }
        break;
      case 3:
        v73[0] = *((_QWORD *)a1 + 16);
        break;
      case 7:
        LODWORD(v21) = -1;
        v7 = *((_DWORD *)a1 + 30) & 0x3FF;
        v41 = !_BitScanForward((unsigned int *)&v42, v7);
        v55 = v42;
        if ( !v41 )
          LODWORD(v21) = (unsigned __int8)v42;
        for ( i = 0; (_DWORD)v7; ++i )
        {
          v52 = 0;
          v73[(char)v21] = *((_QWORD *)a1 + 5 * i + 16);
          LODWORD(v20) = (unsigned __int8)v21;
          LODWORD(v21) = -1;
          v7 = ~(1 << (char)v20) & (unsigned int)v7;
          v41 = !_BitScanForward((unsigned int *)&v44, v7);
          v52 = v44;
          if ( !v41 )
            LODWORD(v21) = (unsigned __int8)v44;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          (_DWORD)v20,
          v7,
          v21,
          *(_QWORD *)(v1 + 16),
          *(_DWORD *)(v1 + 152),
          (__int64)v73,
          *((_DWORD *)a1 + 27),
          *((_DWORD *)a1 + 22),
          v51,
          (__int64)v74,
          (__int64)v75);
    }
    else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
        *((_BYTE *)a1 + 104) == 0,
        v7,
        v21,
        *(_QWORD *)(v1 + 16),
        *(_DWORD *)(v1 + 152),
        (__int64)v73,
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 22),
        v51,
        (__int64)v74,
        v4,
        (__int64)v70,
        *((_BYTE *)a1 + 104) == 0,
        (__int64)v75);
    }
  }
  if ( *(_BYTE *)(v1 + 2212) )
  {
    VidSchiIndependentVidPnAdaptiveVSync((struct _VIDSCH_GLOBAL *)v1, a1, v3, v5);
    goto LABEL_43;
  }
  if ( v5 )
    goto LABEL_42;
  if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 2404) )
    goto LABEL_43;
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 2272), 0)
    || DXGADAPTER::NumberOfVSyncWaiter(*(DXGADAPTER **)(v1 + 16), 0)
    || *(_DWORD *)(v1 + 740)
    || *(_DWORD *)(v1 + 812)
    || *(_DWORD *)(v1 + 1900) )
  {
LABEL_42:
    *(_DWORD *)(v1 + 2400) = -1;
    *(_DWORD *)(v1 + 2336) = 0;
    goto LABEL_43;
  }
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    goto LABEL_43;
  v37 = *(_DWORD *)(v1 + 2400);
  if ( v37 == -1 )
  {
    *(_DWORD *)(v1 + 2400) = v3;
  }
  else if ( v37 != (_DWORD)v3 )
  {
    goto LABEL_43;
  }
  v38 = *(_DWORD *)(v1 + 2336);
  if ( v38 != -1 )
  {
    v39 = *(_DWORD *)(v1 + 2404);
    v40 = v38 + 1;
    *(_DWORD *)(v1 + 2336) = v40;
    if ( v40 == v39 )
    {
      if ( !_InterlockedExchange((volatile __int32 *)(v1 + 2264), 1) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2232), (WORK_QUEUE_TYPE)v7);
    }
    else if ( v40 > v39 )
    {
      *(_DWORD *)(v1 + 2336) = v39 + 1;
    }
  }
LABEL_43:
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    goto LABEL_61;
  v25 = *(_QWORD *)(v1 + 16);
  v26 = *(_QWORD *)(v25 + 2920);
  v27 = *((_BYTE *)a1 + 104) == 0;
  v28 = v54;
  v29 = *((_DWORD *)v54 + 11048);
  if ( (unsigned int)v3 < *(_DWORD *)(v26 + 96) )
  {
    memset(&v68, 0, sizeof(v68));
    v30 = *(_QWORD *)(v26 + 128) + 4000 * v3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 952), &v68);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      v45 = DXGADAPTER::NumberOfVSyncWaiter((DXGADAPTER *)v25, v3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v30 + 944),
        (unsigned int)&EventDWMVsyncSignal,
        v46,
        *(_DWORD *)(v30 + 936),
        v29,
        *(_BYTE *)(v30 + 944),
        v45,
        4);
    }
    *(_BYTE *)(v30 + 960) = v27;
    KePulseEvent((PRKEVENT)(v30 + 904), 0, 0);
    if ( !*(_QWORD *)(v30 + 928) )
      goto LABEL_59;
    *(_DWORD *)(v30 + 940) = v29;
    if ( *(_DWORD *)(v30 + 936) > v29 )
      goto LABEL_59;
    if ( *(_BYTE *)(v30 + 944) )
    {
      *(_BYTE *)(v30 + 944) = 0;
      if ( *(_QWORD *)(v25 + 2928) )
      {
        v32 = v3;
        if ( (*(_DWORD *)(v25 + 2792) & 0x10) == 0 )
        {
          v32 = 0;
LABEL_54:
          v33 = _InterlockedDecrement((volatile signed __int32 *)(v25 + 4LL * v32 + 2952));
          v52 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 37LL, v25, *(unsigned int *)(v25 + 4LL * v32 + 2952), 0LL);
            v33 = v52;
          }
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            McTemplateK0pqq_EtwWriteTransfer(v33, (unsigned int)&VSyncWaiterChange, v31, v25, v32, v33);
          goto LABEL_58;
        }
        if ( (unsigned int)v3 < 0x10 )
          goto LABEL_54;
      }
    }
LABEL_58:
    KeSetEvent(*(PRKEVENT *)(v30 + 928), 0, 0);
LABEL_59:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v68);
  }
  DxgCoreInterface[3](v28, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v7);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[83])(
    *(_QWORD *)(*(_QWORD *)(v1 + 16) + 404LL),
    *((unsigned int *)a1 + 28),
    *((unsigned int *)v54 + 11048),
    *((_QWORD *)v54 + 5526));
LABEL_61:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v56);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v34 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3104);
    if ( v34 )
      v34(*(_QWORD *)(v1 + 3120), (unsigned int)v3);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v56);
}
