_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0;
}
