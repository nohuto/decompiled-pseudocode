/*
 * XREFs of ObpReferenceCurrentDeviceMap @ 0x140721450
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x140720E70 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402637A0 (PsGetThreadServerSilo.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406D6630 (PsReferenceImpersonationTokenEx.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14075D6E0 (ObpSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     ObpSlowReferenceDeviceMap @ 0x14075DAD8 (ObpSlowReferenceDeviceMap.c)
 */

__int64 __fastcall ObpReferenceCurrentDeviceMap(__int16 a1, signed __int64 **a2)
{
  __int64 v3; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  __int64 ThreadServerSilo; // r12
  signed __int64 *ServerSiloGlobals; // r8
  signed __int64 v10; // rdx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v14; // rax
  void *v15; // rbx
  bool v16; // bp
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF
  bool v18; // [rsp+98h] [rbp+10h] BYREF
  char v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  v16 = ProcessServerSilo != ThreadServerSilo;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 && (a1 & 0x800) == 0 )
  {
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_14;
    v14 = PsReferenceImpersonationTokenEx((__int64)CurrentThread, 1, 0x746C6644u, &v19, &v18, &v20, 0LL);
    v15 = v14;
    if ( !v14 )
      goto LABEL_3;
    if ( v14[3] == 999LL )
    {
      v16 = 1;
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      goto LABEL_14;
    }
    v17[0] = 0LL;
    if ( (int)SeGetTokenDeviceMap(v14, v17) >= 0 )
      v3 = v17[0];
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
    if ( v3 )
      return v3;
  }
  if ( !v16 )
  {
LABEL_3:
    ServerSiloGlobals = (signed __int64 *)(Process + 1416);
    goto LABEL_4;
  }
LABEL_14:
  ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
LABEL_4:
  *a2 = ServerSiloGlobals;
  _m_prefetchw(ServerSiloGlobals);
  v10 = *ServerSiloGlobals;
  if ( (*ServerSiloGlobals & 0xF) == 0 )
    goto LABEL_21;
  do
  {
    v11 = _InterlockedCompareExchange64(ServerSiloGlobals, v10 - 1, v10);
    if ( v10 == v11 )
      break;
    v10 = v11;
  }
  while ( (v11 & 0xF) != 0 );
  if ( (v10 & 0xF) != 0 )
    v12 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  else
LABEL_21:
    v12 = ObpSlowReferenceDeviceMap(ServerSiloGlobals);
  if ( v12 || v16 )
    return v12;
  *a2 = 0LL;
  return ObpSetCurrentProcessDeviceMap();
}
