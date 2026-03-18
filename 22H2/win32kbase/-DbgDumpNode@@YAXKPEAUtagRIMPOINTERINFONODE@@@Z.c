/*
 * XREFs of ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E1624
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A0738 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C019E710 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 */

void __fastcall DbgDumpNode(int a1, struct tagRIMPOINTERINFONODE *a2)
{
  char v3; // dl

  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x1Au,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
      a1);
  DumpPointerEventInt((struct tagRIMPOINTERINFONODE *)((char *)a2 + 8));
}
