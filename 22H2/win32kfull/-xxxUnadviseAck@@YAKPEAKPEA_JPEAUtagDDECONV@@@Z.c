/*
 * XREFs of ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021A8E4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B45C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxUnadviseAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  bool v4; // zf
  void **v5; // rsi
  int v8; // edi
  struct tagINTDDEINFO *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1 == 996;
  v5 = a2;
  v9 = 0LL;
  if ( !v4 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 38, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v8 = xxxCopyAckIn(a1, v5, a3, &v9);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v8 = 0;
  if ( v8 != 2 )
    return v8;
  PopState(a3);
  return 2;
}
