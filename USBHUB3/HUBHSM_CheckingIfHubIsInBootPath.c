__int64 __fastcall HUBHSM_CheckingIfHubIsInBootPath(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 40LL) & 0x400000) != 0 ? 2057 : 2041;
}
