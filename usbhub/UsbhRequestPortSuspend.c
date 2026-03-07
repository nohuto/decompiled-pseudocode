__int64 __fastcall UsbhRequestPortSuspend(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // rax
  KIRQL v12; // dl

  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937808, a4, 0LL);
  FdoExt(a1);
  if ( !a5 )
  {
    UsbhSignalSuspendEvent(a1, a4);
    return v8;
  }
  v9 = *(_QWORD *)(a4 + 376);
  *(_BYTE *)(v9 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v9 + 136) = 1;
  *(_DWORD *)(v9 + 88) = 2018460752;
  *(_DWORD *)(v9 + 92) = 19;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v9;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  if ( PdoExt(a5)[281] == 2 )
  {
    UsbhBusUnlatchPdo(a1, a5, a4, v10, v9 + 132);
    UsbhDeletePdo(a1, a5, 2LL);
  }
  else
  {
    v11 = *(_QWORD *)(a4 + 376);
    *(_DWORD *)(v11 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v12 = *(_BYTE *)(v11 + 132);
    *(_DWORD *)(v11 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4));
  if ( a3 == 25 )
  {
    UsbhSuspendPort(a1);
  }
  else if ( a3 != 27 )
  {
    return v8;
  }
  return 5;
}
