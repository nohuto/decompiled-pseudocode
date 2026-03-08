/*
 * XREFs of AcpiPccAcquireSubspace @ 0x1C0089970
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccAcquireSubspaceCore @ 0x1C0033C0C (AcpiPccAcquireSubspaceCore.c)
 */

__int64 __fastcall AcpiPccAcquireSubspace(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-48h] BYREF
  _BYTE Event[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  v5 = 0LL;
  v3 = 0LL;
  memset(Event, 0, sizeof(Event));
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  result = AcpiPccAcquireSubspaceCore(a1, (__int64)AcpiPccSyncCompletionCallback, (__int64)&v3, &v3);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    return *(unsigned int *)&Event[24];
  }
  return result;
}
