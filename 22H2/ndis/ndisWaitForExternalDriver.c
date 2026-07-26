/*
 * XREFs of ndisWaitForExternalDriver @ 0x1C0123078
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0122B8C (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ndisFindSomeoneToBlame @ 0x1C0122C44 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C0122F04 (ndisWaitForAllProcessorsIdle.c)
 */

char __fastcall ndisWaitForExternalDriver(PVOID Object, unsigned int a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  unsigned int v7; // ebx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER v14; // [rsp+38h] [rbp-20h] BYREF
  LARGE_INTEGER v15; // [rsp+40h] [rbp-18h] BYREF

  v7 = a2;
  if ( a2 > 0x1388 )
  {
    Timeout.QuadPart = -50000000LL;
    v9 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
    if ( !v9 )
      return 1;
    if ( v9 != 258 )
      ndisBugCheckEx(0x24uLL, 1uLL, v9, 0LL);
    v7 -= 5000;
  }
  ndisWaitForAllProcessorsIdle();
  v14.QuadPart = -10000LL * v7;
  v10 = KeWaitForSingleObject(Object, Executive, 0, 0, &v14);
  if ( !v10 )
    return 1;
  if ( v10 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v10, 0LL);
  ndisWaitForAllProcessorsIdle();
  v15.QuadPart = 0LL;
  v11 = KeWaitForSingleObject(Object, Executive, 0, 0, &v15);
  if ( !v11 )
    return 1;
  if ( v11 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v11, 0LL);
  ndisFindSomeoneToBlame(a3, a4, a5, (_LIST_ENTRY *)KeGetCurrentThread());
  return 0;
}
