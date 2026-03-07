void __fastcall CRecalcProp::SetStateAfterProcessing(CRecalcProp *this, struct CMonitorTopology *a2)
{
  char v2; // bl
  int v5; // eax
  char v6; // dl
  char v7; // dl
  const char *v8; // r9

  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2572LL);
  v5 = CMonitorTopology::CompareToCurrent(a2, 0);
  *((_DWORD *)this + 6) = *((_QWORD *)this + 4) != 0LL;
  if ( v5 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x17u,
        0x4Fu,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        v5);
    if ( CRecalcProp::CreateForTopologyChange(**((_QWORD **)this + 2), (__int64)a2, 0) )
      CRecalcProp::s_PostRecalcForWindow(*((struct tagWND **)this + 2));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v6 || v2 )
  {
    v8 = "has pending recalc state";
    if ( !*((_QWORD *)this + 4) )
      v8 = "in free state";
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v2,
      (__int64)gFullLog,
      5u,
      0x17u,
      0x50u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      **((_QWORD **)this + 2),
      v8);
  }
}
