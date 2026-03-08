/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00866A0
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B0480 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // r8d
  unsigned int v7; // edx
  VIDMM_GLOBAL *v8; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx

  if ( *((_QWORD *)this + 27) < (unsigned __int64)(*((_QWORD *)this + 27) - a3) )
  {
    WdLogSingleEntry1(1LL, 301LL);
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
  }
  v6 = *((_DWORD *)this + 119);
  v7 = *((_DWORD *)this + 95);
  v8 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) -= a3;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v8, v7, v6, a2);
  if ( *((_QWORD *)SegmentGroupState + 15) < (unsigned __int64)(*((_QWORD *)SegmentGroupState + 15) - a3) )
  {
    WdLogSingleEntry1(1LL, 311LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
  }
  *((_QWORD *)SegmentGroupState + 15) -= a3;
}
