/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C202C (WPP_RECORDER_SF_qqq.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021AC94 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021AEA4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021BA1C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021C0E8 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C8DC (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v4; // zf
  __int64 *v5; // rsi
  unsigned int v8; // ebx
  int v9; // edx
  struct tagDDECONV *v10; // rcx
  __int64 v11; // rbx
  struct tagINTDDEINFO *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  struct tagINTDDEINFO *v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1 == 996;
  v5 = a2;
  v15 = 0LL;
  if ( !v4 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 32, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v8 = xxxCopyAckIn(a1, v5, a3, &v15);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v8 = 0;
  if ( v8 != 2 )
    return v8;
  v11 = *((_QWORD *)a3 + 7);
  v12 = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      (__int64)v10,
      4u,
      0xEu,
      0x21u,
      (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      *(_QWORD *)(v11 + 40),
      *(_QWORD *)(v11 + 48),
      *(_QWORD *)v15);
  if ( (*(_DWORD *)v12 & 0x8000LL) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      v13 = *(_DWORD *)(v11 + 64);
      goto LABEL_22;
    }
    v14 = 36;
LABEL_20:
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)v10,
      v9,
      14,
      v14,
      (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      *(_QWORD *)(v11 + 40));
    goto LABEL_21;
  }
  v13 = *(_DWORD *)(v11 + 64);
  if ( (v13 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)v10, v9, 14, 34, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      v13 = *(_DWORD *)(v11 + 64);
    }
    FreeListAdd(*((PETHREAD ***)a3 + 4), *(void **)(v11 + 48), v13 & 0xFFFFFFFE);
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 35;
    goto LABEL_20;
  }
LABEL_22:
  xxxFreeDDEHandle(v10, *(void **)(v11 + 40), v13 & 0xFFFFFFFE);
LABEL_23:
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3);
  return 2;
}
