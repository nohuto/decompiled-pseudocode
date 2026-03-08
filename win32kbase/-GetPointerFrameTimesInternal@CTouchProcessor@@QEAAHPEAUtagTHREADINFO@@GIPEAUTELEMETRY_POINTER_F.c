/*
 * XREFs of ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01F8064
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x1C00EEAD0 (NtUserGetPointerFrameTimes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00F2A40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01F6D40 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct TELEMETRY_POINTER_FRAME_TIMES *a5)
{
  char v6; // si
  unsigned __int64 ThreadPointerData; // rax
  int v9; // r8d
  bool v10; // cl
  int v11; // edx
  int v12; // r8d
  bool v13; // cl
  int v14; // edx

  v6 = a3;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 327;
      LOBYTE(v11) = v10;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        327,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        v6);
    }
LABEL_19:
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataTimes((struct _KTHREAD **)this, ThreadPointerData, a4, a5) )
  {
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 328;
      LOBYTE(v14) = v13;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        328,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    goto LABEL_19;
  }
  return 1LL;
}
