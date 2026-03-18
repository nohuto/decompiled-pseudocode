/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0217594
 * Callers:
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215D40 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C0217FF8 (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C0214B7C (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021532C (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C02153DC (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021548C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02156A0 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02166F8 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C0216B18 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0216CE0 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v3; // rbx
  struct tagDDECONV *v5; // rcx

  v3 = a2;
  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, a3);
    case 0x3E3u:
      return Unadvise((struct tagDDECONV **)a3);
    case 0x3E4u:
      v5 = (struct tagDDECONV *)WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          24,
          4,
          14,
          24,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
      }
      xxxFreeDDEHandle(v5, *v3, 1LL);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, 997);
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
