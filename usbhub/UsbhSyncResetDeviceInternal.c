/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C0019820
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00551AC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0055B70 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     UsbhLinkPdoDeviceHandle @ 0x1C0002540 (UsbhLinkPdoDeviceHandle.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0004C60 (UsbhAcquireEnumBusLock.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0019754 (UsbhPCE_QueueDriverReset.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0019ED0 (UsbhDerefPdoDeviceHandle.c)
 *     Usbh_HubRestoreDevice @ 0x1C001A81C (Usbh_HubRestoreDevice.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C002ED20 (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C003A608 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C00509A4 (UsbhGetSerialNumber.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  bool v4; // r14
  _DWORD *v6; // rbp
  int v7; // r8d
  _DWORD *v8; // r15
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // bl
  __int64 v11; // r12
  int v12; // r9d
  unsigned __int16 v13; // dx
  __int64 PortData; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r15
  KIRQL v20; // al
  int v21; // edx
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  int v26; // r10d
  int v27; // edx
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 71, (__int64)"FKh&");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)"FKh&",
        v7,
        72,
        (__int64)"FKh&",
        *((_WORD *)v6 + 714),
        a3);
  }
  v8 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  SpinLock = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *((_QWORD *)v6 + 108) )
  {
    Log((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v6 + 108));
    KeReleaseSpinLock(v9, v10);
    LODWORD(v17) = -2147483631;
    goto LABEL_24;
  }
  v6[218] = -1;
  *((_QWORD *)v6 + 108) = &Event;
  *((_QWORD *)v6 + 110) = KeGetCurrentThread();
  KeReleaseSpinLock(v9, v10);
  v11 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
  UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
  Log((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
  Usbh_SSH_Event((__int64)DeviceObject, v12 + 6, a2);
  v13 = *((_WORD *)v6 + 714);
  v6[355] &= ~0x8000u;
  UsbhPCE_QueueDriverReset((__int64)DeviceObject, v13, 0x20000LL, a2, a3);
  Log((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((_WORD *)v6 + 714));
  UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, PortData);
  v17 = (int)v6[218];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v15, v16, 73, (__int64)"FKh&", a3, v6[218]);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 4, 1380214124, 0LL, v17);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
    if ( v11 )
    {
      UsbhLinkPdoDeviceHandle((__int64)DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
    }
    if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v17) )
      UsbhException((int)DeviceObject, *((unsigned __int16 *)v6 + 714), 67, 0, 0, v17, -1, usbfile_bus_c, 6797, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v23, v24, 74, (__int64)"FKh&", a3, v17);
  }
  else
  {
    UsbhAcquireEnumBusLock((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v32 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
    if ( v32 )
    {
      if ( v11 )
      {
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
        Log((__int64)DeviceObject, 4, 1381192786, v11, v32);
        v18 = Usbh_HubRestoreDevice(DeviceObject, a3, v11, v32);
        v19 = v18;
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( v18 < 0 )
          {
            v4 = v18 == -1073741823;
          }
          else if ( (v6[355] & 0x204) == 0x200 )
          {
            *(_OWORD *)Length = 0LL;
            UsbhGetSerialNumber((int)DeviceObject);
            if ( v6[533] )
            {
              v4 = 1;
            }
            else if ( Length[1]
                   && RtlCompareMemory((const void *)Length[1], *((const void **)v6 + 267), HIDWORD(Length[0])) != HIDWORD(Length[0]) )
            {
              v4 = 1;
            }
            UsbhFreeID(Length);
          }
        }
        Log((__int64)DeviceObject, 4, 1380217445, 0LL, v19);
        UsbhDerefPdoDeviceHandle(DeviceObject, v32, a3, 1212446574LL);
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException((int)DeviceObject, *((unsigned __int16 *)v6 + 714), 66, 0, 0, v19, -1, usbfile_bus_c, 6876, 0);
          LOBYTE(v25) = 1;
          UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, v25);
          UsbhLinkPdoDeviceHandle((__int64)DeviceObject, a3, v11);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1380216684, 0LL, v17);
        LODWORD(v19) = v26;
        UsbhDerefPdoDeviceHandle(DeviceObject, v32, a3, 1212446574LL);
      }
      LODWORD(v17) = v19;
      if ( (int)v19 >= 0 )
      {
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006B6C8 )
            {
              if ( (v6[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v17) = UsbhQueueWorkItemEx(
                                 (_DWORD)DeviceObject,
                                 1,
                                 (unsigned int)UsbhUpdateRegSurpriseRemovalCount,
                                 (unsigned int)&byte_1C006B6C8,
                                 *((unsigned __int16 *)v6 + 714),
                                 2001555795,
                                 0LL);
                if ( (v17 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006B6C8 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 75, (__int64)"FKh&", v17);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Log((__int64)DeviceObject, 4, 1380200497, 0LL, v11);
      UsbhLinkPdoDeviceHandle((__int64)DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
      LODWORD(v17) = -1073741823;
    }
    UsbhReleaseEnumBusLockEx((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v9 = SpinLock;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(v9);
  *((_QWORD *)v6 + 108) = 0LL;
  KeReleaseSpinLock(v9, v20);
  if ( !v4 )
    goto LABEL_21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v21, 3, 76, (__int64)"FKh&", (char)DeviceObject);
  Log((__int64)DeviceObject, 4, 1397905220, (int)v17, (__int64)DeviceObject);
  UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v27, 3, 77, (__int64)"FKh&", (char)DeviceObject);
LABEL_21:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 78, (__int64)"FKh&", v17);
  }
LABEL_24:
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE);
  return (unsigned int)v17;
}
