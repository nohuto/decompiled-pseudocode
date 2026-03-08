/*
 * XREFs of ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1C004D524
 * Callers:
 *     VidSchRecommitSchedulingLogs @ 0x1C00196DC (VidSchRecommitSchedulingLogs.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C00AE384 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_SCH_LOG::RecommitSchLog(struct VIDMM_SCH_LOG *a1)
{
  unsigned int v2; // eax
  struct CVirtualAddressAllocator *result; // rax
  struct CVirtualAddressAllocator *v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = VIDMM_GLOBAL::AdapterId(*(VIDMM_GLOBAL **)a1);
  result = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v2, *((_DWORD *)a1 + 6));
  v4 = result;
  if ( result )
  {
    v5 = *((_QWORD *)a1 + 10);
    v10 = 0LL;
    v6 = ((__int64 (__fastcall *)(__int64))DxgCoreInterface[90])(v5);
    VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v10, *((struct _MDL **)a1 + 9), v6);
    v7 = *((unsigned int *)a1 + 6);
    v8 = *((_QWORD *)a1 + 8);
    v11 = 0LL;
    v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(v4, v8, v7, 0LL, 0LL, &v10, 0, &v11, 0LL);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, 379LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to recommit virtual address range for scheduling log",
        379LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (struct CVirtualAddressAllocator *)(unsigned int)v9;
  }
  return result;
}
