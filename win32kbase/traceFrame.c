/*
 * XREFs of traceFrame @ 0x1C01CCAA4
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C01CD8B0 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     tracePointerInfo @ 0x1C00F03A6 (tracePointerInfo.c)
 */

__int64 __fastcall traceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned int *v6; // rbx

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    result = WPP_RECORDER_AND_TRACE_SF_(
               WPP_GLOBAL_Control->AttachedDevice,
               a2,
               a3,
               (_DWORD)gRimLog,
               4,
               1,
               44,
               (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  }
  v5 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v6 = (unsigned int *)(*(_QWORD *)(a1 + 232) + 16LL);
    do
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          (_DWORD)gRimLog,
          4,
          1,
          45,
          (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids,
          *((_WORD *)v6 - 4));
      result = tracePointerInfo(v6, a2, a3);
      ++v5;
      v6 += 48;
    }
    while ( v5 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
