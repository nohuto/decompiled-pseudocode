/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01FABA8 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01FAE20 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FBD3C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAXK@Z @ 0x1C01FC6B8 (-xxxFreeDDEHandle@@YAXPEAXK@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD260 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rbx
  void **v4; // rsi
  int v7; // edi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdi
  struct tagINTDDEINFO *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = a3;
  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
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
      (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      4,
      14,
      43,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, v3, &v11);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  if ( v7 != 2 )
    return v7;
  v10 = *((_QWORD *)v3 + 7);
  if ( (*(_DWORD *)v11 & 0x8000LL) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 64) & 0x400) != 0 )
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
          4,
          14,
          44,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
      }
      FreeListAdd(*((PETHREAD ***)v3 + 4), *(void **)(v10 + 40), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE);
    }
  }
  else
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        4,
        14,
        45,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
    xxxFreeDDEHandle(*(void **)(v10 + 48), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE, v9);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  PopState(v3);
  return 2;
}
