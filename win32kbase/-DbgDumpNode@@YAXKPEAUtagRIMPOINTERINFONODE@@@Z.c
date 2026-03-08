/*
 * XREFs of ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00F0204
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01CE320 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C01CC2F0 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 */

void __fastcall DbgDumpNode(char a1, struct tagRIMPOINTERINFONODE *a2)
{
  struct tagRIMPOINTERINFONODE *v2; // rbx

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      26,
      (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids,
      a1);
  DumpPointerEventInt((struct tagRIMPOINTERINFONODE *)((char *)v2 + 8));
}
