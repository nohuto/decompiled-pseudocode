_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(a1 + 64) & 1) == 0;
}
