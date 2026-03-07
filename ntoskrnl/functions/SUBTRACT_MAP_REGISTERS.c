void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0DCE0, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0DCE0);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
