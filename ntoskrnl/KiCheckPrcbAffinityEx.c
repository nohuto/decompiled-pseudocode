/*
 * XREFs of KiCheckPrcbAffinityEx @ 0x1402ADF54
 * Callers:
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1402ADB10 (KiGroupSchedulingMoveThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KiSetIdealProcessorThread @ 0x1403C93BC (KiSetIdealProcessorThread.c)
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
