void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // ebx
  ULONG v4; // edi
  unsigned __int64 v6; // r12
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 *i; // rdi
  __int64 v16; // rax
  unsigned __int8 v17; // dl
  unsigned int v18; // esi
  __int64 DeviceObjectExtension; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  ActiveThreadCount = a2;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  v4 = a3;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v4 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v4 >= ActiveThreadCount )
      v4 = -1;
  }
  if ( byte_1C00073C0 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v4);
  v6 = KeQueryInterruptTimePrecise(&v23);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  *(_DWORD *)(a1 + 184) |= 8u;
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  *(_BYTE *)(a1 + 92) = 0;
  v8 = v6 + ActiveThreadCount;
  *(_QWORD *)(a1 + 80) = v8;
  v9 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v9 = 0LL;
      LOBYTE(v7) = 0;
      goto LABEL_25;
    }
    v9 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  }
  LOBYTE(v7) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 24) > v8 )
      {
        v10 = *(_QWORD *)v9;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_24;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_24:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
LABEL_25:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v9, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v4 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 132) = 1;
    v12 = v6 + v4;
    *(_QWORD *)(a1 + 120) = v12;
    v13 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
      goto LABEL_35;
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v13 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
LABEL_35:
      LOBYTE(v11) = 0;
      if ( !v13 )
        goto LABEL_42;
      while ( 1 )
      {
        if ( *(_QWORD *)(v13 + 24) > v12 )
        {
          v14 = *(_QWORD *)v13;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_42;
            v14 ^= v13;
          }
          if ( !v14 )
            goto LABEL_42;
        }
        else
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_41;
            v14 ^= v13;
          }
          if ( !v14 )
          {
LABEL_41:
            LOBYTE(v11) = 1;
            goto LABEL_42;
          }
        }
        v13 = v14;
      }
    }
    v13 = 0LL;
    LOBYTE(v11) = 0;
LABEL_42:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v13, v11, a1 + 96);
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v16 = *(i - 1);
        if ( *(_QWORD *)(v16 + 120) || !*(_BYTE *)(v16 + 132) && *(_QWORD *)(v16 + 80) )
        {
          v17 = *(_BYTE *)(*(i - 2) + 40);
          if ( v17 > *((_BYTE *)i + 24) )
            v17 = *((_BYTE *)i + 24);
        }
        else
        {
          v17 = *((_BYTE *)i + 24);
        }
      }
      else
      {
        v17 = *((_BYTE *)i + 26);
      }
      v18 = v17;
      if ( *((unsigned __int8 *)i + 27) != v17 )
      {
        *((_BYTE *)i + 27) = v17;
        if ( byte_1C00073C0 )
          CiLogSchedulerEvent(i - 10, v17);
        KeSetActualBasePriorityThread(i[2], v18);
      }
    }
  }
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_83;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v20 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 <= v20 )
      {
        v21 = v6 - v20;
        if ( v21 < -2000 )
          v21 += 2000LL;
      }
      else
      {
        v21 = 0LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_85;
  }
LABEL_83:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_85:
  v22 = *(_DWORD *)(a1 + 184);
  if ( (v22 & 0x20) != 0 )
  {
    v22 &= ~0x20u;
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v22;
  }
  if ( (v22 & 0x10) != 0 )
    *(_DWORD *)(a1 + 184) = v22 & 0xFFFFFFEF;
  CiSchedulerRefreshTaskIndexQosProperties(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
