__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  struct _KEVENT *v4; // r15
  NTSTATUS v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  int v10; // ebp
  int v11; // r9d
  int v12; // eax
  int v13; // r10d
  _DWORD *v14; // rax
  int v15; // edi
  int v17; // r9d
  int v18; // r10d
  _DWORD *v19; // rax
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+50h] [rbp-38h] BYREF
  __int16 v22; // [rsp+58h] [rbp-30h] BYREF
  int v23; // [rsp+5Ah] [rbp-2Eh]
  __int16 v24; // [rsp+5Eh] [rbp-2Ah]
  __int16 v25; // [rsp+A0h] [rbp+18h] BYREF
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0;
  v4 = (struct _KEVENT *)FdoExt((__int64)a1);
  v5 = UsbhSyncSendInternalIoctl((__int64)a1, 0x220013u, (unsigned __int64)&v26, 0LL);
  Log((_DWORD)a1, 8, 1970303827, v26, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v6);
    LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
    Usbh_SSH_Event((__int64)a1, v17 + 3, a2);
    KeSetEvent(v4 + 141, 0, 0);
    return 3221225473LL;
  }
  Log((_DWORD)a1, 0x10000, 1400206152, a2, 0LL);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START);
  v8 = FdoExt((__int64)a1);
  if ( (v8[640] & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(a1);
    v21 = 0;
    v25 = 0;
    v9 = FdoExt((__int64)a1);
    v22 = 768;
    Log((_DWORD)a1, 8, 1400332651, v9[344], 0LL);
    v23 = 1;
    v24 = 0;
    v10 = UsbhSyncSendCommand((_DWORD)a1, (unsigned int)&v22, 0, (unsigned int)&v25, v20, (__int64)&v21);
    Log((_DWORD)a1, 8, 1937206065, v10, v21);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v10) )
      UsbhException((int)a1, 0, 123, 0, 0, v10, v18, usbfile_hub_c, 3746, 0);
    Log((_DWORD)a1, 8, 1937206066, v10, 0LL);
    if ( v10 >= 0 )
      v8[640] |= 0x80000u;
  }
  FdoExt((__int64)a1);
  Log((_DWORD)a1, 2048, 1346458174, 2, a2);
  *(_DWORD *)(a2 + 128) = v11;
  v12 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v11 + 5));
  Log((_DWORD)a1, 2048, 1346458172, 0, v12);
  if ( v13 != 4 )
  {
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED);
    UsbhDisarmHubWakeOnConnect(a1);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE);
    LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
    Usbh_SSH_Event((__int64)a1, 3u, a2);
    KeSetEvent(v4 + 141, 0, 0);
    return 3221225473LL;
  }
  v14 = FdoExt((__int64)a1);
  if ( !*((_QWORD *)v14 + 590) )
  {
    v15 = -1073741637;
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE);
    goto LABEL_17;
  }
  v15 = (*((__int64 (__fastcall **)(_QWORD))v14 + 590))(*((_QWORD *)v14 + 149));
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE);
  if ( v15 < 0 )
  {
LABEL_17:
    UsbhSyncBusResume(a1, a2);
    UsbhDisarmHubWakeOnConnect(a1);
    Usbh_SSH_Event((__int64)a1, 3u, a2);
    KeSetEvent(v4 + 141, 0, 0);
    UsbhException((int)a1, 0, 136, 0, 0, v15, 0, usbfile_sshub_c, 2224, 0);
    v19 = FdoExt((__int64)a1);
    UsbhEnableTimerObject(
      (__int64)a1,
      (__int64)&v4[133].Header.WaitListHead,
      v4[219].Header.Lock,
      0,
      (__int64)(v19 + 478),
      0x77485353u);
    return (unsigned int)v15;
  }
  UsbhDisableTimerObject((__int64)a1, (__int64)&v4[133].Header.WaitListHead);
  Usbh_SSH_Event((__int64)a1, 2u, a2);
  return (unsigned int)v15;
}
