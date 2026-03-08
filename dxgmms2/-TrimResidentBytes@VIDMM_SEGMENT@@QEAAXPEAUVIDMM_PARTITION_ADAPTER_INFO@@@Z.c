/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C01002F0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00E6338 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00E9E40 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(VIDMM_SEGMENT *this, struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  VIDMM_SEGMENT *v4; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v5; // r14
  struct VIDMM_PARTITION_ADAPTER_INFO *v6; // rcx
  VIDMM_GLOBAL *v7; // rcx

  if ( (*((_DWORD *)this + 20) & 0x1001) != 0 && !VIDMM_GLOBAL::VerifyGlobalResidentLimit(this, a2) )
  {
    v4 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
    while ( v4 != (VIDMM_SEGMENT *)((char *)this + 176) )
    {
      v5 = (VIDMM_SEGMENT *)((char *)v4 - 408);
      v4 = *(VIDMM_SEGMENT **)v4;
      v6 = (struct VIDMM_PARTITION_ADAPTER_INFO *)*((_QWORD *)v5 + 64);
      if ( v6 == a2 )
      {
        (*(void (__fastcall **)(VIDMM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
          this,
          v5,
          *((_QWORD *)v5 + 17),
          *((_QWORD *)v5 + 2),
          *(_QWORD *)v6);
        VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)this + 1), v5, 0);
        if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v7, a2) )
          break;
      }
    }
  }
}
