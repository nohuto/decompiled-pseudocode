/*
 * XREFs of UsbhSshSuspendHub @ 0x1C000D970
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSyncBusResume @ 0x1C0002978 (UsbhSyncBusResume.c)
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010064 (UsbhArmHubForWakeDetect.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C003C90C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // eax
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
  int v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h] BYREF
  __int16 v23; // [rsp+58h] [rbp-30h] BYREF
  int v24; // [rsp+5Ah] [rbp-2Eh]
  __int16 v25; // [rsp+5Eh] [rbp-2Ah]
  __int16 v26; // [rsp+A0h] [rbp+18h] BYREF
  int v27; // [rsp+A8h] [rbp+20h] BYREF

  v27 = 0;
  v4 = FdoExt(a1);
  v5 = UsbhSyncSendInternalIoctl(a1, 2228243LL, &v27, 0LL);
  Log((_DWORD)a1, 8, 1970303827, v27, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v6);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event(a1, (unsigned int)(v17 + 3), a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((_DWORD)a1, 0x10000, 1400206152, a2, 0LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0, 0);
    v8 = FdoExt(a1);
    if ( (*(_DWORD *)(v8 + 2560) & 0x80000) == 0 )
    {
      UsbhArmHubForWakeDetect(a1);
      v22 = 0;
      v26 = 0;
      v9 = FdoExt(a1);
      v23 = 768;
      Log((_DWORD)a1, 8, 1400332651, *(_DWORD *)(v9 + 1376), 0LL);
      v24 = 1;
      v25 = 0;
      v10 = UsbhSyncSendCommand((__int64)a1, (__int64)&v23, 0LL, &v26, v20, &v22);
      Log((_DWORD)a1, 8, 1937206065, v10, v22);
      if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v10) )
      {
        LOBYTE(v21) = 0;
        UsbhException((int)a1, 0, 123, 0, 0, v10, v18, usbfile_hub_c, 3746, v21);
      }
      Log((_DWORD)a1, 8, 1937206066, v10, 0LL);
      if ( v10 >= 0 )
        *(_DWORD *)(v8 + 2560) |= 0x80000u;
    }
    FdoExt(a1);
    Log((_DWORD)a1, 2048, 1346458174, 2, a2);
    *(_DWORD *)(a2 + 128) = v11;
    v12 = UsbhDispatch_BusEvent(a1, a2, v11 + 5);
    Log((_DWORD)a1, 2048, 1346458172, 0, v12);
    if ( v13 == 4 )
    {
      v14 = FdoExt(a1);
      if ( *(_QWORD *)(v14 + 4720) )
        v15 = (*(__int64 (__fastcall **)(_QWORD))(v14 + 4720))(*(_QWORD *)(v14 + 1192));
      else
        v15 = -1073741637;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, v15);
      if ( v15 < 0 )
      {
        UsbhSyncBusResume((__int64)a1, a2);
        UsbhDisarmHubWakeOnConnect(a1);
        Usbh_SSH_Event(a1, 3LL, a2);
        KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
        LOBYTE(v21) = 0;
        UsbhException((int)a1, 0, 136, 0, 0, v15, 0, usbfile_sshub_c, 2224, v21);
        v19 = FdoExt(a1);
        UsbhEnableTimerObject((_DWORD)a1, v4 + 3200, *(_DWORD *)(v4 + 5256), 0, v19 + 1912, 2001228627);
      }
      else
      {
        UsbhDisableTimerObject(a1, v4 + 3200);
        Usbh_SSH_Event(a1, 2LL, a2);
      }
      return (unsigned int)v15;
    }
    else
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect(a1);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      *(_BYTE *)(v4 + 3416) = 1;
      Usbh_SSH_Event(a1, 3LL, a2);
      KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
      return 3221225473LL;
    }
  }
}
