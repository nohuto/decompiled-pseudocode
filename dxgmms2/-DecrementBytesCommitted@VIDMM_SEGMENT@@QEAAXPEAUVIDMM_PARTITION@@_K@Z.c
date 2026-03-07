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
