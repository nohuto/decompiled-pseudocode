__int64 __fastcall tracePointerFlags(int a1)
{
  __int64 result; // rax
  bool v3; // dl
  bool v4; // dl
  bool v5; // dl
  bool v6; // dl
  bool v7; // dl
  bool v8; // dl
  bool v9; // dl
  bool v10; // dl
  bool v11; // dl
  bool v12; // dl
  bool v13; // dl
  bool v14; // dl
  bool v15; // dl
  bool v16; // dl
  bool v17; // dl

  if ( (a1 & 1) != 0 )
  {
    v3 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v3 = 1;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v3,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 2) != 0 )
  {
    v4 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v4 = 1;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v4,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 4) != 0 )
  {
    v5 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v5 = 1;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v5,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x10) != 0 )
  {
    v6 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v6 = 1;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v6,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x20) != 0 )
  {
    v7 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v7 = 1;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v7,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x40) != 0 )
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v8 = 1;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v8,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v9 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v9 = 1;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v9,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v10 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v10 = 1;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v10,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v11 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v11 = 1;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v11,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v12 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v12 = 1;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v12,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v13 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v13 = 1;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v13,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v14 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v14 = 1;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v14,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v15 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v15 = 1;
    }
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v15,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v16 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v16 = 1;
    }
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_s(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v16,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 (_DWORD)gRimLog);
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v17 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v17 = 1;
    }
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_AND_TRACE_SF_s(
               WPP_GLOBAL_Control->AttachedDevice,
               v17,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               (_DWORD)gRimLog);
  }
  return result;
}
