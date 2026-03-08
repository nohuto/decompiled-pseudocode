/*
 * XREFs of DpiFdoDisconnectInterrupt @ 0x1C03968EC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoDisconnectInterrupt(__int64 a1)
{
  __int64 v1; // rdx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = *(_DWORD *)(v1 + 1360);
  Parameters.ConnectionContext.Generic = *(PVOID *)(v1 + 1368);
  *(_QWORD *)(v1 + 1368) = 0LL;
  IoDisconnectInterruptEx(&Parameters);
}
