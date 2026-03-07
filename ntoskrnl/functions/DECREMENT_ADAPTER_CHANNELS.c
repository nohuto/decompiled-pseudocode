void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
  if ( *(_DWORD *)(a1 + 224) < 3u && v2 != *(_DWORD *)(a1 + 212) )
  {
    ViHalPreprocessOptions(byte_140C0DCCC, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 212), 0LL, 0LL, byte_140C0DCCC);
  }
}
