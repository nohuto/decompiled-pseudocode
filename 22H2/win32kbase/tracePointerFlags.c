/*
 * XREFs of tracePointerFlags @ 0x1C019F00C
 * Callers:
 *     tracePointerInfo @ 0x1C00E17C6 (tracePointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E09A2 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall tracePointerFlags(int a1)
{
  char v2; // dl
  char v3; // dl
  char v4; // dl
  char v5; // dl
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // dl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  __int64 v17; // [rsp+20h] [rbp-48h]

  if ( (a1 & 1) != 0 )
  {
    v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x1Cu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "NEW");
  }
  if ( (a1 & 2) != 0 )
  {
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x1Du,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "INRANGE");
  }
  if ( (a1 & 4) != 0 )
  {
    v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x1Eu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "INCONTACT");
  }
  if ( (a1 & 0x10) != 0 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x1Fu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "FIRSTBUTTON");
  }
  if ( (a1 & 0x20) != 0 )
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x20u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "SECONDBUTTON");
  }
  if ( (a1 & 0x40) != 0 )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x21u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "THIRDBUTTON");
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x22u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "PRIMARY");
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x23u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "CONFIDENCE");
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x24u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "CANCELED");
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x25u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "DOWN");
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x26u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "UPDATE");
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x27u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "UP");
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x28u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "WHEEL");
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x29u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "HWHEEL");
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v17,
        1u,
        0x2Au,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "CAPTURECHANGED");
  }
}
