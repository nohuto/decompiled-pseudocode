/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00EEEA8
 * Callers:
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00E0EA4 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 * Callees:
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

__int64 __fastcall VIDMM_PROCESS::ChangeVideoMemoryReservation(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi

  v5 = a4;
  v6 = a3;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( !v7
    || (unsigned int)a4 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL
    || a5 > *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          *(VIDMM_GLOBAL **)v7,
                          a3,
                          a4,
                          *((struct VIDMM_PARTITION **)this + 36))
            + 5) )
  {
    return 3221225485LL;
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * (v5 + 37 * v6) + 56) = a5;
  VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v7, 1);
  return 0LL;
}
