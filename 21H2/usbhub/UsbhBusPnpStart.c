/*
 * XREFs of UsbhBusPnpStart @ 0x1C0035FB0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     UsbhNumberOfPorts @ 0x1C0028F40 (UsbhNumberOfPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     UsbhInitPortPindicator @ 0x1C002E8B0 (UsbhInitPortPindicator.c)
 *     UsbhInitPortChangeList @ 0x1C0033674 (UsbhInitPortChangeList.c)
 *     UsbhAllocateTimerObject @ 0x1C003AF94 (UsbhAllocateTimerObject.c)
 *     UsbhFreeTimerObject @ 0x1C003B1B0 (UsbhFreeTimerObject.c)
 */

__int64 __fastcall UsbhBusPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned __int16 v5; // bp
  _DWORD *v6; // r14
  _QWORD *v7; // r13
  __int64 TimerObject; // rax
  PIRP Irp; // rax
  __int64 Pool2; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  PIO_WORKITEM WorkItem; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  PIO_WORKITEM v17; // rax
  struct _IO_WORKITEM *v19; // rcx
  __int64 v20; // rsi
  PIO_WORKITEM *v21; // rsi
  IRP *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx

  v4 = FdoExt((__int64)DeviceObject);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0xFu, (__int64)"FKh&");
  Log((__int64)DeviceObject, 4, 1649628242, 0LL, 0LL);
  v6 = v4 + 680;
  *((_QWORD *)v4 + 340) = UsbhAllocateTimerObject(DeviceObject, UsbhIsrRetryTimer, 1232302674LL);
  *((_QWORD *)v4 + 341) = UsbhAllocateTimerObject(DeviceObject, UsbhResetIrqPipeRetryTimer, 1380545137LL);
  v7 = v4 + 692;
  *((_QWORD *)v4 + 346) = UsbhAllocateTimerObject(DeviceObject, UsbHubhInitTimeoutTimer, 1231967343LL);
  TimerObject = UsbhAllocateTimerObject(DeviceObject, UsbhInitRetryTimer, 1231966821LL);
  *((_QWORD *)v4 + 347) = TimerObject;
  if ( *((_QWORD *)v4 + 340) )
  {
    if ( *((_QWORD *)v4 + 341) )
    {
      if ( *v7 )
      {
        if ( TimerObject )
        {
          Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL), 0);
          if ( Irp )
          {
            *((_QWORD *)v4 + 333) = Irp;
            Pool2 = ExAllocatePool2(64LL, 152LL, 1112885333LL);
            *((_QWORD *)v4 + 334) = Pool2;
            if ( Pool2 )
            {
              v11 = *((unsigned __int16 *)v4 + 1316);
              *((_QWORD *)v4 + 335) = 0LL;
              if ( (_WORD)v11 )
              {
                v12 = ExAllocatePool2(64LL, v11, 1112885333LL);
                *((_QWORD *)v4 + 335) = v12;
                if ( v12 )
                {
                  *((_QWORD *)v4 + 382) = 0LL;
                  if ( (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                  {
                    v13 = UsbhNumberOfPorts((__int64)DeviceObject);
                    *((_QWORD *)v4 + 382) = ExAllocatePool2(64LL, 2928LL * v13, 1112885333LL);
                  }
                  if ( *((_QWORD *)v4 + 382) )
                  {
                    v4[763] = (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject);
                    WorkItem = IoAllocateWorkItem(DeviceObject);
                    *((_QWORD *)v4 + 148) = WorkItem;
                    if ( WorkItem )
                    {
                      v15 = *((_QWORD *)v4 + 382);
                      if ( !(unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                      {
LABEL_20:
                        UsbhDispatch_BusEvent(DeviceObject, a2, 4);
                        Log((__int64)DeviceObject, 4, 1045648466, 0LL, 0LL);
                        return 0LL;
                      }
                      v16 = v15 + 28;
                      while ( 1 )
                      {
                        *(_DWORD *)(v16 + 372) = 0;
                        *(_DWORD *)(v16 - 4) = 2017613128;
                        *(_QWORD *)(v16 + 12) = v16 - 4;
                        *(_DWORD *)(v16 - 28) = 1146120296;
                        ++v5;
                        *(_DWORD *)(v16 + 172) = 2017613128;
                        *(_QWORD *)(v16 + 188) = v16 + 172;
                        *(_DWORD *)v16 = 2;
                        *(_QWORD *)(v16 + 4) = DeviceObject;
                        *(_DWORD *)(v16 + 108) = 1734964085;
                        *(_DWORD *)(v16 + 60) = 1734964085;
                        *(_DWORD *)(v16 + 44) = 1734964085;
                        *(_DWORD *)(v16 + 28) = 1734964085;
                        *(_DWORD *)(v16 + 72) = 1734964085;
                        *(_DWORD *)(v16 + 84) = 1734964085;
                        *(_DWORD *)(v16 + 96) = 1734964085;
                        *(_DWORD *)(v16 + 116) = 1734964085;
                        *(_DWORD *)(v16 + 176) = 7;
                        *(_QWORD *)(v16 + 180) = DeviceObject;
                        *(_DWORD *)(v16 + 284) = 1734964085;
                        *(_DWORD *)(v16 + 236) = 1734964085;
                        *(_DWORD *)(v16 + 220) = 1734964085;
                        *(_DWORD *)(v16 + 204) = 1734964085;
                        *(_DWORD *)(v16 + 248) = 1734964085;
                        *(_DWORD *)(v16 + 260) = 1734964085;
                        *(_DWORD *)(v16 + 272) = 1734964085;
                        *(_DWORD *)(v16 + 292) = 1734964085;
                        *(_QWORD *)(v16 - 12) = DeviceObject;
                        *(_WORD *)(v16 - 24) = v5;
                        KeInitializeTimer((PKTIMER)(v16 + 524));
                        KeInitializeDpc((PRKDPC)(v16 + 588), UsbhResetPortTimerDpc, (PVOID)(v16 - 28));
                        KeInitializeEvent((PRKEVENT)(v16 + 740), NotificationEvent, 1u);
                        KeInitializeEvent((PRKEVENT)(v16 + 2388), NotificationEvent, 0);
                        *(_DWORD *)(v16 + 2384) = 0;
                        *(_DWORD *)(v16 + 2412) = 1;
                        KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 2420));
                        v17 = IoAllocateWorkItem(DeviceObject);
                        *(_QWORD *)(v16 + 2428) = v17;
                        if ( !v17 )
                          break;
                        UsbhInitPortChangeList((__int64)DeviceObject, v16 - 28);
                        UsbhInitPortPindicator((__int64)DeviceObject, v16 - 28);
                        v16 += 2928LL;
                        if ( v5 >= (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
                          goto LABEL_20;
                      }
                      v6 = v4 + 680;
                      v5 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v19 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v19 )
  {
    IoFreeWorkItem(v19);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v20 = *((_QWORD *)v4 + 382);
  if ( v20 && (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) )
  {
    v21 = (PIO_WORKITEM *)(v20 + 2456);
    do
    {
      if ( *v21 )
      {
        IoFreeWorkItem(*v21);
        *v21 = 0LL;
      }
      v21 += 366;
      ++v5;
    }
    while ( v5 < (unsigned __int16)UsbhNumberOfPorts((__int64)DeviceObject) );
    v7 = v4 + 692;
  }
  UsbhFreeTimerObject(DeviceObject, v6);
  UsbhFreeTimerObject(DeviceObject, v4 + 682);
  UsbhFreeTimerObject(DeviceObject, v7);
  UsbhFreeTimerObject(DeviceObject, v4 + 694);
  v22 = (IRP *)*((_QWORD *)v4 + 333);
  if ( v22 )
  {
    IoFreeIrp(v22);
    *((_QWORD *)v4 + 333) = 0LL;
  }
  v23 = (void *)*((_QWORD *)v4 + 334);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    *((_QWORD *)v4 + 334) = 0LL;
  }
  v24 = (void *)*((_QWORD *)v4 + 335);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *((_QWORD *)v4 + 335) = 0LL;
  }
  v25 = (void *)*((_QWORD *)v4 + 382);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
  return 3221225626LL;
}
