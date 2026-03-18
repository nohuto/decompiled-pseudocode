/*
 * XREFs of UsbhResetPort @ 0x1C001AB54
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 *     UsbhReferenceListAdd @ 0x1C001AD54 (UsbhReferenceListAdd.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001AE7C (Usbh_UsbdReadFrameCounter.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001AEC0 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhReferenceListRemove @ 0x1C001DCEC (UsbhReferenceListRemove.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // rdi
  unsigned int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // bl
  int FrameCounter; // eax
  int v11; // edi
  __int64 v12; // rax
  ULONG TimeIncrement; // eax
  int v14; // edx
  int v16; // [rsp+20h] [rbp-68h]
  __int16 v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF
  __int16 v20; // [rsp+ACh] [rbp+24h]
  __int16 v21; // [rsp+AEh] [rbp+26h]

  v18 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 26, (__int64)"FKh&", *(_WORD *)(a2 + 4));
  v6 = (KSPIN_LOCK *)FdoExt(a1);
  v20 = *(_WORD *)(a2 + 4);
  v17 = 0;
  v19 = 262947;
  v21 = 0;
  v7 = UsbhSyncSendCommand(a1, (__int64)&v19, 0LL, &v17, v16, &v18);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v7) )
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v14, v18, usbfile_bus_c, 2486, 0);
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v6 + 618, v9);
  v11 = *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
  v12 = UsbhReferenceListAdd(a1, a2 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v12 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v12) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v11 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v12 )
      LOBYTE(v12) = UsbhReferenceListRemove(a1, a2 + 552);
  }
  return v12;
}
