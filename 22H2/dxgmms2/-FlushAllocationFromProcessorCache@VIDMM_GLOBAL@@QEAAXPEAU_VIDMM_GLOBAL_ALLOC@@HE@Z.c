/*
 * XREFs of ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00AE590
 * Callers:
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086D10 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088280 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00867FC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C00B4CE4 (-VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushAllocationFromProcessorCache(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v3; // esi
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  void *v6; // rdi
  struct _MDL *v7; // r8
  unsigned __int8 v8; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v4 = (_DWORD *)*((_QWORD *)a2 + 62);
  if ( (*v4 & 4) != 0 && (*v4 & 0x800000) == 0 && !*((_BYTE *)this + 7081) )
  {
    v5 = *((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( !v5 || (*v4 & 8) != 0 )
    {
      v6 = (void *)*((_QWORD *)a2 + 45);
      v3 = 1;
    }
    else
    {
      v6 = *(void **)(v5 + 16);
      KeStackAttachProcess(**(PRKPROCESS **)(v5 + 8), &ApcState);
    }
    VidMmGetFullMDL(a2, 0LL);
    VidMmFlushCpuCacheWorker(v6, *((_QWORD *)a2 + 1), v7, v8);
    if ( !v3 )
      KeUnstackDetachProcess(&ApcState);
  }
}
