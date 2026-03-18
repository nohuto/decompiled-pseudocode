/*
 * XREFs of KiCheckPrcbAffinityEx @ 0x140307760
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1402066D0 (KiGroupSchedulingMoveThread.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetIdealProcessorThread @ 0x1403CE96C (KiSetIdealProcessorThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckPrcbAffinityEx(_WORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int8 *)(a2 + 208);
  if ( (unsigned __int16)v2 >= *a1 )
    return 0;
  else
    return (*(_QWORD *)&a1[4 * v2 + 4] >> *(_BYTE *)(a2 + 209)) & 1;
}
