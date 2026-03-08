/*
 * XREFs of ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00E4A28
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00B188C (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00EF3A4 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall LockParavirtualizedAllocationOnHost(__int64 **a1, void **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  VIDMM_PROCESS *v7; // rbp
  struct _MDL *FullMDL; // rax
  int v9; // edi
  __int64 v10; // rcx

  v3 = **a1;
  v4 = *(_QWORD *)(v3 + 120);
  if ( v4 && (*(_DWORD *)(v4 + 80) & 0x1001) == 0 )
  {
    WdLogSingleEntry1(1LL, **a1);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225473LL;
  }
  if ( *(_QWORD *)(v3 + 560) )
    goto LABEL_7;
  v7 = (VIDMM_PROCESS *)a1[1][1];
  FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)**a1, 0LL);
  if ( FullMDL )
  {
    v9 = VIDMM_PROCESS::MapHostAddressesToGuest(
           v7,
           FullMDL,
           *(_QWORD *)(v3 + 8),
           (void **)(v3 + 560),
           (unsigned __int64 *)(v3 + 568));
    if ( v9 >= 0 )
    {
LABEL_7:
      *a2 = *(void **)(v3 + 568);
      return 0LL;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  WdLogSingleEntry1(1LL, v9);
  DxgkLogInternalTriageEvent(v10, 0x40000LL);
  return (unsigned int)v9;
}
