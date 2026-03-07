bool __fastcall PspGetFreezeState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 632) & 8) != 0;
}
