/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x14068ECF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x14068EDB0 (PspGetNextJobProcess.c)
 *     PspCompleteServerSiloShutdown @ 0x140905F50 (PspCompleteServerSiloShutdown.c)
 *     PspMarkServerSiloAsTerminating @ 0x14090B780 (PspMarkServerSiloAsTerminating.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbp
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
      ServerSiloGlobals[279] = v13;
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
    v10 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
            a1,
            CurrentThread,
            &v18,
            v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)(v10 + 1120) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)v10, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
