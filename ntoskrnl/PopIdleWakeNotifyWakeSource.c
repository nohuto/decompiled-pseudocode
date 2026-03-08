/*
 * XREFs of PopIdleWakeNotifyWakeSource @ 0x14059B75C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x14059B218 (PopIdleWakeFinalizeWakeSource.c)
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x14059B27C (PopIdleWakeFindOrAllocateWakeSource.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059B80C (PopIdleWakeStopActiveIntervalAccounting.c)
 */

int *__fastcall PopIdleWakeNotifyWakeSource(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  _DWORD *v6; // rbx
  ULONG CurrentProcessorNumber; // eax
  int v11; // ecx
  int *result; // rax

  v6 = PopIdleWakeContext;
  if ( PopIdleWakeContext && a1 == PpmDripsStateIndex && a2 >= 0 )
  {
    PopIdleWakeFinalizeWakeSource(a2, a3);
    PopIdleWakeStopActiveIntervalAccounting(v6);
    *((_QWORD *)v6 + 5) = PopIdleWakeFindOrAllocateWakeSource((__int64)v6, a2, a3);
    *((_QWORD *)v6 + 6) = a5;
    *((_QWORD *)v6 + 1) = a5;
    *((_QWORD *)v6 + 7) = a5 - a4;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    *v6 |= 0x10u;
    v6[16] = CurrentProcessorNumber;
    v11 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 408LL);
  }
  else
  {
    v11 = -1;
  }
  result = a6;
  *a6 = v11;
  return result;
}
