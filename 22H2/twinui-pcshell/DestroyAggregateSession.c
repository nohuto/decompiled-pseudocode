/*
 * XREFs of DestroyAggregateSession @ 0x1801ADED8
 * Callers:
 *     CreateTlgAggregateSession @ 0x1801ADDD4 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1801AE7E4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1801AE8F4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1801AD978 (CancelTimerCallbacksAndDeleteTimer.c)
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
