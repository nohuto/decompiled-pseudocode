bool __fastcall BmlAreRawModesEnabled(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0
      || (*(_DWORD *)(a1 + 8) & 4) != 0
      || _bittest64(*(const signed __int64 **)(120LL * a2 + a1 + 16), 0x37u);
}
