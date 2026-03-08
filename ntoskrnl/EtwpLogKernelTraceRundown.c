/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1409EBEA0
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409EBA08 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x14080D970 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14080E2F8 (EtwpLogAlwaysPresentRundown.c)
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
  EtwpKernelTraceRundown((unsigned int *)a3, a1, a2, a4, a5, a6);
  EtwpLogAlwaysPresentRundown(a1, a2);
}
