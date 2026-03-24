/*
 * XREFs of MouseStart @ 0x1C0002730
 * Callers:
 *     MousePnP @ 0x1C0001570 (MousePnP.c)
 *     MouseStartWorker @ 0x1C00026A0 (MouseStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002950 (__security_check_cookie.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00042E8 (MouseClassCheckWaitWakeEnabled.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000D1A0 (MouseSendIrpSynchronously.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000DF40 (MouseClassCreateWaitWakeIrp.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000E100 (MouseClassGetWaitWakeEnableState.c)
 */

__int64 __fastcall MouseStart(__int64 a1, __int64 a2)
{
  IRP *v2; // rdi
  int *v3; // rbx
  int Status; // ebp
  NTSTATUS v5; // esi
  ULONG_PTR Information; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  char v10; // di
  char *v11; // rbp
  __int64 v12; // rcx
  KIRQL v13; // al
  bool v14; // di
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  v2->IoStatus.Status = -1073741637;
  v5 = 0;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Information = 0LL;
  v15[0] = 65600LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15[1] = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v15;
  if ( (int)MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    v3[67] = v18;
    v3[68] = HIDWORD(v17);
    *(_OWORD *)(v3 + 62) = v16;
    v3[66] = v17;
  }
  v2->IoStatus.Information = Information;
  v2->IoStatus.Status = Status;
  *((_BYTE *)v3 + 65) = 1;
  if ( v3[67] <= 1 || v3[68] <= 1 )
  {
    v3[46] = 1;
  }
  else
  {
    v3[46] = 2;
    MouseClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *((_QWORD *)v3 + 24) = &MouseClassWmiGuidList;
  *((_QWORD *)v3 + 29) = 0LL;
  *((_QWORD *)v3 + 25) = MouseClassQueryWmiRegInfo;
  *((_QWORD *)v3 + 26) = MouseClassQueryWmiDataBlock;
  *((_QWORD *)v3 + 27) = MouseClassSetWmiDataBlock;
  *((_QWORD *)v3 + 28) = MouseClassSetWmiDataItem;
  *((_QWORD *)v3 + 30) = 0LL;
  IoWMIRegistrationControl(v8, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    else
    {
      v10 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45] + 16);
      v11 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[45];
      v11[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v10 )
      {
        LOBYTE(v12) = 1;
        v5 = MouEnableDisablePort(v12, 0LL, v3, v11);
        if ( v5 < 0 )
          v11[16] = 0;
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
  }
  if ( v3[67] > 1 && v3[68] > 1 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
    v14 = *((_QWORD *)v3 + 35) && !*((_BYTE *)v3 + 288);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v13);
    if ( !v14 )
    {
      if ( (unsigned __int8)MouseClassCheckWaitWakeEnabled(v3) )
        MouseClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)v5;
}
