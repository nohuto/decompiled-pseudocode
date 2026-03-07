__int64 __fastcall IsValidVideoStandardType(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD a1)
{
  if ( (unsigned int)(a1 - 1) <= 0x19 || a1 == D3DKMDT_VSS_OTHER )
    return 0LL;
  else
    return a1 != D3DKMDT_VSS_EIA_861B ? 0xC01E0322 : 0;
}
