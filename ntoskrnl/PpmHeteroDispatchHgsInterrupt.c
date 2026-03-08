/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x14059C2E0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 */

__int64 PpmHeteroDispatchHgsInterrupt()
{
  REGHANDLE v0; // rbx
  __int64 result; // rax

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HGS_UPDATE) )
      EtwWriteEx(v0, &PPM_ETW_HGS_UPDATE, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  result = (unsigned int)_InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc((ULONG_PTR)&PpmHeteroHgsUpdateDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
