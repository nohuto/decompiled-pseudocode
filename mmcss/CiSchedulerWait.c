/*
 * XREFs of CiSchedulerWait @ 0x1C0001680
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002E60 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSleep @ 0x1C00014A0 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002050 (CiSchedulerUpdateTimer.c)
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C00030B0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 *     CiLogSchedulerEvent @ 0x1C0003EA0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003F8C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004010 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004634 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004884 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // rbx
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  unsigned int v5; // r12d
  unsigned int v6; // edi
  char v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  char v10; // bl
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int32 v22; // r14d
  int v23; // ebx
  int v24; // r12d
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 DeviceObjectExtension; // rdi
  bool v29; // zf
  char v30; // cl
  _BYTE *v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  int v34; // eax
  __int64 *v35; // r14
  __int64 v36; // rax
  unsigned __int8 v37; // dl
  unsigned int v38; // esi
  ULONGLONG v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned __int32 v44; // [rsp+38h] [rbp-59h]
  int v45; // [rsp+3Ch] [rbp-55h]
  int v46; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-49h]
  unsigned __int32 *v48; // [rsp+50h] [rbp-41h]
  __int64 v49; // [rsp+58h] [rbp-39h] BYREF
  __int64 v50; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-29h]
  __int128 v52; // [rsp+70h] [rbp-21h] BYREF
  __int64 v53; // [rsp+80h] [rbp-11h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+98h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a2;
  v48 = a2;
  if ( !CiThreadsMovedUp )
  {
    CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
  if ( CiSchedulerInLazyMode )
  {
    DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
    v4 = 2;
  }
  else
  {
    DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
    v4 = 1;
  }
  CiSchedulerSleep(v4, DpcData_high, v2);
  if ( (*v2 & 0xC) != 0 )
    return 0;
  while ( 1 )
  {
    if ( !CiSchedulerDisallowLazyMode )
    {
      v5 = byte_1C0007278;
      v6 = 0;
      CiPotentiallyStarvedProcessors = 0LL;
      if ( !byte_1C0007278 )
        goto LABEL_15;
      v7 = 0;
      v8 = 0LL;
      do
      {
        *((_QWORD *)&v52 + 1) = 0LL;
        v9 = v8 + CiLastIdleStats;
        v53 = 0LL;
        *(_QWORD *)&v52 = *(_QWORD *)(v8 + CiLastIdleStats);
        v10 = PoCpuIdledSinceLastCallImprecise(v6, &v52);
        *((_QWORD *)&v52 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 1LL);
        *((_QWORD *)&v52 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 2LL);
        *((_QWORD *)&v52 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 3LL);
        v11 = (*(__int64 (__fastcall **)(_QWORD))(CiKernelInterface + 16))(v6) + v53;
        v53 = v11;
        if ( !v10 )
        {
          v12 = (unsigned __int64)(unsigned int)(100 - CiSystemResponsiveness) * (v11 - *(_QWORD *)(v9 + 16)) / 0x64;
          v13 = (90 * v12 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
          if ( *((_QWORD *)&v52 + 1) - *(_QWORD *)(v9 + 8) > (v13 + ((90 * v12 - v13) >> 1)) >> 6 )
            CiPotentiallyStarvedProcessors |= 1LL << v7;
        }
        ++v6;
        ++v7;
        v8 += 24LL;
        *(_OWORD *)v9 = v52;
        *(_QWORD *)(v9 + 16) = v53;
      }
      while ( v6 < v5 );
      if ( CiPotentiallyStarvedProcessors )
        v14 = 0;
      else
LABEL_15:
        v14 = (2 * CiProcessorIdleHistoryBits) | 1;
      v2 = v48;
      CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v14;
    }
    if ( !CiProcessorIdleHistoryBits )
      break;
    if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
    {
      if ( !CiSchedulerInLazyMode )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            13LL,
            &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids,
            HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
        CiSchedulerInLazyMode = 1;
      }
      v15 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v16 = 4;
    }
    else
    {
      v15 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
      v16 = 3;
    }
    if ( byte_1C00073C0 )
      CiLogSchedulerWakeup(*v2);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    if ( CiSchedulerInLazyMode )
    {
      SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        goto LABEL_34;
      while ( 1 )
      {
        NextDevice = SystemArgument1->NextDevice;
        if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          break;
LABEL_33:
        SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
        if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_34:
          *v2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
      }
      while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
      {
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          goto LABEL_33;
      }
    }
    if ( qword_1C0007218 )
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
    v49 = 0LL;
    if ( CiSchedulerWaitStatus == 257 )
      v19 = KeQueryInterruptTimePrecise(&v49);
    else
      v19 = MEMORY[0xFFFFF78000000008];
    byte_1C0007224 = 0;
    qword_1C0007218 = v19 + v15;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
      {
        v20 = 0LL;
        LOBYTE(SystemArgument1) = 0;
        goto LABEL_52;
      }
      v20 = *(_QWORD *)&WPP_MAIN_CB.SectorSize ^ (unsigned __int64)&WPP_MAIN_CB.SectorSize;
    }
    else
    {
      v20 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    }
    LOBYTE(SystemArgument1) = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v20 + 24) > v19 + (unsigned __int64)v15 )
        {
          v21 = *(_QWORD *)v20;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v21 )
              break;
            v21 ^= v20;
          }
          if ( !v21 )
            break;
        }
        else
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_51;
            v21 ^= v20;
          }
          if ( !v21 )
          {
LABEL_51:
            LOBYTE(SystemArgument1) = 1;
            break;
          }
        }
        v20 = v21;
      }
    }
LABEL_52:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v20, SystemArgument1, &WPP_MAIN_CB.Reserved);
    CiSchedulerUpdateTimer(v19);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( byte_1C00073C0 )
      CiLogSchedulerSleep(v16);
    v22 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
    v44 = v22;
    if ( !v22 )
      goto LABEL_55;
    while ( 2 )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_134;
      v23 = 0;
      v45 = 0;
      v24 = 0;
      v50 = 0LL;
      if ( CiSchedulerWaitStatus == 257 )
        v25 = KeQueryInterruptTimePrecise(&v50);
      else
        v25 = MEMORY[0xFFFFF78000000008];
      v26 = v25 + 2000;
      v47 = v25;
      v51 = v25 + 2000;
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      CiSchedulerTimerNode = 2LL;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          goto LABEL_116;
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                     + 1);
      }
      else
      {
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( DeviceObjectExtension )
      {
        do
        {
          if ( *(_QWORD *)(DeviceObjectExtension + 24) > v26 )
            break;
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
          v29 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
          *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
          if ( v29 )
          {
            v30 = *(_BYTE *)(DeviceObjectExtension + 36);
            v31 = (_BYTE *)(DeviceObjectExtension + 36);
            v24 |= 0x20u;
            v32 = 96LL;
            if ( !v30 )
              v32 = 56LL;
            v33 = DeviceObjectExtension - v32;
            v34 = *(_DWORD *)(v33 + 184) | 0x10;
            if ( !v30 )
            {
              v34 = *(_DWORD *)(v33 + 184) | 0x30;
              if ( (*(_BYTE *)(v33 + 184) & 1) != 0 )
                v23 = 1;
              ++CiTotalTasksDeadlineExpired;
              v45 = v23;
            }
            v35 = *(__int64 **)(v33 + 32);
            *(_DWORD *)(v33 + 184) = v34;
            if ( v35 != (__int64 *)(v33 + 32) )
            {
              do
              {
                if ( (*((_BYTE *)v35 + 68) & 1) == 0 )
                {
                  if ( CiThreadsMovedUp )
                  {
                    v36 = *(v35 - 1);
                    if ( *(_QWORD *)(v36 + 120) || !*(_BYTE *)(v36 + 132) && *(_QWORD *)(v36 + 80) )
                    {
                      v37 = *(_BYTE *)(*(v35 - 2) + 40);
                      if ( v37 > *((_BYTE *)v35 + 24) )
                        v37 = *((_BYTE *)v35 + 24);
                    }
                    else
                    {
                      v37 = *((_BYTE *)v35 + 24);
                    }
                  }
                  else
                  {
                    v37 = *((_BYTE *)v35 + 26);
                  }
                  v38 = v37;
                  if ( *((unsigned __int8 *)v35 + 27) != v37 )
                  {
                    *((_BYTE *)v35 + 27) = v37;
                    if ( byte_1C00073C0 )
                      CiLogSchedulerEvent(v35 - 10, v37);
                    KeSetActualBasePriorityThread(v35[2], v38);
                  }
                }
                v35 = (__int64 *)*v35;
              }
              while ( v35 != (__int64 *)(v33 + 32) );
              v23 = v45;
              v26 = v51;
            }
            CiSchedulerRefreshTaskIndexQosProperties(v33);
            if ( byte_1C00073C0 )
            {
              v39 = v33 + 144;
              if ( *v31 )
              {
                v55.Ptr = v39;
                *(_QWORD *)&v55.Size = 4LL;
                EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v55);
              }
              else
              {
                UserData.Ptr = v39;
                *(_QWORD *)&UserData.Size = 4LL;
                EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
              }
            }
          }
          else
          {
            v24 |= 0x10u;
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
        if ( (v24 & 0x20) != 0 )
        {
          if ( v23 )
          {
            if ( CiCurrentMediaBufferingState )
            {
              CiCurrentMediaBufferingState = 0;
              v27 = 0LL;
              goto LABEL_113;
            }
          }
          else
          {
            LOBYTE(v27) = CiTotalTasksBuffering != 0;
            if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
              && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
            {
              CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_113:
              PoNotifyMediaBuffering(v27);
            }
          }
        }
        v22 = v44;
        if ( (v24 & 0x10) != 0 )
          goto LABEL_129;
      }
      v25 = v47;
LABEL_116:
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          goto LABEL_127;
        v40 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
      }
      else
      {
        v40 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( v40 )
      {
        if ( v40 != CiSchedulerTimerNode )
        {
          v41 = *(_QWORD *)(v40 + 24);
          if ( v25 <= v41 )
          {
            v42 = v25 - v41;
            if ( v42 < -2000 )
              v42 += 2000LL;
          }
          else
          {
            v42 = 0LL;
          }
          CiSchedulerTimerNode = v40;
          ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
        }
        goto LABEL_129;
      }
LABEL_127:
      if ( CiSchedulerTimerNode != 1 )
      {
        CiSchedulerTimerNode = 1LL;
        ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
      }
LABEL_129:
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( v23 )
      {
        if ( byte_1C00073C0 )
        {
          v56.Ptr = (ULONGLONG)&v46;
          v46 = 1;
          *(_QWORD *)&v56.Size = 4LL;
          EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v56);
        }
        PoLatencySensitivityHint(4LL);
      }
      v22 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v24;
      if ( (v22 & 0xFFFFFFDF) == 0 )
      {
LABEL_134:
        if ( byte_1C00073C0 )
          CiLogSchedulerWakeup(v22);
        v22 = 0;
        v44 = 0;
LABEL_55:
        CiSchedulerWaitStatus = KeWaitForSingleObject(
                                  *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                  Executive,
                                  0,
                                  1u,
                                  0LL);
        continue;
      }
      break;
    }
    v2 = v48;
    *v48 = v22;
    if ( (v22 & 0xC) != 0 )
      return 0;
  }
  if ( CiSchedulerInLazyMode )
  {
    CiSchedulerInLazyMode = 0;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  }
  return 0;
}
