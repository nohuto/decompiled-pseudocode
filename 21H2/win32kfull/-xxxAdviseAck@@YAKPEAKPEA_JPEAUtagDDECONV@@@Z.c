/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021AC94 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021AEA4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021BA1C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9C0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v4; // zf
  __int64 *v5; // rsi
  unsigned int result; // eax
  unsigned int v8; // edi
  int v9; // edx
  char v10; // cl
  __int64 v11; // rdi
  int v12; // ecx
  PETHREAD **v13; // rcx
  void *v14; // rdx
  struct tagINTDDEINFO *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1 == 996;
  v5 = a2;
  v15 = 0LL;
  if ( !v4 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 26, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v8 = xxxCopyAckIn(a1, v5, a3, &v15);
  v10 = *(_BYTE *)(_HMPheFromObject(a3) + 25);
  result = 1;
  if ( (v10 & 1) != 0 )
    v8 = 0;
  if ( v8 != 2 )
    return v8;
  if ( (*((_DWORD *)a3 + 20) & 6) == 0 )
  {
    v11 = *((_QWORD *)a3 + 7);
    v12 = *(_DWORD *)v15;
    if ( (*(_DWORD *)v15 & 0x8000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(v12, v9, 14, 27, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      v13 = (PETHREAD **)*((_QWORD *)a3 + 4);
      v14 = *(void **)(v11 + 40);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(v12, v9, 14, 28, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      v14 = *(void **)(v11 + 48);
      v13 = (PETHREAD **)a3;
    }
    FreeListAdd(v13, v14, *(_DWORD *)(v11 + 64) & 0xFFFFFFFE);
    PopState(a3);
    return 2;
  }
  return result;
}
