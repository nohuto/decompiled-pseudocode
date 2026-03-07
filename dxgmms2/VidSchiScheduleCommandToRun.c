__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  struct _VIDSCH_GLOBAL *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  int v21; // r8d
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r8d
  struct _VIDSCH_GLOBAL *v25; // rsi
  _QWORD *v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int v29; // r8d
  _QWORD v30[2]; // [rsp+48h] [rbp-29h] BYREF
  char v31; // [rsp+58h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+78h] [rbp+7h] BYREF
  __int128 v34; // [rsp+90h] [rbp+1Fh]
  __int64 v35; // [rsp+A0h] [rbp+2Fh]
  char v36; // [rsp+D8h] [rbp+67h] BYREF

  *a2 = 0;
  v36 = 0;
  v4 = 0LL;
  memset(&v33, 0, sizeof(v33));
  while ( (unsigned int)(*((_DWORD *)a1 + 753) - 2) <= 1 || (unsigned int)VidSchiCheckHwProgress(a1, &v36) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 220, &LockHandle);
    v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 224);
    if ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1792) )
    {
      do
      {
        v25 = *(struct _VIDSCH_GLOBAL **)v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, (char *)v6 - 200) )
        {
          v27 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
LABEL_51:
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v26 - 24), (struct VIDMM_ALLOC *)(v26 - 25));
        }
        v6 = v25;
      }
      while ( v25 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1792) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 162) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)a1 + 52) > 0 )
      goto LABEL_28;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &v33);
    v31 = 0;
    v30[1] = v30;
    v30[0] = v30;
    if ( *((_DWORD *)a1 + 798) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v30);
    if ( *((_BYTE *)a1 + 51) )
      VidSchiProcessFlipPendingContextList(v30, a1);
    while ( 1 )
    {
      v7 = VidSchiSelectContext(a1, 1LL);
      v8 = v7;
      if ( !v7 )
      {
        v10 = 0;
        VidSchiLogAggregatedTelemetry(a1);
        goto LABEL_17;
      }
      v9 = VidSchiSwitchContextWithCheck(v7);
      v10 = v9;
      if ( v9 == 1 )
        break;
      if ( v9 != 3 )
        goto LABEL_17;
    }
    v11 = *(_QWORD *)(v8 + 96);
    v35 = 0LL;
    v4 = *(_QWORD *)(v8 + 648);
    v34 = 0LL;
    v12 = *(_QWORD *)(v11 + 24);
    if ( v4 )
    {
      --*(_DWORD *)(v8 + 780);
      --*(_DWORD *)(v11 + 2880);
      --*(_DWORD *)(v12 + 720);
      v13 = *(_QWORD *)(v4 + 32);
      if ( v13 == v8 + 664 )
      {
        *(_DWORD *)(v8 + 644) &= 0xFFFFFFF0;
        *(_QWORD *)(v8 + 648) = 0LL;
        VidSchiUpdateContextStatus(v8, v9, 18640LL);
      }
      else
      {
        v17 = v13 - 32;
        *(_QWORD *)(v8 + 648) = v13 - 32;
        if ( v13 == 32 )
        {
          v29 = *(_DWORD *)(v8 + 644) & 0xFFFFFFF8;
          *(_DWORD *)(v8 + 644) = v29;
          v24 = v29 & 0xFFFFFFF7;
        }
        else
        {
          v18 = ((unsigned int)(*(_DWORD *)(v17 + 48) - 4) <= 1) | *(_DWORD *)(v8 + 644) & 0xFFFFFFFE;
          v19 = 0;
          *(_DWORD *)(v8 + 644) = v18;
          if ( *(_DWORD *)(v17 + 48) == 3 )
            v19 = 2;
          v20 = v18 & 0xFFFFFFFD | v19;
          v21 = 0;
          *(_DWORD *)(v8 + 644) = v20;
          if ( *(_DWORD *)(v17 + 48) == 7 )
            v21 = 4;
          v22 = v20 & 0xFFFFFFFB | v21;
          v23 = 0;
          *(_DWORD *)(v8 + 644) = v22;
          if ( *(_DWORD *)(v17 + 48) == 6 )
            v23 = 8;
          v24 = v23 | v22 & 0xFFFFFFF7;
        }
        *(_DWORD *)(v8 + 644) = v24;
      }
      VidSchiProfilePerformanceTick(5, v12, 0, 0, 0LL, v4, 0LL, 0LL);
    }
    *(_DWORD *)(v8 + 184) |= 0x400u;
    while ( 1 )
    {
LABEL_17:
      v14 = (_QWORD *)v30[0];
      if ( *(_QWORD **)(v30[0] + 8LL) != v30 )
        goto LABEL_51;
      v15 = *(_QWORD *)v30[0];
      if ( *(_QWORD *)(*(_QWORD *)v30[0] + 8LL) != v30[0] )
        goto LABEL_51;
      v30[0] = *(_QWORD *)v30[0];
      *(_QWORD *)(v15 + 8) = v30;
      if ( v14 == v30 )
        break;
      *v14 = 0LL;
      v14[1] = 0LL;
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v30, (struct VIDSCH_HW_QUEUE *)(v14 - 22));
    }
    v31 = 1;
    KeReleaseInStackQueuedSpinLock(&v33);
    if ( !v31 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v30);
    if ( v10 == 1 )
      break;
    if ( v10 == 4 )
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 96) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*(_QWORD *)(v8 + 96));
    }
    else if ( (v10 & 0xFFFFFFFD) == 0 )
    {
LABEL_28:
      if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
        break;
    }
  }
  if ( *((_DWORD *)a1 + 753) )
    *a2 = 1;
  return v4;
}
