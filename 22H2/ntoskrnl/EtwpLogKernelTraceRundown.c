/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x14093DC30
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093D79C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x140792248 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x1407922CC (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140792E10 (EtwpLogAlwaysPresentRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  EtwpLogGroupMask(a1, a2, a3, 0x20u);
  EtwpKernelTraceRundown((int *)a3, a1, a2, a4, a5, a6);
  EtwpLogAlwaysPresentRundown(a1, a2);
}
