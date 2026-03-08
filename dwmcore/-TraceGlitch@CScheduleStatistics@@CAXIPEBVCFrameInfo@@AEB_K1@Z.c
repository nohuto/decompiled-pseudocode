/*
 * XREFs of ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800E6C40
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18004D474 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer @ 0x1801EFD3C (McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer.c)
 */

void __fastcall CScheduleStatistics::TraceGlitch(
        char a1,
        const struct CFrameInfo *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // r9

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
  {
    v6 = *((_QWORD *)a2 + 9);
    v5 = *((_QWORD *)a2 + 13);
    McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer(
      *a4,
      (unsigned __int64)(1000000 * (v6 - *((_QWORD *)a2 + 8))) % g_qpcFrequency.QuadPart,
      *(_QWORD *)a2,
      (unsigned __int64)(1000000 * (v6 - *((_QWORD *)a2 + 8))) / g_qpcFrequency.QuadPart,
      (unsigned __int64)(1000000 * (*((_QWORD *)a2 + 10) - v6)) / g_qpcFrequency.QuadPart,
      *((_BYTE *)a2 + 226),
      *((_QWORD *)a2 + 11),
      v5,
      10000000 * (v5 - *((_QWORD *)a2 + 11)) / (10 * *a3),
      *((_QWORD *)a2 + 27),
      *((_DWORD *)a2 + 12),
      10000000 * (v5 - *((_QWORD *)a2 + 27)) / (10 * *a3),
      *a3,
      *a4,
      a1);
  }
}
