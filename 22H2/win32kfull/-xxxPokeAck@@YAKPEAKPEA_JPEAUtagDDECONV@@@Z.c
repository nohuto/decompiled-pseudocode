/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021A6D4 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021A8E4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B45C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BB28 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  bool v4; // zf
  void **v5; // rsi
  int v8; // edi
  int v9; // edx
  __int64 v10; // rdi
  struct tagDDECONV *v11; // rcx
  int v12; // r8d
  struct tagINTDDEINFO *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1 == 996;
  v5 = a2;
  v13 = 0LL;
  if ( !v4 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 43, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v8 = xxxCopyAckIn(a1, v5, a3, &v13);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v8 = 0;
  if ( v8 != 2 )
    return v8;
  v10 = *((_QWORD *)a3 + 7);
  v11 = (struct tagDDECONV *)*(unsigned int *)v13;
  if ( ((unsigned __int16)v11 & 0x8000) != 0 )
  {
    v12 = *(_DWORD *)(v10 + 64);
    if ( (v12 & 0x400) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_((_DWORD)v11, v9, 14, 44, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        v12 = *(_DWORD *)(v10 + 64);
      }
      FreeListAdd(*((PETHREAD ***)a3 + 4), *(void **)(v10 + 40), v12 & 0xFFFFFFFE);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)v11, v9, 14, 45, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
    }
    xxxFreeDDEHandle(v11, *(void **)(v10 + 48), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3);
  return 2;
}
