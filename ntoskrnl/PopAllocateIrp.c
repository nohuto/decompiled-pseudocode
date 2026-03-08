/*
 * XREFs of PopAllocateIrp @ 0x1402BA774
 * Callers:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140AA415C (PopNotifyDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     PopFxLockDevice @ 0x1402B91F4 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x1402BAC6C (PopFxAllocatePowerIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage @ 0x14040B4CC (Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage.c)
 *     PopFxAllocatePowerIrpLegacy @ 0x14040B520 (PopFxAllocatePowerIrpLegacy.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopFxReleaseDevice @ 0x14045A79C (PopFxReleaseDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfIrpWatermark @ 0x140ACAC28 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        _QWORD *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        __int64 *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  _QWORD *v13; // rsi
  __int64 v14; // r12
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r13
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v17; // r15
  int PowerIrp; // eax
  unsigned int v19; // r14d
  PIRP v20; // r15
  PVOID v21; // rax
  _QWORD *v22; // rdx
  PIRP v23; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v25; // rax
  __int64 *v26; // rax
  unsigned int v27; // r15d
  unsigned int v28; // r15d
  __int64 v29; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf
  int IsEnabledDeviceUsage; // eax
  char v37; // cl
  unsigned int v39; // [rsp+48h] [rbp-41h]
  LONG SpinLock[2]; // [rsp+50h] [rbp-39h] BYREF
  PIRP Irp; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  char v46; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  Irp = 0LL;
  *(_QWORD *)SpinLock = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a10 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v46 = 0;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v17 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
    if ( v17 )
    {
      if ( a3 == 2 && a4 == 1 )
      {
        if ( (unsigned int)Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage() )
          PowerIrp = PopFxAllocatePowerIrp(v17, (int)a1, a5, a8, a9, a7, (__int64)&Irp, SpinLock);
        else
          PowerIrp = PopFxAllocatePowerIrpLegacy(v17, (int)a1, a5, a8, a9, a7, (KIRQL)&Irp, (__int64)SpinLock);
        v19 = PowerIrp;
        if ( PowerIrp < 0 && PowerIrp != -1073741130 || PowerIrp == 259 )
        {
          v13 = *(_QWORD **)SpinLock;
          goto LABEL_51;
        }
        if ( PowerIrp >= 0 )
        {
          v14 = *(_QWORD *)(v17 + 80);
          if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v14 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v14 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(struct _DEVICE_OBJECT **)(v14 + 104);
          }
          v20 = Irp;
          v13 = *(_QWORD **)SpinLock;
LABEL_15:
          IoReuseIrp(v20, -1073741637);
          if ( IovUtilVerifierEnabled )
            VfIrpWatermark(v20, 1LL);
          v20->IoStatus.Information = 0LL;
          v20->Tail.Overlay.ListEntry.Blink = &v20->Tail.Overlay.ListEntry;
          v20->Tail.Overlay.ListEntry.Flink = &v20->Tail.Overlay.ListEntry;
          memset(v13, 0, 0x138uLL);
          v21 = Object;
          v13[4] = AttachedDeviceReferenceWithTag;
          v13[3] = v21;
          *((_BYTE *)v13 + 184) = a3;
          *((_DWORD *)v13 + 47) = a4;
          *((_DWORD *)v13 + 48) = a5;
          v13[2] = v20;
          v13[25] = v14;
          v22 = *(_QWORD **)SpinLock;
          v23 = Irp;
          *(_DWORD *)(*(_QWORD *)SpinLock + 212LL) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
          v22[27] = a8;
          v22[28] = a9;
          v22[29] = a1;
          v22[36] = 0LL;
          v22[33] = PopHandleDevicePowerIrpCompletion;
          v22[34] = v22;
          v22[31] = 0LL;
          CurrentStackLocation = v23->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].Context = v22;
          CurrentStackLocation[-1].DeviceObject = 0LL;
          v25 = --v23->Tail.Overlay.CurrentStackLocation;
          --v23->CurrentLocation;
          v25[-1].MajorFunction = 22;
          v25[-1].MinorFunction = a3;
          v25[-1].DeviceObject = AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
          PopIrpLockThread = (__int64)KeGetCurrentThread();
          v26 = (__int64 *)qword_140C3D268;
          if ( *(__int64 **)qword_140C3D268 != &PopIrpList )
            __fastfail(3u);
          v29 = *(_QWORD *)SpinLock;
          PopIrpLockThread = 0LL;
          **(_QWORD **)SpinLock = &PopIrpList;
          *(_QWORD *)(v29 + 8) = v26;
          *v26 = v29;
          qword_140C3D268 = v29;
          KxReleaseQueuedSpinLock(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v34 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v29 = *(_QWORD *)SpinLock;
            }
          }
          __writecr8(OldIrql);
          AttachedDeviceReferenceWithTag = 0LL;
          v13 = 0LL;
          Object = 0LL;
          *a10 = Irp;
          *a11 = v29;
          IsEnabledDeviceUsage = Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage();
          v37 = v46;
          v19 = 0;
          if ( IsEnabledDeviceUsage )
            v37 = 0;
          v46 = v37;
LABEL_51:
          if ( Irp )
            goto LABEL_52;
          goto LABEL_63;
        }
      }
      else
      {
        v19 = -1073741130;
        if ( !a3 )
        {
          v14 = PopFxLockDevice(v17, 0);
          if ( (unsigned int)Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage() )
          {
            if ( v14 )
              v46 = 1;
          }
        }
      }
      Interval.QuadPart = -500000LL;
      v27 = 0;
      while ( 1 )
      {
        if ( v27 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v27;
        *(_QWORD *)SpinLock = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        v13 = *(_QWORD **)SpinLock;
        if ( *(_QWORD *)SpinLock )
          break;
        if ( !a6 || v27 >= 0xA )
          goto LABEL_51;
      }
      v28 = 0;
      while ( 1 )
      {
        if ( v28 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        v39 = v28 + 1;
        Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
        v20 = Irp;
        if ( Irp )
          goto LABEL_15;
        if ( !a6 )
          goto LABEL_52;
        v28 = v39;
        if ( v39 >= 0xA )
          goto LABEL_64;
      }
    }
  }
  v19 = -1073741808;
LABEL_63:
  if ( a6 )
  {
LABEL_64:
    if ( v19 != 259 )
    {
      LOBYTE(BugCheckParameter4) = a4 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
  }
LABEL_52:
  if ( v13 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v13);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x72496F50u);
  if ( (unsigned int)Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage() && v46 )
    PopFxReleaseDevice(v14);
  return v19;
}
