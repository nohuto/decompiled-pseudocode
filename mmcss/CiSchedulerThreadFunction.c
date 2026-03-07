void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  int v5; // edi
  _QWORD *v6; // rcx
  struct _KTHREAD *v7; // rax
  struct _DEVICE_OBJECT *SystemArgument1; // r15
  unsigned int v9; // esi
  struct _DEVICE_OBJECT *NextDevice; // rbx
  __int64 i; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  char v15; // bl
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_1C00073C0 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  v16 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = KeGetCurrentThread();
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    CiThreadsMovedUp = v4;
    v9 = 0;
    for ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v7;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      for ( i = (__int64)&SystemArgument1->NextDevice;
            NextDevice != (struct _DEVICE_OBJECT *)i;
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type )
      {
        if ( CiSchedulerSetPriority((__int64)&NextDevice[-1].Dpc.DpcData) )
        {
          ++v5;
          ++v9;
        }
      }
    }
    if ( CiThreadsMovedUp && v9 > 1 )
    {
      v12 = p_Reserved[4];
      v6 = p_Reserved + 4;
      if ( (PVOID *)v12[1] != p_Reserved + 4
        || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12)
        || (*v6 = v13, *(_QWORD *)(v13 + 8) = v6, v14 = p_Reserved[5], (_QWORD *)*v14 != v6) )
      {
        __fastfail(3u);
      }
      *v12 = v6;
      v12[1] = v14;
      *v14 = v12;
      p_Reserved[5] = v12;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait((__int64)v6, &v16);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep((__int32 *)&v16);
    }
    v15 = v16;
    if ( byte_1C00073C0 )
      CiLogSchedulerWakeup(v16);
  }
  while ( (v15 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  PsTerminateSystemThread(0);
}
