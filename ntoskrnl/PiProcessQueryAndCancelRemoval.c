/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x14096E8C4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140862BC0 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
 *     PnpFinalizeVetoedRemove @ 0x14096125C (PnpFinalizeVetoedRemove.c)
 *     PipProcessQueryRemovalInKernelMode @ 0x14096EC0C (PipProcessQueryRemovalInKernelMode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        const void **a7)
{
  UNICODE_STRING *v10; // r14
  _WORD *v11; // rdi
  NTSTATUS RemovalInKernelMode; // ebp
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  _WORD *CriticalMemory; // rax
  _WORD *v18; // rdx
  unsigned int v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v20[0] = 0;
  v10 = (UNICODE_STRING *)(a6 + 2);
  v11 = 0LL;
  RemovalInKernelMode = PnpNotifyUserModeDeviceRemoval(
                          a2,
                          *a7,
                          (__int128 *)&GUID_TARGET_DEVICE_QUERY_REMOVE,
                          (__int64)a6,
                          (__int64)(a6 + 2),
                          v20);
  if ( RemovalInKernelMode >= 0 )
  {
    RemovalInKernelMode = PipProcessQueryRemovalInKernelMode(a1, a2, a3, a4, a5, (__int64)a6);
    if ( RemovalInKernelMode >= 0 )
      return (unsigned int)RemovalInKernelMode;
    PnpFinalizeVetoedRemove(a2, *a6, v10);
    v18 = *a7;
  }
  else
  {
    PnpFinalizeVetoedRemove(a2, *a6, v10);
    if ( !v20[0] )
      return (unsigned int)RemovalInKernelMode;
    v13 = v20[0];
    v14 = (char *)*a7;
    do
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v14[2 * v15] );
      v14 += 2 * v15 + 2;
      --v13;
    }
    while ( v13 );
    v16 = (v14 - (_BYTE *)*a7) >> 1;
    CriticalMemory = (_WORD *)PnpAllocateCriticalMemory(a1, 256LL, 2LL * (unsigned int)(v16 + 1), 0x4B706E50u);
    v11 = CriticalMemory;
    if ( !CriticalMemory )
      return (unsigned int)-1073741670;
    memmove(CriticalMemory, *a7, 2LL * (unsigned int)v16);
    v18 = v11;
    v11[(unsigned int)(v16 + 1) - 1] = 0;
  }
  PnpNotifyUserModeDeviceRemoval(a2, v18, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B706E50u);
  return (unsigned int)RemovalInKernelMode;
}
