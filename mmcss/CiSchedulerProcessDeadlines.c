char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  _DWORD *v2; // r12
  int v3; // edi
  int v4; // r14d
  unsigned __int64 v5; // r15
  unsigned __int64 DeviceObjectExtension; // rbx
  char v7; // cl
  _BYTE *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // eax

  result = WPP_MAIN_CB.SectorSize;
  v2 = a1;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v5 = CiSchedulerQueryCurrentTime() + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    goto LABEL_6;
  }
  if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
LABEL_6:
    if ( DeviceObjectExtension )
    {
      do
      {
        if ( *(_QWORD *)(DeviceObjectExtension + 24) > v5 )
          break;
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
        *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
        if ( *(_DWORD *)(DeviceObjectExtension + 32) == 1 )
        {
          v7 = *(_BYTE *)(DeviceObjectExtension + 36);
          v8 = (_BYTE *)(DeviceObjectExtension + 36);
          v3 |= 0x20u;
          v9 = 96LL;
          if ( !v7 )
            v9 = 56LL;
          v10 = DeviceObjectExtension - v9;
          v11 = *(_DWORD *)(v10 + 184) | 0x10;
          if ( !v7 )
          {
            v11 = *(_DWORD *)(v10 + 184) | 0x30;
            if ( (*(_BYTE *)(v10 + 184) & 1) != 0 )
              v4 = 1;
            ++CiTotalTasksDeadlineExpired;
          }
          *(_DWORD *)(v10 + 184) = v11;
          CiSchedulerUpdateTaskIndexPriorities(v10);
          CiSchedulerRefreshTaskIndexQosProperties(v10);
          if ( byte_1C00073C0 )
          {
            if ( *v8 )
              CiLogTaskIndexPreDeadlineExpired(v10);
            else
              CiLogTaskIndexDeadlineExpired(v10);
          }
        }
        else
        {
          v3 |= 0x10u;
        }
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            break;
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                       + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
      }
      while ( DeviceObjectExtension );
      v2 = a1;
      if ( (v3 & 0x20) != 0 )
      {
        if ( v4 )
        {
          if ( CiCurrentMediaBufferingState )
          {
            CiCurrentMediaBufferingState = 0;
            PoNotifyMediaBuffering(0LL);
          }
        }
        else
        {
          CiSystemUpdateMediaBufferingState();
        }
      }
      if ( (v3 & 0x10) != 0 )
        goto LABEL_32;
    }
  }
  CiSchedulerUpdateTimer(v5 - 2000);
LABEL_32:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_1C00073C0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *v2 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*v2 & 0xFFFFFFDF) != 0;
}
