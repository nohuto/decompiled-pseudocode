/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x1406F8A00
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     PspCompleteServerSiloShutdown @ 0x1409A9AC8 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B12C8 (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // rbp
  int v12; // ebp
  _DWORD *ServerSiloGlobals; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  if ( PsIsServerSilo(a1) )
  {
    v12 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating(v15, v14, v16);
    if ( v6 )
      ServerSiloGlobals[327] = v12;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; i = v10 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v17,
           i);
    v10 = v9;
    if ( !v9 )
      break;
    if ( (*(_DWORD *)(v9 + 1120) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)v9);
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
