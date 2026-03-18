/*
 * XREFs of ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C019E710
 * Callers:
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E1624 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E09A2 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall DumpPointerEventInt(struct tagPOINTEREVENTINT *a1)
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

  if ( (*((_DWORD *)a1 + 5) & 1) != 0 )
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
        0xBu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_NEW");
  }
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
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
        0xCu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_INRANGE");
  }
  if ( (*((_DWORD *)a1 + 5) & 4) != 0 )
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
        0xDu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_INCONTACT");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x10) != 0 )
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
        0xEu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_FIRSTBUTTON");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x20) != 0 )
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
        0xFu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_SECONDBUTTON");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x40) != 0 )
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
        0x10u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_THIRDBUTTON");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x2000) != 0 )
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
        0x11u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_PRIMARY");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x4000) != 0 )
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
        0x12u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_CONFIDENCE");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x8000) != 0 )
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
        0x13u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_CANCELED");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x10000) != 0 )
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
        0x14u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_DOWN");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x20000) != 0 )
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
        0x15u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_UPDATE");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
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
        0x16u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_UP");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x80000) != 0 )
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
        0x17u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_WHEEL");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x100000) != 0 )
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
        0x18u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_HWHEEL");
  }
  if ( (*((_DWORD *)a1 + 5) & 0x200000) != 0 )
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
        0x19u,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        "POINTER_FLAG_CAPTURECHANGED");
  }
}
