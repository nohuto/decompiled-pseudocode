/*
 * XREFs of PspHandleTableWalker @ 0x1405A1AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 */

char __fastcall PspHandleTableWalker(__int64 a1, volatile signed __int64 *a2, int a3, __int64 a4)
{
  volatile __int64 *v6; // rcx
  __int64 v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedExchangeAdd64(a2, 1uLL);
  v6 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v9, 0);
  if ( *v6 )
    ExpUnblockPushLock(v6, 0LL, 0);
  v7 = *(unsigned int *)(a4 + 12);
  if ( (unsigned int)v7 >= *(_DWORD *)(a4 + 8) )
    return 1;
  *(_DWORD *)(*(_QWORD *)a4 + 4 * v7) = a3;
  ++*(_DWORD *)(a4 + 12);
  return 0;
}
