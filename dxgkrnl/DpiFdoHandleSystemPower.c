NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  bool v4; // al
  IRP *v6; // r13
  int v7; // ebx
  int v9; // ebx
  struct _IO_STACK_LOCATION *v10; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  NTSTATUS v12; // eax
  int Status; // r15d
  IO_STATUS_BLOCK *p_IoStatus; // rbx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int LowPart; // eax
  __int64 v19; // rcx
  int v20; // ebx
  unsigned int EaLength; // edi
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  char v27; // [rsp+30h] [rbp-79h]
  char v28; // [rsp+31h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-69h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+48h] [rbp-61h]
  struct _KEVENT Event; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v33[10]; // [rsp+70h] [rbp-39h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v28 = 0;
  v6 = Context;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        Timeout.QuadPart = -300000000LL;
        LOBYTE(Context) = 1;
        DpiFdoStopMiracastSession(DeviceObject, Context, &Timeout, 131LL);
      }
    }
    else
    {
      v7 = -1073741637;
    }
    goto LABEL_4;
  }
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v4 = DeviceExtension[5016] != 0;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 6 || v4 || !HIBYTE(word_1C013B998) )
  {
LABEL_4:
    if ( v7 == -1073741637 )
    {
      ++v6->CurrentLocation;
      ++v6->Tail.Overlay.CurrentStackLocation;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
    }
    RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v6, File, 1u, 0x20u);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = v6->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
    *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v10[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v10->Parameters.SetQuota + 6);
    v10[-1].FileObject = v10->FileObject;
    v10[-1].Control = 0;
    v11 = v6->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
    v11[-1].Context = &Event;
    v11[-1].Control = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
    v12 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v12;
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      goto LABEL_71;
    }
    p_IoStatus = &v6->IoStatus;
    Status = v6->IoStatus.Status;
    if ( Status < 0 )
    {
      WdLogSingleEntry1(3LL, CurrentStackLocation->MinorFunction);
      goto LABEL_72;
    }
    if ( CurrentStackLocation->MinorFunction == 2
      && DeviceExtension[1159]
      && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
      && *((_DWORD *)DeviceExtension + 71) != 1 )
    {
      Timeout.QuadPart = -150000000LL;
      v15 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
      v16 = 258LL;
      if ( v15 != 258 )
      {
        if ( v15 >= 0 )
        {
          v15 = KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL);
          if ( v15 >= 0 )
            goto LABEL_33;
        }
        v16 = v15;
      }
      WdLogSingleEntry1(2LL, v16);
    }
LABEL_33:
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart > 1 )
        *((_DWORD *)DeviceExtension + 70) = LowPart;
    }
    v19 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v20 = *(_DWORD *)&DeviceExtension[4 * v19 + 1312];
    if ( !DeviceExtension[1159] )
    {
      if ( DeviceExtension[480] )
      {
        Status = 0;
        if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
          && *((_DWORD *)DeviceExtension + 5) == 2
          && *((_DWORD *)DeviceExtension + 59) == 2
          && CurrentStackLocation->MinorFunction == 2 )
        {
          EaLength = CurrentStackLocation->Parameters.Create.EaLength;
          if ( !DeviceExtension[1154] || (v27 = 1, (unsigned int)(dword_1C013B7F0 - 4) > 1) )
            v27 = 0;
          if ( v20 == 1 && EaLength == 3 )
          {
            v22 = v19 - 2;
            if ( v22 && (v23 = v22 - 1) != 0 && (v24 = v23 - 1) != 0 )
            {
              if ( v24 == 1 )
                WdLogSingleEntry1(4LL, DeviceObject);
              else
                WdLogSingleEntry1(2LL, DeviceObject);
            }
            else
            {
              EaLength = 2;
              WdLogSingleEntry1(4LL, DeviceObject);
            }
          }
          if ( v27 && v20 < *((_DWORD *)DeviceExtension + 71) && byte_1C013B810 )
          {
            LOBYTE(v17) = 1;
            DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C013B750, v17, 0LL);
            byte_1C013B810 = 0;
            dword_1C013B83C = 1;
            qword_1C013B7F8 = (__int64)KeGetCurrentThread();
            qword_1C013B800 = (__int64)DeviceObject;
          }
          DpiDxgkDdiSetPowerState(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            0xFFFFFFFFLL,
            v20,
            EaLength);
          if ( v27 )
          {
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
            {
              byte_1C013B810 = 1;
              LOBYTE(v25) = 1;
              InbvNotifyDisplayOwnershipChange(v25, DpiEnterSystemDisplay);
            }
            else if ( v20 < *((_DWORD *)DeviceExtension + 71) )
            {
              xmmword_1C013B760 = 0LL;
              DWORD2(xmmword_1C013B760) = -1;
              xmmword_1C013B750 = 0LL;
              memset(&xmmword_1C013B770, 0, 0x80uLL);
              qword_1C013B800 = 0LL;
              qword_1C013B7F8 = (__int64)KeGetCurrentThread();
            }
          }
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3808), 1u);
          *((_DWORD *)DeviceExtension + 71) = v20;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3808));
          KeLeaveCriticalRegion();
          if ( v20 == 1 )
          {
            memset(v33, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v33[1]);
            v33[8] = MEMORY[0xFFFFF78000000014];
            LODWORD(v33[3]) = 11;
            LOBYTE(v33[6]) = -1;
            DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v33);
          }
        }
        *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      else
      {
        v28 = 1;
        v6->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        v26 = PoRequestPowerIrp(
                DeviceObject,
                CurrentStackLocation->MinorFunction,
                (POWER_STATE)v20,
                (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                v6,
                0LL);
        Status = v26;
        if ( v26 != 259 )
          WdLogSingleEntry1(2LL, v26);
      }
    }
    if ( DeviceExtension[484] )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
LABEL_71:
    p_IoStatus = &v6->IoStatus;
    if ( Status == 259 )
      return Status;
LABEL_72:
    PoStartNextPowerIrp(v6);
    p_IoStatus->Status = Status;
    IofCompleteRequest(v6, 0);
    IoReleaseRemoveLockEx(RemoveLock, v6, 0x20u);
    if ( v28 )
      return 259;
    return Status;
  }
  Feature_KsrDisplay__private_ReportDeviceUsage();
  v9 = DpiKsrStopAdapter(DeviceObject, v6);
  if ( v9 == -1073741637 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( (unsigned int)(dword_1C013B7F0 - 1) <= 1 )
    DpiKsrSetBootGraphicsInformation();
  return v9;
}
