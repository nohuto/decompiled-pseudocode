/*
 * XREFs of ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C009E474
 * Callers:
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C009D788 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C009F05C (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00A1CA0 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00A2E40 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00F5CB0 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00F6F24 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00F7040 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C01057B0 (-UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C01058F0 (-UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0019964 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001ABC0 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F4D0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C009DCC8 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmUnmapViewAsync(struct _EPROCESS *a1, void *a2, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( (byte_1C0076981 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v6, &BeginVidMmUnmapViewAsync, v7, a1, a2, a3);
  ObfReferenceObject(a2);
  v11[8] = 0LL;
  LODWORD(v11[4]) = 2;
  v11[5] = a1;
  v11[6] = a2;
  v11[7] = a3;
  if ( a1 )
    v11[8] = PsGetProcessDxgProcess(a1);
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v11) )
  {
    if ( a1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(a1, a3);
    }
    else
    {
      MmUnmapViewInSystemSpace(a3);
    }
    ObfDereferenceObject(a2);
    if ( (byte_1C0076981 & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v9, &EndVidMmUnmapViewAsync, v10, a1, a2, a3);
  }
}
