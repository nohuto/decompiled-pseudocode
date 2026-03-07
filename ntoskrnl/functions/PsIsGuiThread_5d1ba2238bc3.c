bool __fastcall PsIsGuiThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) & 0x80) != 0;
}
