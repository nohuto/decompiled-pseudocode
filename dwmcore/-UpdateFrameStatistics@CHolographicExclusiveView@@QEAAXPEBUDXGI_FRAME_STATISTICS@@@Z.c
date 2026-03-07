void __fastcall CHolographicExclusiveView::UpdateFrameStatistics(
        CHolographicExclusiveView *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_DWORD *)this + 28);
  v4 = *((_QWORD *)this + 18);
  v5 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
  v9[0] = *(_OWORD *)&a2->PresentCount;
  LODWORD(v9[0]) = v2;
  v9[1] = v5;
  if ( v4 && (v6 = NtSetCompositionSurfaceStatistics(v4, (char *)this + 136, v9), v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6 | 0x10000000, 0x20Bu, 0LL);
  }
  else
  {
    v8 = (void *)*((_QWORD *)this + 13);
    if ( v8 )
      SetEvent(v8);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      0LL,
      0x8000LL);
  }
}
