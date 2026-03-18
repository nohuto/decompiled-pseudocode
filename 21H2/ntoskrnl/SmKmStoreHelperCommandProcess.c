/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14037DAEC
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140253900 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1405FBB30 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x140238BC4 (SmSetThreadPagePriority.c)
 *     SmKmUnlockMdl @ 0x140379C24 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14037DD88 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405FC1B0 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405FC2D0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x1407FABA0 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1408042A4 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  int v9; // r15d
  int v10; // ebx
  void *v11; // rcx
  void *v12; // rcx
  int v13; // eax
  ULONG_PTR v14; // rcx
  int v15; // edx
  struct _MDL *v16; // r12
  int v17; // eax
  struct _KTHREAD *v18[2]; // [rsp+30h] [rbp-10h] BYREF
  void *VirtualMemory; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  VirtualMemory = 0LL;
  v20 = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    v20 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (void *)MmStoreAllocateVirtualMemory();
    v11 = VirtualMemory;
    if ( VirtualMemory )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v17 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 112));
          v11 = VirtualMemory;
          v10 = v17;
          if ( v17 < 0 )
          {
            MmStoreFreeVirtualMemory(VirtualMemory);
            goto LABEL_12;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v11;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v12 = *(void **)a3;
    v20 = *(_QWORD *)(a3 + 8);
    v13 = *(_DWORD *)(a3 + 16);
    VirtualMemory = v12;
    if ( (v13 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v12);
      v14 = *(_QWORD *)(a1 + 112);
      if ( v14 )
        SmKmVirtualLockCtxMemoryUnlocked(v14);
    }
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    VirtualMemory = *(void **)a3;
    v20 = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v18[0] = KeGetCurrentThread();
      v9 = SmSetThreadPagePriority(v18);
      v10 = SmKmProbeAndLockAddress(VirtualMemory, v20, v8, 0);
      if ( v10 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v16 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 4, a1, 0LL, 1);
        v10 = SmKmProbeAndLockAddress(VirtualMemory, v20, v8, 1u);
        if ( v10 >= 0 )
          v8->Next = v16;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v16);
      }
      if ( v9 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v18);
      if ( v10 >= 0 )
      {
        VirtualMemory = (void *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 5, a1, (__int64)v8, *(_DWORD *)(a3 + 20) & 1);
        if ( VirtualMemory )
        {
          *(_QWORD *)(a3 + 24) = v8;
          goto LABEL_11;
        }
        v10 = -1073741670;
        SmKmUnlockMdl(v8, *(_QWORD *)(a1 + 120), a1);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v8);
      goto LABEL_12;
    }
LABEL_24:
    v10 = -1073741670;
    goto LABEL_12;
  }
  v15 = v7 - 1;
  if ( !v15 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
    goto LABEL_12;
  }
  if ( v15 != 1 )
  {
    v10 = -1073741811;
    goto LABEL_12;
  }
  VirtualMemory = *(void **)a3;
  v20 = *(_QWORD *)(a3 + 8);
  ZwUnlockVirtualMemory(-1LL, &VirtualMemory, &v20, 1LL);
LABEL_11:
  v10 = 0;
LABEL_12:
  *(_DWORD *)(a3 + 40) = v10;
}
