/*
 * XREFs of UsbhSshSuspendHub @ 0x1C00063E0
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0002F60 (UsbhSyncSendInternalIoctl.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhArmHubForWakeDetect @ 0x1C000AE98 (UsbhArmHubForWakeDetect.c)
 *     UsbhDisableTimerObject @ 0x1C000B4D0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhSyncBusResume @ 0x1C0030F24 (UsbhSyncBusResume.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C003B5DC (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r15
  NTSTATUS v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebp
  int v11; // r9d
  int v12; // eax
  int v13; // r10d
  __int64 v14; // rax
  int v15; // edi
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+50h] [rbp-38h] BYREF
  __int16 v22; // [rsp+58h] [rbp-30h] BYREF
  int v23; // [rsp+5Ah] [rbp-2Eh]
  __int16 v24; // [rsp+5Eh] [rbp-2Ah]
  __int16 v25; // [rsp+A0h] [rbp+18h] BYREF
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0;
  v4 = FdoExt(a1);
  v5 = UsbhSyncSendInternalIoctl((__int64)a1, 0x220013u, (unsigned __int64)&v26, 0LL);
  Log((_DWORD)a1, 8, 1970303827, v26, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v6);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event((__int64)a1, v17 + 3, a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  Log((_DWORD)a1, 0x10000, 1400206152, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0, 0);
  v8 = FdoExt(a1);
  if ( (*(_DWORD *)(v8 + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(a1);
    v21 = 0;
    v25 = 0;
    v9 = FdoExt(a1);
    v22 = 768;
    Log((_DWORD)a1, 8, 1400332651, *(_DWORD *)(v9 + 1376), 0LL);
    v23 = 1;
    v24 = 0;
    v10 = UsbhSyncSendCommand((_DWORD)a1, (unsigned int)&v22, 0, (unsigned int)&v25, v20, (__int64)&v21);
    Log((_DWORD)a1, 8, 1937206065, v10, v21);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v10) )
      UsbhException((int)a1, 0, 123, 0, 0, v10, v18, usbfile_hub_c, 3746, 0);
    Log((_DWORD)a1, 8, 1937206066, v10, 0LL);
    if ( v10 >= 0 )
      *(_DWORD *)(v8 + 2560) |= 0x80000u;
  }
  FdoExt(a1);
  Log((_DWORD)a1, 2048, 1346458174, 2, a2);
  *(_DWORD *)(a2 + 128) = v11;
  v12 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v11 + 5));
  Log((_DWORD)a1, 2048, 1346458172, 0, v12);
  if ( v13 != 4 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
    UsbhDisarmHubWakeOnConnect(a1);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event((__int64)a1, 3u, a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  v14 = FdoExt(a1);
  if ( !*(_QWORD *)(v14 + 4720) )
  {
    v15 = -1073741637;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741637);
    goto LABEL_17;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(v14 + 4720))(*(_QWORD *)(v14 + 1192));
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, v15);
  if ( v15 < 0 )
  {
LABEL_17:
    UsbhSyncBusResume(a1, a2);
    UsbhDisarmHubWakeOnConnect(a1);
    Usbh_SSH_Event((__int64)a1, 3u, a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    UsbhException((int)a1, 0, 136, 0, 0, v15, 0, usbfile_sshub_c, 2224, 0);
    v19 = FdoExt(a1);
    UsbhEnableTimerObject((_DWORD)a1, v4 + 3200, *(_DWORD *)(v4 + 5256), 0, v19 + 1912, 2001228627);
    return (unsigned int)v15;
  }
  UsbhDisableTimerObject(a1, v4 + 3200);
  Usbh_SSH_Event((__int64)a1, 2u, a2);
  return (unsigned int)v15;
}
