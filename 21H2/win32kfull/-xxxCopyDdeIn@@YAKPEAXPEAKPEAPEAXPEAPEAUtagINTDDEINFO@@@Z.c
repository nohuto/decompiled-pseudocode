/*
 * XREFs of ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021647C
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02156A0 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215A00 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C0216170 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02166F8 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0216990 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0216CE0 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02170F0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqq @ 0x1C007AC8C (WPP_RECORDER_AND_TRACE_SF_sqq.c)
 *     xxxClientCopyDDEIn1 @ 0x1C022BA1C (xxxClientCopyDDEIn1.c)
 */

__int64 __fastcall xxxCopyDdeIn(void *a1, unsigned int *a2, void **a3, struct tagINTDDEINFO **a4)
{
  unsigned int v7; // eax
  struct tagINTDDEINFO *v8; // rbx
  unsigned int v9; // ebp
  char v10; // di
  char v11; // dl
  const char *v12; // rax
  int v14; // [rsp+20h] [rbp-58h]

  v7 = xxxClientCopyDDEIn1(a1, *a2, a4);
  v8 = *a4;
  v9 = v7;
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "and freeing";
    if ( (*a2 & 0x1000) == 0 )
      v12 = (const char *)&unk_1C02F2D0B;
    WPP_RECORDER_AND_TRACE_SF_sqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v14,
      0xEu,
      0x3Au,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      v12);
  }
  if ( v9 == 2 )
  {
    *a2 = *((_DWORD *)v8 + 4);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xEu,
        0x3Bu,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        *(_QWORD *)v8,
        *((_QWORD *)v8 + 1),
        *((_QWORD *)v8 + 3));
    if ( a3 )
      *a3 = (void *)*((_QWORD *)v8 + 3);
  }
  return v9;
}
