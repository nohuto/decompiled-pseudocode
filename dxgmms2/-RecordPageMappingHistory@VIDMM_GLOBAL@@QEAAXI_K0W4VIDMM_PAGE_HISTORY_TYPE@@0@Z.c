/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00E6ED4
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00335C8 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00933C0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( *(_QWORD *)(a1 + 41056) )
  {
    v10 = a1 + 41000;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v11 = *(unsigned int *)(a1 + 41064);
    if ( (_DWORD)v11 == dword_1C0076464 )
    {
      *(_DWORD *)(a1 + 41064) = 0;
      v11 = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 41056) + 48 * v11;
    *(_QWORD *)v12 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v12 + 32) = a5;
    *(_QWORD *)(v12 + 24) = a6;
    *(_DWORD *)(v12 + 36) = a2;
    *(_QWORD *)(v12 + 8) = a3;
    *(_QWORD *)(v12 + 16) = a4;
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(a1 + 40992);
    ++*(_DWORD *)(a1 + 41064);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
