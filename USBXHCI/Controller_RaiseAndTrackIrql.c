char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  char v2; // si
  int v3; // edx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  KIRQL v7; // bp
  ULONG CurrentProcessorNumber; // eax
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 316, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          v5,
          v6,
          v14,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          119,
          (__int64)"Not expected to be called at DISPATCH_LEVEL.");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalErrorEx(a1, 0, 4134, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v2 = 1;
    v7 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber < *(_DWORD *)(a1 + 872) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 2LL * CurrentProcessorNumber) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 2LL * CurrentProcessorNumber + 1) = v7;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v9,
          4,
          317,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            v15,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            147,
            (__int64)"Processor index out of range.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalErrorEx(a1, 0, 4135, 0, 0LL, 0LL, 0LL, 0LL);
      KeLowerIrql(v7);
      return 0;
    }
  }
  return v2;
}
