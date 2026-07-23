/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x140312750
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140312670 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14059E054 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     SmFpAllocate @ 0x1403130C8 (SmFpAllocate.c)
 *     SmSetThreadPagePriority @ 0x1403135D0 (SmSetThreadPagePriority.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1403136BC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmUnlockMdl @ 0x14032989C (SmKmUnlockMdl.c)
 *     ZwUnlockVirtualMemory @ 0x1403FD3C0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059E7A0 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E8C0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406991AC (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406A1BF0 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // ebx
  PVOID v12; // rcx
  PVOID v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rcx
  int v16; // edx
  struct _MDL *v17; // r12
  int v18; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)MmStoreAllocateVirtualMemory();
    v12 = BaseAddress;
    if ( BaseAddress )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v18 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 112));
          v12 = BaseAddress;
          v11 = v18;
          if ( v18 < 0 )
          {
            MmStoreFreeVirtualMemory(BaseAddress);
            goto LABEL_12;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v12;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v14 = *(_DWORD *)(a3 + 16);
    BaseAddress = v13;
    if ( (v14 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v13);
      v15 = *(_QWORD *)(a1 + 112);
      if ( v15 )
        SmKmVirtualLockCtxMemoryUnlocked(v15);
    }
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v9 = *(unsigned int *)(a3 + 16);
      v19[0] = KeGetCurrentThread();
      v10 = SmSetThreadPagePriority(v19, v9);
      v11 = SmKmProbeAndLockAddress(BaseAddress, RegionSize, v8, 0);
      if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v17 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 1);
        v11 = SmKmProbeAndLockAddress(BaseAddress, RegionSize, v8, 1u);
        if ( v11 >= 0 )
          v8->Next = v17;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v17);
      }
      if ( v10 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19, v10);
      if ( v11 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v8;
          goto LABEL_11;
        }
        v11 = -1073741670;
        SmKmUnlockMdl(v8);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v8);
      goto LABEL_12;
    }
LABEL_24:
    v11 = -1073741670;
    goto LABEL_12;
  }
  v16 = v7 - 1;
  if ( !v16 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
    goto LABEL_12;
  }
  if ( v16 != 1 )
  {
    v11 = -1073741811;
    goto LABEL_12;
  }
  BaseAddress = *(PVOID *)a3;
  RegionSize = *(_QWORD *)(a3 + 8);
  ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
LABEL_11:
  v11 = 0;
LABEL_12:
  *(_DWORD *)(a3 + 40) = v11;
}
