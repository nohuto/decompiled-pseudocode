/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x1405C93E8
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140356AC0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1405C931C (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x140356A74 (SmSetThreadPagePriority.c)
 *     ZwUnlockVirtualMemory @ 0x140415E70 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1405C8A1C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmUnlockMdl @ 0x1405C9ACC (SmKmUnlockMdl.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405C9C84 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405C9DA4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A430C0 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  volatile LONG *v10; // rcx
  struct _MDL *v11; // r14
  int v12; // r15d
  struct _MDL *v13; // r12
  void *v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rcx
  void *v17; // rcx
  int v18; // eax
  struct _KTHREAD *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  void *VirtualMemory; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+48h]

  VirtualMemory = 0LL;
  v21 = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    v21 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (void *)MmStoreAllocateVirtualMemory();
    v17 = VirtualMemory;
    if ( VirtualMemory )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v18 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 112));
          v17 = VirtualMemory;
          v9 = v18;
          if ( v18 < 0 )
          {
            MmStoreFreeVirtualMemory(VirtualMemory);
            goto LABEL_33;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v17;
LABEL_32:
      v9 = 0;
      goto LABEL_33;
    }
LABEL_10:
    v9 = -1073741670;
    goto LABEL_33;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = *(void **)a3;
    v21 = *(_QWORD *)(a3 + 8);
    v15 = *(_DWORD *)(a3 + 16);
    VirtualMemory = v14;
    if ( (v15 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v14);
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 )
        SmKmVirtualLockCtxMemoryUnlocked(v16);
    }
    goto LABEL_32;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *(volatile LONG **)(a1 + 120);
    VirtualMemory = *(void **)a3;
    v21 = *(_QWORD *)(a3 + 8);
    v11 = (struct _MDL *)SmFpAllocate(v10, 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v11 )
    {
      v19[0] = KeGetCurrentThread();
      v12 = SmSetThreadPagePriority(v19);
      v9 = SmKmProbeAndLockAddress((unsigned __int64)VirtualMemory, v21, v11);
      if ( v9 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v13 = (struct _MDL *)SmFpAllocate(*(volatile LONG **)(a1 + 120), 4, a1, 0LL, 1);
        v9 = SmKmProbeAndLockAddress((unsigned __int64)VirtualMemory, v21, v11);
        if ( v9 >= 0 )
          v11->Next = v13;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v13);
      }
      if ( v12 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19);
      if ( v9 >= 0 )
      {
        VirtualMemory = (void *)SmFpAllocate(
                                  *(volatile LONG **)(a1 + 120),
                                  5,
                                  a1,
                                  (__int64)v11,
                                  *(_DWORD *)(a3 + 20) & 1);
        if ( VirtualMemory )
        {
          *(_QWORD *)(a3 + 24) = v11;
          goto LABEL_32;
        }
        v9 = -1073741670;
        SmKmUnlockMdl(v11);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v11);
      goto LABEL_33;
    }
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
    goto LABEL_33;
  }
  if ( v8 == 1 )
  {
    VirtualMemory = *(void **)a3;
    v21 = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory(-1LL, (__int64)&VirtualMemory);
    goto LABEL_32;
  }
  v9 = -1073741811;
LABEL_33:
  *(_DWORD *)(a3 + 40) = v9;
}
