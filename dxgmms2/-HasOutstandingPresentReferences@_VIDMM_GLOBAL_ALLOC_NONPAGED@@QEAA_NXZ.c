/*
 * XREFs of ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C001BCB2
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0015360 (VidSchSubmitDeviceCommand.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001602C (VidSchiCheckConditionDeviceCommand.c)
 *     ?CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x1C001BC1A (-CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00E44EC (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00EBBC4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDB60 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDBD0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDC00 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF3C0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF510 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(_VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 24);
    if ( *(_BYTE *)(v2 + 28) )
      return 0;
    v4 = *(unsigned __int64 **)(v2 + 64);
    if ( *(_BYTE *)(v2 + 29) )
    {
      if ( *v4 >= v3 )
        return 0;
    }
    else if ( *(_DWORD *)v4 - (int)v3 >= 0 )
    {
      return 0;
    }
    return 1;
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    if ( !v6 )
      return 0;
    return *(_DWORD *)(v6 + 8) > 0;
  }
}
