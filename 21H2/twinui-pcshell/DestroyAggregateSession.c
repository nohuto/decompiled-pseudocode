/*
 * XREFs of DestroyAggregateSession @ 0x1801AE088
 * Callers:
 *     CreateTlgAggregateSession @ 0x1801ADF84 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1801AE994 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1801AEAA4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1801ADB28 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
