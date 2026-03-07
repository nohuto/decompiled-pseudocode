// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v7; // r12
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rax
  int v17; // r14d
  unsigned __int16 v18; // r9
  __int64 v19; // r13
  int v20; // r15d
  struct VIDSCH_FLIP_QUEUE *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r8
  int v24; // r15d
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rsi
  bool v29; // zf
  _QWORD *v30; // rdx
  unsigned int v31; // esi
  _QWORD *v32; // r14
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // r14d
  char v39; // cl
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int i; // r14d
  __int64 v44; // r15
  void *v45; // r12
  ADAPTER_DISPLAY *v46; // rcx
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v48; // edx
  struct _VIDSCH_GLOBAL *v49; // [rsp+30h] [rbp-71h] BYREF
  __int128 v50; // [rsp+38h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-41h] BYREF
  char v53; // [rsp+70h] [rbp-31h]
  int v54; // [rsp+71h] [rbp-30h]
  __int16 v55; // [rsp+75h] [rbp-2Ch]
  char v56; // [rsp+77h] [rbp-2Ah]
  unsigned int *v57; // [rsp+78h] [rbp-29h]
  int *v58; // [rsp+80h] [rbp-21h]
  __int64 v59; // [rsp+88h] [rbp-19h]
  PVOID v60; // [rsp+90h] [rbp-11h]
  char v61; // [rsp+98h] [rbp-9h]
  int v62; // [rsp+99h] [rbp-8h]
  __int16 v63; // [rsp+9Dh] [rbp-4h]
  char v64; // [rsp+9Fh] [rbp-2h]
  PERESOURCE Resource; // [rsp+A0h] [rbp-1h]
  PVOID BackTrace; // [rsp+F0h] [rbp+4Fh] BYREF
  unsigned int v67; // [rsp+F8h] [rbp+57h] BYREF
  int v68; // [rsp+108h] [rbp+67h] BYREF

  v67 = a2;
  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = 0;
  v11 = *((_QWORD *)a1 + a2 + 400);
  Resource = (PERESOURCE)((char *)a1 + 984);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 984), 1u);
  WdLogSingleEntry3(4LL, a3, v67, v7);
  if ( (_DWORD)v7 )
  {
    v14 = *(_QWORD *)(v11 + 16);
    if ( v14 )
    {
      if ( v14 == a3 && *(_DWORD *)(v11 + 4) == (_DWORD)v7 )
        goto LABEL_5;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 0x10000LL, a1, a3, v67);
      __debugbreak();
    }
    else if ( (int)v7 >= 4 )
    {
LABEL_20:
      if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, v67) )
      {
        v10 = -1073741823;
        goto LABEL_70;
      }
      LOBYTE(v23) = 1;
      v10 = VidSchControlVSyncDevice(a3, 1LL, v23, v67);
      if ( v10 < 0 )
      {
LABEL_70:
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v7;
        *(_QWORD *)(v11 + 16) = a3;
LABEL_35:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_5;
      }
LABEL_22:
      if ( (int)v7 >= 3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
        v24 = -1;
        LODWORD(v50) = v67;
        v25 = -1;
        v49 = a1;
LABEL_24:
        v26 = v10;
        DWORD1(v50) = v25;
        if ( v25 == *((_DWORD *)a1 + 38) )
        {
          *(_BYTE *)(v11 + 8) = a6;
          *(_DWORD *)(v11 + 4) = v7;
          *(_QWORD *)(v11 + 16) = a3;
        }
        else
        {
          BackTrace = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v49);
          v27 = operator new(88696LL, 0x39616956u, 64LL);
          v28 = v27;
          if ( v27 )
          {
            *(_QWORD *)(v27 + 56) = 0LL;
            *(_QWORD *)(v27 + 64) = 0LL;
            *(_QWORD *)(v27 + 72) = 0LL;
            v29 = DWORD1(v50) == -1;
            *(_DWORD *)(v27 + 84) = DWORD1(v50);
            *(_QWORD *)(v27 + 88) = 0LL;
            *(_BYTE *)(v27 + 80) = v29;
            *(_QWORD *)(v27 + 96) = 0LL;
            *(_QWORD *)(v27 + 104) = 0LL;
            *(_DWORD *)(v27 + 112) = 0;
            memset((void *)(v27 + 120), 0, 0x15A00uLL);
            v30 = BackTrace;
            *(_OWORD *)v28 = 0LL;
            *(_OWORD *)(v28 + 16) = 0LL;
            *(_OWORD *)(v28 + 32) = 0LL;
            *(_QWORD *)(v28 + 48) = 0LL;
            *v30 = v28;
            v31 = 0;
            while ( (int)_VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                           (_VIDSCH_FLIP_QUEUE_ENTRY *)(*v30 + 120LL + 1384LL * v31),
                           a1) >= 0 )
            {
              v30 = BackTrace;
              if ( ++v31 >= 0x40 )
              {
                v10 = v26;
                *(_DWORD *)(*(_QWORD *)BackTrace + 76LL) = 63;
                v25 = DWORD1(v50) + 1;
                goto LABEL_24;
              }
            }
          }
          else
          {
            *(_QWORD *)BackTrace = 0LL;
          }
          v10 = -1073741801;
          LODWORD(v50) = v67;
          v49 = a1;
          while ( 1 )
          {
            DWORD1(v50) = v24;
            if ( v24 == *((_DWORD *)a1 + 38) )
              break;
            FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v49);
            if ( FlipQueue )
            {
              VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue, v48);
              *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v49) = 0LL;
            }
            ++v24;
          }
        }
        v32 = (_QWORD *)(a3 + 104);
        v33 = *v32;
        if ( *(_QWORD **)(*v32 + 8LL) != v32
          || (v34 = (_QWORD *)v32[1], (_QWORD *)*v34 != v32)
          || (*v34 = v33,
              v35 = (char *)a1 + 296,
              *(_QWORD *)(v33 + 8) = v34,
              v36 = *(_QWORD *)v35,
              *(char **)(*(_QWORD *)v35 + 8LL) != v35) )
        {
          __fastfail(3u);
        }
        *v32 = v36;
        v32[1] = v35;
        *(_QWORD *)(v36 + 8) = v32;
        *(_QWORD *)v35 = v32;
        goto LABEL_35;
      }
      goto LABEL_70;
    }
    if ( !*((_BYTE *)a1 + 156) )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !a3 || a3 == *(_QWORD *)(v11 + 16) )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      if ( a3 )
      {
        v37 = *(_QWORD *)(a3 + 8);
        if ( !v37 )
          v37 = a3;
      }
      else
      {
        v37 = 0LL;
      }
      McTemplateK0pq_EtwWriteTransfer(v12, &EventClearFlipDevice, v13, v37, v67);
    }
    VidSchiClearPeriodicFrameNotifications(a1, v67);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    *(_QWORD *)&v50 = &v49;
    BYTE8(v50) = 0;
    v49 = (struct _VIDSCH_GLOBAL *)&v49;
    VidSchiCompletePendingFlip(&v49, a1, v67, a5);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v49);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1);
      if ( a7 )
      {
        VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v67);
        VidSchiFlushPendingFlips(a1);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    }
    v16 = *((_QWORD *)a1 + 2);
    if ( *(_BYTE *)(v16 + 4736) && *(_DWORD *)(v16 + 288) == 1 )
    {
      BackTrace = 0LL;
      RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
      LOWORD(v38) = *(_WORD *)(v11 + 44136);
      while ( (_WORD)v38 )
      {
        v68 = 0;
        v39 = -1;
        v29 = !_BitScanForward((unsigned int *)&v40, (unsigned __int16)v38);
        if ( !v29 )
          v39 = v40;
        v41 = (unsigned int)v39;
        v42 = *((_QWORD *)a1 + 2);
        v68 = v41;
        v49 = *(struct _VIDSCH_GLOBAL **)((v41 << 12) + v11 + 3176);
        v54 = 0;
        v55 = 0;
        v56 = 0;
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v52[1] = &v49;
        v57 = &v67;
        v58 = &v68;
        v60 = BackTrace;
        v52[0] = 1LL;
        v61 = 0;
        v53 = 1;
        v59 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))DxgCoreInterface[82])(v42, 0LL, v52);
        v38 = (unsigned __int16)v38 & ~(1 << v68);
      }
    }
    v17 = *(_DWORD *)(v11 + 4);
    v18 = *(_WORD *)(v11 + 44136);
    v19 = *(_QWORD *)(v11 + 16);
    *(_QWORD *)&v50 = &v49;
    v68 = v17;
    v49 = (struct _VIDSCH_GLOBAL *)&v49;
    BYTE8(v50) = 0;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v49,
      a1,
      (struct _VIDSCH_PRESENT_INFO *)v11,
      v18);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v49);
    v20 = -1;
    LODWORD(v50) = v67;
    v49 = a1;
    while ( 1 )
    {
      DWORD1(v50) = v20;
      if ( v20 == *((_DWORD *)a1 + 38) )
        break;
      v21 = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v49);
      if ( v21 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v21, v22);
        *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v49) = 0LL;
      }
      ++v20;
    }
    *(_BYTE *)(v11 + 8) = a6;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *((_BYTE *)a1 + 59) )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
      {
        v44 = 288LL * i;
        v45 = *(void **)(v44 + v11 + 432);
        if ( v45 )
        {
          *(_QWORD *)(v44 + v11 + 432) = 0LL;
          v46 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 1);
          v49 = (struct _VIDSCH_GLOBAL *)__PAIR64__(i, v67);
          v50 = 0LL;
          DxgCoreInterface[21](v46, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v49);
          *(_DWORD *)(v44 + v11 + 376) = 0;
          ExFreePoolWithTag(v45, 0);
        }
      }
      v17 = v68;
    }
    if ( v19 && (v17 >= 4 || *((_BYTE *)a1 + 156)) )
      v10 = VidSchControlVSyncDevice(v19, 1LL, 0LL, v67);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v10;
}
