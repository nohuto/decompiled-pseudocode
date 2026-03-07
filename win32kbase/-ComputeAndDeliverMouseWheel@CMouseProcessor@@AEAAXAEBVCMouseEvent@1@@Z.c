void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v3; // rdx
  int MouseWheelRoutingMode; // ebx
  CMouseProcessor *v6; // rcx
  int v7; // eax
  _QWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  unsigned int v11; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v3 + 112) & 8) != 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(v3 + 104) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(v6) )
      goto LABEL_16;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
    if ( MouseWheelRoutingMode )
      goto LABEL_16;
  }
  if ( !gpqForeground )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      LOBYTE(v3) = 0;
    }
    else
    {
      LODWORD(v3) = 1;
    }
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        39,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    return;
  }
LABEL_16:
  if ( ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xC00) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4445);
  v7 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
  v8[1] = *((_QWORD *)a2 + 1);
  v8[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v11 = ((unsigned int)~v7 >> 10) & 1;
  v10 = MouseWheelRoutingMode;
  v9 = 3;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v8);
}
