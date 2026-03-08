/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C0105510
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C0104BC0 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  int AllocationInfo; // ebx
  __int64 v9; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  unsigned int v13; // [rsp+70h] [rbp+28h] BYREF
  int v14; // [rsp+78h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+38h] BYREF
  void *v16; // [rsp+88h] [rbp+40h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != **((_QWORD **)this + 1) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6) + 24) = a2;
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &v15, &v16, &v13, &v14);
  if ( AllocationInfo >= 0 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v11 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &v16,
            0LL,
            &v15,
            0x1000000,
            v13);
    AllocationInfo = v11;
    if ( v11 < 0 )
      WdLogSingleEntry1(4LL, v11);
  }
  if ( AllocationInfo == -1071775472 && bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventPerformanceWarning, v9, 18);
  if ( v14 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)AllocationInfo;
}
