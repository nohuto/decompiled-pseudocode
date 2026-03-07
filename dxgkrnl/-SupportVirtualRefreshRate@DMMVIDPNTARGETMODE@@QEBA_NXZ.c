bool __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(DMMVIDPNTARGETMODE *this)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  if ( !*((_BYTE *)this + 140) )
    return 0;
  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 112LL);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v3 + 96) + 80LL)) )
    return 1;
  if ( !*(_QWORD *)(v3 + 40) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v3 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v4 + 8) )
    WdLogSingleEntry0(1LL);
  return *(_DWORD *)(*(_QWORD *)(v4 + 8) + 528LL) != 0;
}
