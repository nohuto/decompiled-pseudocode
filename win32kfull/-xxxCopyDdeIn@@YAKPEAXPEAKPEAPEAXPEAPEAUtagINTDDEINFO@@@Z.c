/*
 * XREFs of ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB2BC (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB620 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FBD3C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC298 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC530 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC880 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C0072510 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqq @ 0x1C01FD548 (WPP_RECORDER_AND_TRACE_SF_sqq.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0214454 (xxxClientCopyDDEIn1.c)
 */

__int64 __fastcall xxxCopyDdeIn(void *a1, unsigned int *a2, void **a3, struct tagINTDDEINFO **a4)
{
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  struct tagINTDDEINFO *v10; // rbx
  unsigned int v11; // ebp
  char v12; // di

  v7 = xxxClientCopyDDEIn1(a1, *a2, a4);
  v10 = *a4;
  v11 = v7;
  v12 = 1;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sqq(WPP_GLOBAL_Control->AttachedDevice, v8, v9, (_DWORD)WPP_GLOBAL_Control);
  }
  if ( v11 == 2 )
  {
    *a2 = *((_DWORD *)v10 + 4);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v12 = 0;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0xEu,
        0x3Au,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        *(_QWORD *)v10,
        *((_QWORD *)v10 + 1),
        *((_QWORD *)v10 + 3));
    if ( a3 )
      *a3 = (void *)*((_QWORD *)v10 + 3);
  }
  return v11;
}
