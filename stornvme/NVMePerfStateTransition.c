bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1880) & 2) != 0
      && *(_BYTE *)(a1 + 1887) != *(_BYTE *)(a1 + 1888)
      && (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) == 0;
}
