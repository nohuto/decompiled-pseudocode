/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00E3954
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C001BB00 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002D900 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0095D04 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1)
{
  __int64 v2; // rcx
  bool v3; // di
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  if ( *((_DWORD *)a1 + 9) || *(_DWORD *)(*(_QWORD *)a1 + 288LL) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 7LL, a1, 0LL, 0LL);
  }
  v2 = *(_QWORD *)a1;
  v3 = (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x40000) != 0;
  v4 = **(_DWORD **)(*(_QWORD *)a1 + 536LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 404LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v4 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v2);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 392LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 384LL));
      *(_DWORD *)(*(_QWORD *)a1 + 72LL) &= ~0x1000000u;
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 536LL));
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) |= 0x400000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( v3 )
    {
      v5 = *((_QWORD *)a1 + 2);
      v6 = **((_QWORD **)a1 + 1);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v6, v5);
    }
    else if ( (v4 & 8) == 0 && (v4 & 0x10) == 0 && (v4 & 0x20) == 0 )
    {
      if ( *((_QWORD *)a1 + 3) )
      {
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
          a1);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 2) = 0LL;
      }
    }
    *((_BYTE *)a1 + 32) |= 4u;
    operator delete(a1);
  }
}
