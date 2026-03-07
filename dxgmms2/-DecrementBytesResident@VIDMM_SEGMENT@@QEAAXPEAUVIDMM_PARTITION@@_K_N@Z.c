void __fastcall VIDMM_SEGMENT::DecrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  __int64 v13; // rcx

  if ( *((_QWORD *)this + 28) < (unsigned __int64)(*((_QWORD *)this + 28) - a3) )
  {
    WdLogSingleEntry1(1LL, 380LL);
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  *((_QWORD *)this + 28) -= a3;
  if ( *((_DWORD *)this + 92) != -1 && !a4 )
  {
    v9 = *((_QWORD *)this + 29);
    if ( v9 < v9 - a3 )
    {
      WdLogSingleEntry1(1LL, 391LL);
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
    }
    v11 = *((_QWORD *)this + 29) - a3;
    *((_QWORD *)this + 29) = v11;
    if ( v9 > qword_1C0076548 && v11 <= qword_1C0076548 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 40104LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 40152LL),
        *((unsigned int *)this + 92));
    if ( !*((_QWORD *)this + 29) )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
  }
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                        *((VIDMM_GLOBAL **)this + 1),
                        *((_DWORD *)this + 95),
                        (enum _D3DKMT_MEMORY_SEGMENT_GROUP)*((_DWORD *)this + 119),
                        a2);
  if ( *((_QWORD *)SegmentGroupState + 16) < (unsigned __int64)(*((_QWORD *)SegmentGroupState + 16) - a3) )
  {
    WdLogSingleEntry1(1LL, 418LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
  }
  *((_QWORD *)SegmentGroupState + 16) -= a3;
}
