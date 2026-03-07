void __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  unsigned int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // bl
  int FrameCounter; // eax
  int v11; // edi
  ULONG TimeIncrement; // eax
  int v13; // edx
  int v14; // [rsp+20h] [rbp-68h]
  __int16 v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF
  int v17; // [rsp+A8h] [rbp+20h] BYREF
  __int16 v18; // [rsp+ACh] [rbp+24h]
  __int16 v19; // [rsp+AEh] [rbp+26h]

  v16 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 26, (__int64)"FKh&", *(_WORD *)(a2 + 4));
  v6 = FdoExt(a1);
  v18 = *(_WORD *)(a2 + 4);
  v15 = 0;
  v17 = 262947;
  v19 = 0;
  v7 = UsbhSyncSendCommand(a1, (unsigned int)&v17, 0, (unsigned int)&v15, v14, (__int64)&v16);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v7) )
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v13, v16, usbfile_bus_c, 2486, 0);
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v9);
  v11 = *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
  if ( (UsbhReferenceListAdd(a1, a2 + 552, 1380799602) & 0xC0000000) != 0xC0000000 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer((PKTIMER)(a2 + 552), (LARGE_INTEGER)(int)(1 - 10000 * v11 - TimeIncrement), (PKDPC)(a2 + 616)) )
      UsbhReferenceListRemove(a1, a2 + 552);
  }
}
