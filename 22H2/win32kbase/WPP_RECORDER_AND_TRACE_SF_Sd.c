/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E774C
 * Callers:
 *     InitializeSensorExplicitly @ 0x1C00844F4 (InitializeSensorExplicitly.c)
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0084588 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E61E4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C01E81F4 (InitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rdi
  __int64 v11; // rbx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  va_list va; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            a8,
                            a7,
                            v17,
                            v16,
                            va,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v18 = v11 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v19) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(Flink, a5, a6, a8, v19, v10, v18, va);
  }
  return result;
}
