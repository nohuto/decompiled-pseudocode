/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140827F58
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14038BEF4 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EED34 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
