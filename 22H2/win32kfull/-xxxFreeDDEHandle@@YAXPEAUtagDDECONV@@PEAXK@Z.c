/*
 * XREFs of ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BB28
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BE00 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C31C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C021CACC (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     xxxClientFreeDDEHandle @ 0x1C0232588 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeDDEHandle(struct tagDDECONV *a1, void *a2, unsigned int a3)
{
  void *v4; // rbx
  char v5; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)a1, (_DWORD)a2, 14, 54, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v5);
  }
  xxxClientFreeDDEHandle(v4, a3);
}
