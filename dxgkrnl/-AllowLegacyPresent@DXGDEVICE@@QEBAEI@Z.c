bool __fastcall DXGDEVICE::AllowLegacyPresent(DXGDEVICE *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 235);
  if ( !v1 )
    return 0;
  if ( !*(_QWORD *)(v1 + 2920) )
  {
    WdLogSingleEntry1(1LL, 9697LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter()",
      9697LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return !*((_DWORD *)this + 116)
      && ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(
           *(_QWORD *)(*((_QWORD *)this + 235) + 2920LL),
           *((_QWORD *)this + 5)) != 0;
}
