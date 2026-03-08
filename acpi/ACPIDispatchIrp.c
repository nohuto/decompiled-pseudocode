/*
 * XREFs of ACPIDispatchIrp @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000E254 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0024980 (WPP_RECORDER_SF_qq.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C002E528 (ACPIInternalDecrementIrpReferenceCount.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0039ADC (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0041C30 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIWakeDeferredRestoreEnables @ 0x1C0044C38 (ACPIWakeDeferredRestoreEnables.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C00451C0 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008310C (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int8 MajorFunction; // al
  __int64 MinorFunction; // rcx
  unsigned int Status; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  unsigned int LowPart; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  KIRQL v17; // al
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned int (__fastcall *v20)(ULONG_PTR, PIRP); // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 (__fastcall *v23)(ULONG_PTR, PIRP); // rdi
  __int64 (__fastcall *v24)(ULONG_PTR, PIRP); // r8
  unsigned int v25; // ecx
  bool v26; // zf
  unsigned int v27; // edi
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&Event, 0, sizeof(Event));
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v6 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
LABEL_90:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        6,
        17,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        BugCheckParameter3,
        (char)Irp);
    }
    Irp->IoStatus.Status = -1073741810;
    IofCompleteRequest(Irp, 0);
    return 3221225486LL;
  }
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x90234uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  if ( (*(_BYTE *)(v6 + 8) & 4) != 0 )
  {
    v7 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 24);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( !v6 )
    goto LABEL_90;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
LABEL_7:
    v7 += 8LL;
    goto LABEL_8;
  }
  if ( MajorFunction == 27 )
  {
    if ( (_BYTE)MinorFunction )
    {
      v19 = *(_QWORD *)(v7 + 24);
      if ( (unsigned __int8)MinorFunction >= 0x1Au )
      {
        v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v19 + 208);
      }
      else
      {
        v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v19 + 8 * MinorFunction);
        switch ( (_BYTE)MinorFunction )
        {
          case 0xB:
            if ( (*(_DWORD *)(v6 + 8) & 0x200LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x200uLL);
            break;
          case 7:
            if ( *(_DWORD *)(v6 + 368) == 2 && (*(_DWORD *)(v6 + 8) & 0x200LL) != 0 )
            {
              *(_DWORD *)(v6 + 372) = 2;
              *(_DWORD *)(v6 + 368) = 3;
              ACPIInternalNotifyAvailableDeviceObject(v6);
              if ( (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
              {
                LOBYTE(v21) = 1;
                EnableDisableRegionSpacesForDevice(v6, v21);
              }
              ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
            }
            break;
          case 2:
          case 0x17:
            if ( *(_DWORD *)(v6 + 368) == 3 )
            {
              if ( (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
                EnableDisableRegionSpacesForDevice(v6, 0LL);
              *(_DWORD *)(v6 + 372) = 3;
              *(_DWORD *)(v6 + 368) = 2;
            }
            ACPIThermalReleaseCoolingInterfaces(v6);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFDFFuLL);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)(v6 + 752) = &Event;
            ACPIWakeEmptyRequestQueue(v6);
            ACPIInternalDecrementIrpReferenceCount(v6);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 728), 0xFFFFFFFF) != 1 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
            *(_QWORD *)(v6 + 752) = 0LL;
            if ( v20 )
            {
              return v20(BugCheckParameter3, Irp);
            }
            else
            {
              Status = -1073741822;
              Irp->IoStatus.Status = -1073741822;
              IofCompleteRequest(Irp, 0);
            }
            return Status;
        }
      }
    }
    else
    {
      v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
    }
    if ( v20 )
    {
      Status = v20(BugCheckParameter3, Irp);
      goto LABEL_10;
    }
LABEL_53:
    Status = -1073741822;
    Irp->IoStatus.Status = -1073741822;
    IofCompleteRequest(Irp, 0);
LABEL_10:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 728), 0xFFFFFFFF) != 1 )
      return Status;
LABEL_52:
    KeSetEvent(*(PRKEVENT *)(v6 + 752), 0, 0);
    return Status;
  }
  if ( MajorFunction != 22 )
  {
    if ( MajorFunction )
    {
      if ( MajorFunction == 14 )
      {
        RequestorMode = Irp->RequestorMode;
        if ( !RequestorMode
          || (Irp->Flags & 0x400000) != 0
          || RootDeviceExtension
          && BugCheckParameter3 == *(_QWORD *)(RootDeviceExtension + 768)
          && SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
        {
          goto LABEL_7;
        }
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart == 3325956
          || LowPart == 3325952
          || (v15 = LowPart - 3325968, (unsigned int)v15 <= 0x38) && (v16 = 0x111110001111111LL, _bittest64(&v16, v15)) )
        {
          Status = -1073741637;
          Irp->IoStatus.Status = -1073741637;
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v18 = *(_QWORD *)(BugCheckParameter3 + 64);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 16) != 1599293264 )
              KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
          }
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
          if ( *(_QWORD *)(v18 + 776) )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(v18 + 776), Irp);
            goto LABEL_28;
          }
          Status = Irp->IoStatus.Status;
        }
        IofCompleteRequest(Irp, 0);
LABEL_28:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 728), 0xFFFFFFFF) != 1 )
          return Status;
        goto LABEL_52;
      }
      if ( MajorFunction != 2 )
      {
        if ( MajorFunction == 23 )
          v7 += 40LL;
        else
          v7 += 48LL;
      }
    }
LABEL_8:
    if ( *(_QWORD *)v7 )
    {
      Status = (*(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7)(BugCheckParameter3, Irp);
      goto LABEL_10;
    }
    goto LABEL_53;
  }
  v22 = *(_QWORD *)(v7 + 32);
  if ( (unsigned __int8)MinorFunction >= 4u )
  {
    v24 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v22 + 32);
  }
  else
  {
    v23 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v22 + 8 * MinorFunction);
    v24 = v23;
    if ( (_BYTE)MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
    {
      v25 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( *(_DWORD *)(v6 + 548) != v25 )
      {
        v26 = *(_DWORD *)(v6 + 368) == 3;
        *(_DWORD *)(v6 + 548) = v25;
        if ( v26 && (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
        {
          LOBYTE(v8) = v25 == 1;
          EnableDisableRegionSpacesForDevice(v6, v8);
          v24 = v23;
        }
      }
    }
  }
  if ( CurrentStackLocation->MinorFunction == 2
    && !CurrentStackLocation->Parameters.Create.Options
    && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
    && !_bittest64((const signed __int64 *)(v6 + 8), 0x33u)
    && (*(_DWORD *)(v6 + 1008) & 0x1000LL) != 0 )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
    Irp->IoStatus.Status = 0;
    ACPIWakeDeferredRestoreEnables(v6, v8, Irp);
    v27 = 259;
  }
  else if ( v24 )
  {
    v27 = v24(BugCheckParameter3, Irp);
  }
  else
  {
    v27 = -1073741822;
    Irp->IoStatus.Status = -1073741822;
    IofCompleteRequest(Irp, 0);
  }
  ACPIInternalDecrementIrpReferenceCount(v6);
  return v27;
}
