/*
 * XREFs of ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E66FE
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C01A50A8 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 */

void __fastcall DbgDumpNode(char a1, struct tagRIMPOINTERINFONODE *a2)
{
  struct tagRIMPOINTERINFONODE *v2; // rbx

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      26,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
      a1);
  DumpPointerEventInt((struct tagRIMPOINTERINFONODE *)((char *)v2 + 8));
}
