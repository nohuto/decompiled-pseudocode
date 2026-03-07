struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r8

  v4 = 1616LL * a2;
  v5 = a3;
  v6 = *((_QWORD *)this + 5028);
  if ( (*(_BYTE *)(v4 + 24 * v5 + v6 + 520) & 1) != 0 )
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                          + *((_QWORD *)a4 + 5)
                                                          + 24)
                                              + 344LL * a2);
  else
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(v6 + v4 + 344 * v5 + 552);
}
