/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085DF0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0102D14 (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_SEGMENT *v4; // rcx
  __int64 v5; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // r8d
  unsigned int v7; // edx
  struct VIDMM_PARTITION *v8; // r9
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rdx
  char **v14; // rcx
  char *v15; // rsi
  char **v16; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[19], *((void **)a2 + 17));
  v4 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 15);
  *((_DWORD *)a2 + 28) = 2;
  *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = VIDMM_SEGMENT::DriverId(v4);
  *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  v5 = *((_QWORD *)a2 + 2);
  v6 = *((_DWORD *)this + 119);
  v7 = *((_DWORD *)this + 95);
  v8 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 64);
  v9 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v5);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v9, v7, v6, v8);
  *((_QWORD *)SegmentGroupState + 15) += v5;
  ++*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v11 = *((_QWORD *)a2 + 65);
    if ( !v11 || _InterlockedIncrement((volatile signed __int32 *)(v11 + 44)) == 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 56LL), *((_QWORD *)a2 + 2));
  }
  v12 = (char *)a2 + 408;
  v13 = *((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v13 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v14 = (char **)*((_QWORD *)a2 + 52), *v14 != v12)
    || (*v14 = (char *)v13,
        v15 = (char *)(this + 20),
        *(_QWORD *)(v13 + 8) = v14,
        v16 = (char **)*((_QWORD *)v15 + 1),
        *v16 != v15) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v12 = v15;
  *((_QWORD *)a2 + 52) = v16;
  *v16 = v12;
  *((_QWORD *)v15 + 1) = v12;
}
