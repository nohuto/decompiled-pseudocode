/*
 * XREFs of AcpiPccExecuteCommand @ 0x1C0089A00
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccExecuteCommandAsync @ 0x1C0033FB0 (AcpiPccExecuteCommandAsync.c)
 */

__int64 __fastcall AcpiPccExecuteCommand(char *DeferredContext, char a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  _BYTE Event[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v5 = 0LL;
  memset(Event, 0, sizeof(Event));
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  result = AcpiPccExecuteCommandAsync(DeferredContext, a2, (__int64)AcpiPccSyncCompletionCallback, (__int64)&v5);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    return *(unsigned int *)&Event[24];
  }
  return result;
}
