__int64 __fastcall UsbDevice_CompleteConfigureEndpointRequest(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rcx
  unsigned int v8; // ebp
  bool v9; // zf

  if ( !*(_QWORD *)(a1 + 440) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v5 = *(_QWORD *)(a1 + 440);
  v6 = *(_DWORD *)(a1 + 448);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqd(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), a3, a4);
  v7 = *(_BYTE **)(a1 + 592);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 570) = v7[80];
    *(_BYTE *)(a1 + 571) = v7[81];
    *(_BYTE *)(a1 + 572) = v7[82];
  }
  v8 = 0;
  *(_DWORD *)(a1 + 576) = v6;
  v9 = *(_BYTE *)(a1 + 432) == 0;
  *(_DWORD *)(a1 + 448) = -1073741823;
  if ( v9 )
    v8 = v6;
  *(_BYTE *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_BYTE *)(a1 + 452) = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0ppqqqq_EtwWriteTransfer(
      *(unsigned __int8 *)(a1 + 571),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
      *(_QWORD *)a1,
      *(_BYTE *)(a1 + 570),
      *(_BYTE *)(a1 + 571),
      *(_BYTE *)(a1 + 572),
      v6);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v5,
           v8);
}
