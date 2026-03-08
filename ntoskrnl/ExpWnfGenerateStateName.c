/*
 * XREFs of ExpWnfGenerateStateName @ 0x14071BF88
 * Callers:
 *     NtCreateWnfStateName @ 0x14071BBD0 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14079B558 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(__int64 *a1, int a2, int a3, char a4)
{
  char v5; // di
  volatile signed __int64 *ServerSiloGlobals; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  signed __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v5 = a3;
  if ( (unsigned int)(a3 - 4) <= 1 )
  {
    v15 = PdcCreateWatchdogAroundClientCall();
    ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(v15);
  }
  else
  {
    PsGetCurrentServerSilo();
    ServerSiloGlobals = (volatile signed __int64 *)PsGetCurrentServerSiloGlobals();
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(v10, v16, v9, ServerSiloGlobals + 114);
    if ( (int)result < 0 )
      return result;
    v13 = v16[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(ServerSiloGlobals + 120, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v16[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (16 * ((v13 << 7) | a2 & 3)) | (a4 != 0 ? 0x400 : 0) | ((v5 & 0xF) << 6) & 0x7FEu | 1;
  return 0LL;
}
