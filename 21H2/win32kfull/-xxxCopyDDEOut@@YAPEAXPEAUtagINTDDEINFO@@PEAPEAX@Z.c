/*
 * XREFs of ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C02162C8
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1C02178B0 (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 *     xxxClientCopyDDEOut1 @ 0x1C022BEA8 (xxxClientCopyDDEOut1.c)
 */

__int64 __fastcall xxxCopyDDEOut(struct tagINTDDEINFO *a1, void **a2, __int64 a3, int a4)
{
  void **v4; // r14
  char v6; // di
  __int64 v7; // rsi
  int v8; // r8d
  char v9; // dl
  int v10; // edx

  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, a4);
  v7 = xxxClientCopyDDEOut1(a1, a2, a3);
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0xEu,
      0x3Du,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1),
      v7);
  if ( v7 && v4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 62;
      LOBYTE(v10) = v6;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v8,
        (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        4,
        14,
        62,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        *((_QWORD *)a1 + 3));
    }
    *v4 = (void *)*((_QWORD *)a1 + 3);
  }
  return v7;
}
