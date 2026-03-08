/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD134
 * Callers:
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB960 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01FDCA4 (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01FA7BC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C01FAF4C (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01FAFFC (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C01FB0AC (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB2BC (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC298 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAXK@Z @ 0x1C01FC6B8 (-xxxFreeDDEHandle@@YAXPEAXK@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC880 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  int v4; // edx

  v4 = *a1;
  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, a3);
    case 0x3E3u:
      return Unadvise((struct tagDDECONV **)a3);
    case 0x3E4u:
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          (_DWORD)a3,
          24,
          4,
          14,
          24,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
      xxxFreeDDEHandle(*a2, 1u, (__int64)a3);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, v4);
    case 0x3E6u:
      return Request((struct tagDDECONV **)a3);
    case 0x3E7u:
      return xxxPoke(a1, a2, a3);
    case 0x3E8u:
      return xxxExecute(a1, a2, a3);
    default:
      return 0LL;
  }
}
