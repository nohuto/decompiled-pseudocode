_BOOL8 __fastcall ValidateTimerCallback(__int64 a1)
{
  return *(_DWORD *)(a1 + 632) <= 0x501u
      && (*(_DWORD *)(a1 + 648) & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 488) & 0xC) == 0
      && PsGetProcessId(**(PEPROCESS **)(a1 + 424)) != (HANDLE)gpidLogon;
}
