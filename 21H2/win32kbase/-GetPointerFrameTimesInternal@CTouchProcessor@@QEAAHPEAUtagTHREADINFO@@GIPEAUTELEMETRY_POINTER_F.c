/*
 * XREFs of ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01CACF4
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x1C00E5C60 (NtUserGetPointerFrameTimes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01C9C40 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct TELEMETRY_POINTER_FRAME_TIMES *a5)
{
  CTouchProcessor *v5; // rbx
  char v7; // si
  unsigned __int64 ThreadPointerData; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // cl
  int v13; // edx
  bool v14; // cl
  int v15; // edx

  v5 = gpTouchProcessor;
  v7 = a3;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1112),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 319;
      LOBYTE(v13) = v12;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        319,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
        v7);
    }
LABEL_19:
    UserSetLastError(87LL, v9, v10, v11);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataTimes(v5, ThreadPointerData, a4, a5) )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 320;
      LOBYTE(v15) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        320,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    goto LABEL_19;
  }
  return 1LL;
}
