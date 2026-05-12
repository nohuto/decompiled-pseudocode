/*
 * XREFs of RaidGetNpemControlInterface @ 0x1C0045378
 * Callers:
 *     RaidSetLedStateByNpem @ 0x1C0045CD4 (RaidSetLedStateByNpem.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     RaidQueryNpemControlInterface @ 0x1C0045940 (RaidQueryNpemControlInterface.c)
 */

__int64 __fastcall RaidGetNpemControlInterface(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  PVOID Pool; // rbx
  __int64 v7; // rdx
  int NpemControlInterface; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5816);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x504E6152u, a1);
    if ( Pool )
    {
      NpemControlInterface = RaidQueryNpemControlInterface(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( NpemControlInterface < 0
        || (LOBYTE(v7) = 1,
            NpemControlInterface = (*((__int64 (__fastcall **)(_QWORD, __int64))Pool + 4))(*((_QWORD *)Pool + 1), v7),
            NpemControlInterface < 0) )
      {
        ExFreePoolWithTag(Pool, 0x504E6152u);
        Pool = 0LL;
      }
      else
      {
        *a2 = Pool;
      }
      *(_QWORD *)(v3 + 5816) = Pool;
      return (unsigned int)NpemControlInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
