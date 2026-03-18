/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x1406CA8B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x1406CA970 (PspGetNextJobProcess.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ABBA8 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B1DA0 (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v8; // r9
  unsigned int v9; // r15d
  ULONG_PTR NextJobProcess; // rax
  ULONG_PTR v11; // rbp
  int v13; // ebp
  _DWORD *ServerSiloGlobals; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  if ( PsIsServerSilo(a1) )
  {
    v13 = *v4;
    ServerSiloGlobals = PsGetServerSiloGlobals(v5);
    v6 = PspMarkServerSiloAsTerminating(v16, v15, v17);
    if ( v6 )
      ServerSiloGlobals[327] = v13;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 8 * (*(_BYTE *)(a2 + 4) & 1) + 6;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, &v18, v8);
    v11 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 1120) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
