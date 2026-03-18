/*
 * XREFs of UsbhFdoDevicePowerState @ 0x1C0005910
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0004020 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C0009A20 (UsbhFdoSetPowerDx_Action.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000C730 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C000CD2C (UsbhFdoSetPowerD0_Action.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003BE4C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhSetFdoPowerState @ 0x1C003BF08 (UsbhSetFdoPowerState.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char *DeviceExtension; // rdi
  __int64 v6; // rcx
  int LowPart; // r14d
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  char *v10; // rbx
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  KIRQL v17; // dl
  __int16 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  KIRQL v25; // dl
  _IO_STACK_LOCATION *v26; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_32;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1986356304;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = a2;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 1 )
  {
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), a2, File, 1u, 0x20u);
    v9 = v8;
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      a2->IoStatus.Status = v8;
      UsbhPoStartNextPowerIrp_Fdo(a1, a2, 2881LL);
      Log((_DWORD)a1, 16, 1348761121, v9, (__int64)a2);
      IofCompleteRequest(a2, 0);
      return v9;
    }
  }
  v10 = (char *)a1->DeviceExtension;
  if ( !v10 )
LABEL_32:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v11 = v10 + 1384;
  v10[5064] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 632);
  *((_DWORD *)v10 + 356) = *((_DWORD *)v10 + 1043);
  *((_DWORD *)v10 + 357) = 102;
  *((_DWORD *)v10 + 354) = 844055622;
  *((_DWORD *)v10 + 355) = 1937139044;
  *((_QWORD *)v10 + 176) = KeGetCurrentThread();
  *((_QWORD *)v10 + 168) = v10 + 1384;
  if ( LowPart == 1 )
  {
    Log((_DWORD)a1, 16, 1348420656, 0, (__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) != v19 )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        23,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    }
    UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH, 1, 0);
    v20 = FdoExt(a1);
    v21 = ((unsigned __int8)*(_DWORD *)(v20 + 828) + 1) & 7;
    *(_DWORD *)(v20 + 828) = v21;
    v21 *= 32LL;
    *(_DWORD *)(v21 + v20 + 284) = 107;
    *(_DWORD *)(v21 + v20 + 288) = *(_DWORD *)(v20 + 4172);
    *(_QWORD *)(v21 + v20 + 292) = 211LL;
    *(_DWORD *)(v20 + 4172) = 211;
    v22 = FdoExt(a1);
    v23 = *((_QWORD *)v10 + 174);
    v24 = v22;
    FdoExt(v23);
    *((_DWORD *)v11 + 8) = 1734964085;
    v25 = *(_BYTE *)(v24 + 5064);
    *(_QWORD *)(v24 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 5056), v25);
    return UsbhFdoSetPowerD0_Action(a1, v11, a2);
  }
  else
  {
    if ( LowPart >= 2 )
    {
      if ( LowPart <= 3 )
      {
        Log((_DWORD)a1, 16, 1348420728, LowPart, (__int64)a2);
        UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, LowPart, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            24,
            (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
            LowPart);
        UsbhSetFdoPowerState(a1, 1LL, 204LL);
        UsbhReleaseFdoPwrLock(a1, v10 + 1384);
        return UsbhFdoSetPowerDx_Action(a1);
      }
      if ( LowPart == 4 )
      {
        Log((_DWORD)a1, 16, 1348420728, 4, (__int64)a2);
        UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, 4, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              25,
              (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
              4);
        }
        v12 = FdoExt(a1);
        v13 = ((unsigned __int8)*(_DWORD *)(v12 + 828) + 1) & 7;
        *(_DWORD *)(v12 + 828) = v13;
        v13 *= 32LL;
        *(_DWORD *)(v13 + v12 + 284) = 105;
        *(_DWORD *)(v13 + v12 + 288) = *(_DWORD *)(v12 + 4172);
        *(_QWORD *)(v13 + v12 + 292) = 204LL;
        *(_DWORD *)(v12 + 4172) = 204;
        v14 = FdoExt(a1);
        v15 = *((_QWORD *)v10 + 174);
        v16 = v14;
        FdoExt(v15);
        *((_DWORD *)v11 + 8) = 1734964085;
        v17 = *(_BYTE *)(v16 + 5064);
        *(_QWORD *)(v16 + 1344) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
        return UsbhFdoSetPowerDx_Action(a1);
      }
    }
    UsbhReleaseFdoPwrLock(a1, v10 + 1384);
    UsbhPoStartNextPowerIrp_Fdo(a1, a2, 2945LL);
    v26 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v26[-1].MajorFunction = *(_OWORD *)&v26->MajorFunction;
    *(_OWORD *)&v26[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v26->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v26[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v26->Parameters.SetQuota + 6);
    v26[-1].FileObject = v26->FileObject;
    v26[-1].Control = 0;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
  }
}
