/*
 * XREFs of ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B69C
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021ACB8 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B45C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B9F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BC5C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_sqq @ 0x1C003C0F4 (WPP_RECORDER_SF_sqq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C1CCC (WPP_RECORDER_SF_qqq.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0231A70 (xxxClientCopyDDEIn1.c)
 */

__int64 __fastcall xxxCopyDdeIn(void *a1, unsigned int *a2, void **a3, struct tagINTDDEINFO **a4)
{
  unsigned int v8; // eax
  __int64 v9; // rcx
  struct tagINTDDEINFO *v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rcx
  const char *v13; // rax

  v8 = xxxClientCopyDDEIn1(a1, *a2, a4);
  v10 = *a4;
  v11 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v10 )
      v12 = *((_QWORD *)v10 + 3);
    else
      v12 = 0LL;
    v13 = "and freeing";
    if ( (*a2 & 0x1000) == 0 )
      v13 = (const char *)&unk_1C02F5020;
    WPP_RECORDER_SF_sqq(
      v12,
      (__int64)&unk_1C02F5020,
      0xEu,
      0x3Au,
      (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      v13,
      a1,
      v12);
  }
  if ( v11 == 2 )
  {
    *a2 = *((_DWORD *)v10 + 4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqq(
        v9,
        4u,
        0xEu,
        0x3Bu,
        (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
        *(_QWORD *)v10,
        *((_QWORD *)v10 + 1),
        *((_QWORD *)v10 + 3));
    if ( a3 )
      *a3 = (void *)*((_QWORD *)v10 + 3);
  }
  return v11;
}
