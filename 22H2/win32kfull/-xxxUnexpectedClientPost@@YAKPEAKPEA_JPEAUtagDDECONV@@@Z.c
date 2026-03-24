/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C31C
 * Callers:
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C021CACC (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C021A304 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AA34 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C021AAA0 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AB0C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021ACB8 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BB28 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BC5C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v3; // rbx

  v3 = a2;
  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, (struct tagDDECONV **)a3);
    case 0x3E3u:
      return Unadvise((struct tagDDECONV **)a3);
    case 0x3E4u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 24, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      xxxFreeDDEHandle((struct tagDDECONV *)a1, *v3, 1u);
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
