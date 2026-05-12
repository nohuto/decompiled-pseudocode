/*
 * XREFs of RaidAdapterDisConnectNonMSIInterrupt @ 0x1C0078170
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002C1B8 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectNonMSIInterrupt(__int64 a1)
{
  ULONG v1; // eax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 708);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = v1;
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 696);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 696) = 0LL;
}
