void __fastcall VIDMM_SEGMENT::IncrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v7; // rdi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax

  *((_QWORD *)this + 28) += a3;
  if ( *((_DWORD *)this + 92) != -1 && !a4 )
  {
    v7 = *((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = v7 + a3;
    if ( v7 <= qword_1C0076548 && v7 + a3 > qword_1C0076548 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40088LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40152LL));
    if ( !v7 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                        *((VIDMM_GLOBAL **)this + 1),
                        *((_DWORD *)this + 95),
                        (enum _D3DKMT_MEMORY_SEGMENT_GROUP)*((_DWORD *)this + 119),
                        a2);
  *((_QWORD *)SegmentGroupState + 16) += a3;
}
