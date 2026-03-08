/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00F7354
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A9EA8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00F6938 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00F7420 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012020 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00B3A24 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // r9
  void *v3; // rsi
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  void *v9; // rbx
  struct _EPROCESS *v10; // rax
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v2 = *((_QWORD *)this + 10);
  if ( *((_BYTE *)this + 152) )
  {
    v3 = (void *)*((_QWORD *)this + 20);
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    v8 = *(_QWORD *)(v5 + 40) - *(_QWORD *)(v5 + 32);
    if ( v8 <= SmallAllocationSize )
    {
      CurrentProcess = PsGetCurrentProcess(v5, v8, v6, v7);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(CurrentProcess, v3);
    }
    else
    {
      v9 = *(void **)(v7 + 56);
      v10 = (struct _EPROCESS *)PsGetCurrentProcess(v5, v8, v6, v7);
      VidMmUnmapViewAsync(v10, v9, v3);
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(void **)(v2 + 56), *((void **)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
