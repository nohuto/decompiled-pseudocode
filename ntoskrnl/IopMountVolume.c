/*
 * XREFs of IopMountVolume @ 0x14072B180
 * Callers:
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 * Callees:
 *     IoGetActivityIdThread @ 0x140203AD0 (IoGetActivityIdThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140212E10 (FsRtlIsTotalDeviceFailure.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     IopWaitForLockAlertable @ 0x140241084 (IopWaitForLockAlertable.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     IopMountInitializeVpb @ 0x1402B17F0 (IopMountInitializeVpb.c)
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1402B2384 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1402B23D0 (MmIsThisAnNtAsSystem.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x1403CB37C (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1403CFB1C (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x14072BB40 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x140872E40 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rdi
  char v6; // r14
  BOOLEAN v10; // bl
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v13; // rcx
  signed int v14; // ebx
  char VpbFlagsSafe; // al
  __int64 v16; // rax
  _BYTE *v17; // r13
  int v18; // eax
  __int64 **v19; // rdi
  __int64 *v20; // r15
  int v21; // ecx
  char v22; // dl
  char v23; // r12
  __int64 *v24; // rax
  bool v25; // zf
  struct _DEVICE_OBJECT *v26; // r14
  char v27; // bl
  struct _DEVICE_OBJECT *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v32; // rbx
  __int64 v33; // rcx
  NTSTATUS v34; // eax
  ULONG_PTR v35; // rax
  ULONG_PTR v36; // rbx
  struct _KEVENT *v37; // rdi
  __int64 v38; // r12
  char v39; // al
  __int64 v40; // rdx
  char v41; // [rsp+40h] [rbp-C0h]
  BOOLEAN IsThisAnNtAsSystem; // [rsp+43h] [rbp-BDh]
  char v45; // [rsp+44h] [rbp-BCh]
  char v46; // [rsp+45h] [rbp-BBh]
  int v48; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v52; // [rsp+70h] [rbp-90h]
  const GUID *ActivityIdThread; // [rsp+78h] [rbp-88h]
  __int128 v54; // [rsp+80h] [rbp-80h] BYREF
  __int128 v55; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v56; // [rsp+A0h] [rbp-60h]
  __int64 *v57; // [rsp+A8h] [rbp-58h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v60[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+100h] [rbp+0h]

  v56 = a5;
  v5 = 0LL;
  v6 = 0;
  v45 = 0;
  ActivityIdThread = 0LL;
  memset(&Event, 0, sizeof(Event));
  v41 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v61 = 0LL;
  v62 = 0;
  memset(v60, 0, sizeof(v60));
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  if ( !ExAcquireRundownProtection_0(&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v59);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
LABEL_11:
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
    VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
    if ( (VpbFlagsSafe & 9) != 0 )
    {
      v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    }
    else
    {
      if ( v10 )
      {
        if ( MmIsThisAnNtAsSystem() && (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
          McTemplateK0jhzr1_EtwWriteTransfer(
            DosName.Length >> 1,
            (const EVENT_DESCRIPTOR *)IoMgr_MountBegin,
            v5,
            (__int64)&v59,
            DosName.Length >> 1,
            (__int64)DosName.Buffer);
        v45 = 1;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
      v14 = -1073741823;
      v16 = *(_QWORD *)(BugCheckParameter1 + 24);
      v17 = (_BYTE *)BugCheckParameter1;
      while ( v16 )
      {
        v17 = (_BYTE *)v16;
        v16 = *(_QWORD *)(v16 + 24);
      }
      ObfReferenceObject(v17);
      v18 = *(_DWORD *)(BugCheckParameter1 + 72);
      if ( v18 == 7 || v18 == 36 )
      {
        v19 = (__int64 **)IopDiskFileSystemQueueHead;
        v20 = &IopDiskFileSystemQueueHead;
      }
      else if ( v18 == 2 )
      {
        v19 = (__int64 **)IopCdRomFileSystemQueueHead;
        v20 = &IopCdRomFileSystemQueueHead;
      }
      else
      {
        v19 = (__int64 **)IopTapeFileSystemQueueHead;
        v20 = &IopTapeFileSystemQueueHead;
      }
      v21 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
      v48 = v21;
      if ( v19 != (__int64 **)v20 )
      {
        v22 = a2;
        while ( 1 )
        {
          v23 = v6;
          if ( v14 >= 0 )
            goto LABEL_81;
          v24 = *v19;
          v25 = *v19 == v20;
          v57 = *v19;
          v46 = v25;
          if ( !v22 && v24 == v20 && v19 != (__int64 **)*v20 )
            goto LABEL_79;
          if ( !v21 || v24 == v20 )
            break;
LABEL_62:
          v19 = (__int64 **)*v19;
          if ( v19 == (__int64 **)v20 )
            goto LABEL_63;
        }
        v26 = (struct _DEVICE_OBJECT *)(v19 - 10);
        v27 = 1;
        v28 = (struct _DEVICE_OBJECT *)*(v19 - 7);
        BugCheckParameter2 = (ULONG_PTR)(v19 - 10);
        while ( v28 )
        {
          v26 = v28;
          ++v27;
          v28 = v28->AttachedDevice;
        }
        KeResetEvent(&Event);
        LOBYTE(v29) = v17[76] + v27;
        IrpWithExtension = IopAllocateIrpWithExtension(v30, v29, 0LL);
        v32 = (IRP *)IrpWithExtension;
        if ( !IrpWithExtension )
        {
          v14 = -1073741670;
          goto LABEL_79;
        }
        v25 = FeatureDeveloperVolume == 0;
        v33 = *(_QWORD *)(IrpWithExtension + 184);
        *(_DWORD *)(IrpWithExtension + 16) = 66;
        *(_BYTE *)(IrpWithExtension + 64) = 0;
        *(_QWORD *)(IrpWithExtension + 80) = &Event;
        *(_QWORD *)(IrpWithExtension + 72) = &v54;
        *(_QWORD *)(IrpWithExtension + 152) = v52;
        *(_BYTE *)(v33 - 70) = a2;
        *(_WORD *)(v33 - 72) = 269;
        *(_QWORD *)(v33 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
        *(_QWORD *)(v33 - 56) = v17;
        if ( !v25 )
        {
          *(_QWORD *)(IrpWithExtension + 24) = v60;
          *(_DWORD *)(v33 - 48) = 44;
        }
        v50 = IopFsRegistrationOps;
        ObfReferenceObject(v26);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
        _InterlockedIncrement(&IopMountsInProgress);
        ExReleaseResourceLite(&IopDatabaseResource);
        v34 = IofCallDriver(v26, v32);
        if ( v34 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        }
        else
        {
          *((_QWORD *)&v54 + 1) = 0LL;
          LODWORD(v54) = v34;
        }
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
        if ( IopMountCompletionWaiters )
          KeSetEvent(&IopMountCompletionEvent, 0, 0);
        ObfDereferenceObject(v26);
        IopDecrementDeviceObjectRef(BugCheckParameter2, 0, 0);
        v14 = v54;
        if ( (int)v54 >= 0 )
        {
          v35 = IopMountInitializeVpb(BugCheckParameter1, (__int64)v17, v48, v46);
          v6 = v41;
          *v56 = v35;
LABEL_61:
          v21 = v48;
          v22 = a2;
          goto LABEL_62;
        }
        if ( ((unsigned int)(v54 + 1073741662) <= 1
           || (_DWORD)v54 == -1073741643
           || (unsigned int)(v54 + 1073741805) <= 1
           || (_DWORD)v54 == -2147483626
           || (_DWORD)v54 == -1073741806)
          && *((_QWORD *)&v54 + 1) == 1LL )
        {
LABEL_63:
          if ( v14 >= 0 )
            goto LABEL_81;
          goto LABEL_79;
        }
        if ( v50 == IopFsRegistrationOps )
        {
          if ( (_DWORD)v54 == -1073741412 )
          {
            v36 = BugCheckParameter2;
            IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
            ExReleaseResourceLite(&IopDatabaseResource);
            v37 = (struct _KEVENT *)(BugCheckParameter1 + 280);
            if ( a3 )
            {
              v6 = v41;
            }
            else
            {
              KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
              v6 = 0;
              v41 = 0;
            }
            v38 = (__int64)v52;
            KeLeaveCriticalRegionThread((__int64)v52);
            IopLoadFileSystemDriver(v36);
            if ( !a3 )
            {
              v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v38 + 562), a4);
              if ( v14 < 0 )
              {
                ObfDereferenceObject(v17);
                KeLeaveCriticalRegion();
                goto LABEL_82;
              }
              v6 = 1;
              v41 = 1;
            }
            --*(_WORD *)(v38 + 484);
            ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
            v39 = IopQueryVpbFlagsSafe(BugCheckParameter1);
            if ( (v39 & 8) != 0 )
            {
              v14 = -1073741632;
              goto LABEL_79;
            }
            if ( (v39 & 1) != 0 )
            {
              ObfDereferenceObject(v17);
              v14 = 0;
              goto LABEL_81;
            }
            v19 = (__int64 **)&v55;
            *(_QWORD *)&v55 = *v20;
            v14 = -1073741489;
            goto LABEL_61;
          }
        }
        else
        {
          v19 = (__int64 **)&v55;
          *(_QWORD *)&v55 = *v20;
          v14 = -1073741489;
        }
        v41 = v23;
        if ( v14 != -1073741489 )
        {
          v41 = v23;
          if ( FsRtlIsTotalDeviceFailure(v14) )
          {
            v41 = v23;
            if ( !a2 )
              goto LABEL_63;
            v41 = v23;
            if ( v57 == v20 )
              goto LABEL_63;
            v41 = v23;
            v19 = *(__int64 ***)(v20[1] + 8);
          }
        }
        v6 = v23;
        goto LABEL_61;
      }
LABEL_79:
      ObfDereferenceObject(v17);
    }
LABEL_81:
    ExReleaseResourceLite(&IopDatabaseResource);
    v38 = (__int64)v52;
    v37 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_82:
    if ( v41 )
    {
      KeSetEvent(v37, 0, 0);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegionThread(v38);
    if ( IsThisAnNtAsSystem )
    {
      if ( v45 && MmIsThisAnNtAsSystem() )
      {
        if ( v14 < 0 )
        {
          if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
            McTemplateK0jhzr1d_EtwWriteTransfer(
              DosName.Length >> 1,
              v40,
              ActivityIdThread,
              (__int64)&v59,
              DosName.Length >> 1,
              (__int64)DosName.Buffer,
              v14);
        }
        else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
        {
          McTemplateK0jhzr1_EtwWriteTransfer(
            DosName.Length >> 1,
            (const EVENT_DESCRIPTOR *)IoMgr_MountSucceeded,
            ActivityIdThread,
            (__int64)&v59,
            DosName.Length >> 1,
            (__int64)DosName.Buffer);
        }
      }
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
    }
    if ( v14 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
      KeBugCheckEx(0xEDu, BugCheckParameter1, v14, 0LL, 0LL);
    goto LABEL_9;
  }
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
  if ( v14 >= 0 )
  {
    v10 = IsThisAnNtAsSystem;
    v6 = 1;
    v41 = 1;
    goto LABEL_11;
  }
  KeLeaveCriticalRegion();
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
LABEL_9:
  ExReleaseRundownProtection_0(&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
