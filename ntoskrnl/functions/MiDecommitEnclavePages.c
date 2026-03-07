__int64 __fastcall MiDecommitEnclavePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  ULONG_PTR PteAddress; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r10

  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
      {
        PteAddress = MiGetPteAddress(a3);
        MiDecommitHardwareEnclavePages(v9, v8, PteAddress, PteAddress + 8 * ((v7 >> 12) - 1 + ((v7 & 0xFFF) != 0)), 0);
        return 0LL;
      }
    }
    else if ( (a5 & 0x10000000) != 0 )
    {
      return 3221225494LL;
    }
  }
  return 3221225632LL;
}
