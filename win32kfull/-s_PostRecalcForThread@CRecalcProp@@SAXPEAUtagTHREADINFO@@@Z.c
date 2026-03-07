void __fastcall CRecalcProp::s_PostRecalcForThread(PETHREAD *a1)
{
  char v2; // bl
  char v3; // si
  char v4; // di
  char v5; // di
  __int64 v6; // [rsp+40h] [rbp-28h]
  unsigned int ThreadId; // [rsp+40h] [rbp-28h]

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    ThreadId = (unsigned int)PsGetThreadId(*a1);
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (__int64)gFullLog,
      5u,
      0x17u,
      0x3Bu,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      ThreadId);
  }
  if ( !(unsigned int)PostEventMessageEx((struct tagTHREADINFO *)a1, a1[54], 0x16u, 0LL, 0, 1uLL, 0LL, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = (unsigned int)PsGetThreadId(*a1);
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v5,
        (__int64)gFullLog,
        2u,
        0x17u,
        0x3Cu,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        v6);
    }
  }
}
