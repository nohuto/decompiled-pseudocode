/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C0214F68
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02157F0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215D40 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0216EC0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02170F0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall FreeListAdd(PETHREAD **a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  bool v8; // di
  bool v9; // bp
  HANDLE ThreadId; // rax
  int v11; // r8d
  int v12; // edx

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
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        52,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        (char)a2,
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
