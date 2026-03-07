__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  *(_DWORD *)(a1 + 336) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4,
      14,
      12,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_DWORD *)(a1 + 108));
  return Isoch_MapTransfers(a1);
}
