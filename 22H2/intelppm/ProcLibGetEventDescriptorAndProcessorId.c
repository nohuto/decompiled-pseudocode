/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x1C00037BC
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000845C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C0024CA8 (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C002BE40 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C002C088 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002C334 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C002C5C4 (ProcLibTraceCap.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C002D68C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002DB90 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C002DE40 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceSummary @ 0x1C002E1EC (ProcLibTraceSummary.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003830 (ProcLibGetProcessorNumber.c)
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 4;
  }
  else
  {
    if ( v6 == 2 || (int)ProcLibGetProcessorNumber(a1, &v10) < 0 )
      return 0LL;
    a3 = a2;
    *(_WORD *)a4 = v10;
    *(_BYTE *)(a4 + 2) = BYTE2(v10);
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 3;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_QWORD *)v8 = a4;
  return a3;
}
