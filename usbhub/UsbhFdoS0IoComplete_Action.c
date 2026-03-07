__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdi
  KIRQL v9; // al
  int v10; // ecx
  __int64 Status; // r15
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  KIRQL v16; // dl
  __int64 v17; // r12
  __int64 v18; // rdi
  KIRQL v19; // al
  int v20; // ecx
  __int64 v21; // rdi
  KIRQL v22; // dl
  __int64 v23; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v25; // r11
  __int64 Options; // rax
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v32; // r8
  __int64 v33; // r9

  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1932544323, (_DWORD)Irp, Irp->IoStatus.Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  v7 = Context[9];
  v8 = FdoExt(DeviceObject);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 5056));
  v10 = *(_DWORD *)(v8 + 4172);
  *(_BYTE *)(v8 + 5064) = v9;
  *(_DWORD *)(v7 + 40) = v10;
  *(_DWORD *)(v7 + 44) = 113;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 825258857;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v8 + 1344) = v7;
  Status = Irp->IoStatus.Status;
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)DeviceObject, 16, 1346646049, 0, Status);
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  }
  else
  {
    *((_DWORD *)Context + 7) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        1,
        19,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
        (char)DeviceObject);
    Log((_DWORD)DeviceObject, 16, 1349665840, 0, Status);
    v13 = FdoExt(DeviceObject);
    v14 = ((unsigned __int8)*(_DWORD *)(v13 + 828) + 1) & 7;
    *(_DWORD *)(v13 + 828) = v14;
    v14 *= 32LL;
    *(_DWORD *)(v14 + v13 + 284) = 113;
    *(_DWORD *)(v14 + v13 + 288) = *(_DWORD *)(v13 + 4172);
    *(_QWORD *)(v14 + v13 + 292) = 209LL;
    *(_DWORD *)(v13 + 4172) = 209;
    v15 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v7 + 8));
    *(_DWORD *)(v7 + 32) = 1734964085;
    v16 = *(_BYTE *)(v15 + 5064);
    *(_QWORD *)(v15 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 5056), v16);
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START);
    if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, File, 1u, 0x20u) < 0 )
    {
      LODWORD(Status) = 0;
      UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    }
    else
    {
      v17 = PoRequestPowerIrp(
              DeviceObject,
              2u,
              (POWER_STATE)1,
              (PREQUEST_POWER_COMPLETE)UsbhFdoD0PoComplete_Action,
              Context,
              0LL);
      Log((_DWORD)DeviceObject, 16, 1345406000, 0, v17);
      v18 = FdoExt(DeviceObject);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 5056));
      v20 = *(_DWORD *)(v18 + 4172);
      *(_BYTE *)(v18 + 5064) = v19;
      *(_DWORD *)(v7 + 40) = v20;
      *(_DWORD *)(v7 + 44) = 113;
      *(_DWORD *)(v7 + 32) = 844055622;
      *(_DWORD *)(v7 + 36) = 842036073;
      *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
      *(_QWORD *)(v18 + 1344) = v7;
      if ( (int)v17 < 0 || dword_1C006B67C )
      {
        if ( (_DWORD)v17 == 259 )
        {
          Log((_DWORD)DeviceObject, 16, 1349411923, (_DWORD)Irp, v17);
          UsbhReleaseFdoPwrLock(DeviceObject, v7, v32, v33);
          return 3221225494LL;
        }
        LODWORD(Status) = 0;
        UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, 0x20u);
      }
      else
      {
        Log((_DWORD)DeviceObject, 16, 1131245651, (_DWORD)Irp, v17);
        LODWORD(Status) = 0;
        v21 = FdoExt(DeviceObject);
        FdoExt(*(_QWORD *)(v7 + 8));
        *(_DWORD *)(v7 + 32) = 1734964085;
        v22 = *(_BYTE *)(v21 + 5064);
        *(_QWORD *)(v21 + 1344) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 5056), v22);
      }
    }
  }
  v23 = FdoExt(DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v25 = v23;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    Log((_DWORD)DeviceObject, 16, 1347374641, *(_QWORD *)(v25 + 8 * Options + 840), (__int64)Irp);
    Log((_DWORD)DeviceObject, 16, 1347374642, *(_QWORD *)(v28 + 8 * v27 + 856), (__int64)CurrentStackLocation);
    *(_QWORD *)(v30 + 8 * v29 + 840) = 0LL;
    *(_QWORD *)(v30 + 8 * v29 + 856) = 0LL;
    *(_DWORD *)(v30 + 4 * v29 + 872) = 2265;
    PoStartNextPowerIrp(Irp);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Irp, 0x20u);
  Log((_DWORD)DeviceObject, 16, 1349669460, (_DWORD)Irp, (int)Status);
  return (unsigned int)Status;
}
