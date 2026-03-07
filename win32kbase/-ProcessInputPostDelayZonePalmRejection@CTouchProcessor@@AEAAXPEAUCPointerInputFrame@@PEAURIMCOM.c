void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  struct RIMCOMPLETEFRAME *v3; // rsi
  struct CPointerInputFrame *v4; // rdi
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  struct RIMCOMPLETEFRAME *v9; // r9
  unsigned int v10; // r8d
  const struct CPointerInputFrame *v11; // rax
  const struct RIMCOMPLETEFRAME *v12; // rdx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  unsigned int i; // edi
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (*((_DWORD *)a2 + 57) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1096);
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      37,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v7 = *((_QWORD *)v4 + 8);
  *((_DWORD *)v4 + 57) |= 0x200u;
  v8 = HMValidateHandleNoSecure(v7, 19);
  if ( v8 )
    v10 = *(_DWORD *)(v8 + 1324);
  else
    v10 = 0;
  v11 = CTouchProcessor::PopulateReferencedInputFrame(this, v4, v10, v9);
  v13 = (int)v11;
  if ( v11 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      (CTouchProcessor *)this,
      v12,
      v11,
      *((_QWORD *)v11 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 32) + 360LL), 4),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 32) + 360LL), 5),
      0);
    for ( i = 0; i < *((_DWORD *)v3 + 6); ++i )
    {
      LODWORD(v12) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
      {
        v17[0] = 0LL;
        v17[1] = *((_QWORD *)v3 + 29) + 16LL + 192LL * i;
        CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
          (CCompositionRefreshRateBooster *)((char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 96),
          (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)v17);
      }
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v12 || v6 )
    {
      v15 = 40;
      goto LABEL_48;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        38,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v12 || v6 )
    {
      v15 = 39;
LABEL_48:
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        v14->AttachedDevice,
        (_DWORD)v12,
        v13,
        v14->DeviceExtension,
        5,
        7,
        v15,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
}
