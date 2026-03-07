void __fastcall UsbhResetPortTimerDpc(
        struct _KDPC *Dpc,
        unsigned __int16 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  KIRQL v8; // r10
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x16u, (__int64)"FKh&", DeferredContext[2]);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314083, (__int64)DeferredContext, DeferredContext[2]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = DeferredContext[2];
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x17u, (__int64)"FKh&", v11);
  }
  v5 = (KSPIN_LOCK *)(FdoExt(*((_QWORD *)DeferredContext + 2)) + 1236);
  KeAcquireSpinLockRaiseToDpc(v5);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314033, (__int64)DeferredContext, DeferredContext[2]);
  v6 = (_DWORD *)*((_QWORD *)DeferredContext + 85);
  v7 = *((_QWORD *)DeferredContext + 2);
  if ( !v6 )
    UsbhTrapFatal_Dbg(v7, 0LL);
  if ( *v6 != 1867468116 )
    UsbhTrapFatal_Dbg(v7, *((_QWORD *)DeferredContext + 85));
  Log(v7, 4, 1383361903, *((_QWORD *)DeferredContext + 85), DeferredContext[2]);
  *((_DWORD *)DeferredContext + 174) = 4;
  KeReleaseSpinLock(v5, v8);
  v9 = *((_QWORD *)DeferredContext + 2);
  LODWORD(v12) = 0x10000;
  v6[2] = Usbh_UsbdReadFrameCounter(v9);
  UsbhReferenceListAdd(*((_QWORD *)DeferredContext + 2), (__int64)&v12, 1869444177);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)(DeferredContext + 276));
  KeSetEvent((PRKEVENT)DeferredContext + 32, 0, 0);
  UsbhPCE_QueueChangeObject(
    *((_QWORD *)DeferredContext + 2),
    DeferredContext[2],
    v12,
    (__int64)(DeferredContext + 12),
    v10,
    (__int64)v6);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1383294324, DeferredContext[2], (__int64)v6);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)&v12);
}
