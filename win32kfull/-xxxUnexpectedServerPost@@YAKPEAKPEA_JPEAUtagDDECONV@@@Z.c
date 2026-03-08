/*
 * XREFs of ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD260
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB410 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC1D0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC530 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCA60 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD030 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01FDCA4 (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01FA7BC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01FAFFC (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB620 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAXK@Z @ 0x1C01FC6B8 (-xxxFreeDDEHandle@@YAXPEAXK@Z.c)
 */

__int64 __fastcall xxxUnexpectedServerPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  int v4; // edx

  v4 = *a1;
  if ( *a1 == 993 )
    return SpontaneousTerminate(a1, a3);
  if ( *a1 == 994 || *a1 == 995 )
    return AbnormalDDEPost(a3, v4);
  if ( *a1 != 996 )
  {
    if ( *a1 == 997 )
      return xxxAdviseData(a1, a2, a3);
    if ( *a1 != 998 && *a1 - 999 >= 2 )
      return 0LL;
    return AbnormalDDEPost(a3, v4);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      (_DWORD)a3,
      23,
      4,
      14,
      23,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  xxxFreeDDEHandle(*a2, 1u, (__int64)a3);
  return 3LL;
}
