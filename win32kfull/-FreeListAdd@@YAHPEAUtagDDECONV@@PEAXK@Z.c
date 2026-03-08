/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01FABA8
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB410 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB960 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCA60 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall FreeListAdd(PETHREAD **a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // di
  char v9; // bp
  HANDLE ThreadId; // rax

  result = Win32AllocPoolZInit(24LL, 828666709LL);
  v7 = result;
  if ( result )
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ThreadId = PsGetThreadId(*a1[2]);
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (__int64)gFullLog,
        4u,
        0xEu,
        0x34u,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        a2,
        ThreadId);
    }
    *(_QWORD *)(v7 + 8) = a2;
    result = 1LL;
    *(_DWORD *)(v7 + 16) = a3;
    *(_QWORD *)v7 = a1[9];
    a1[9] = (PETHREAD *)v7;
  }
  return result;
}
