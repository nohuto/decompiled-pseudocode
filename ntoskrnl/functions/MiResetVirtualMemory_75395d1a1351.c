__int64 __fastcall MiResetVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // r10d
  int v7; // ebx
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  v7 = a4;
  if ( (v6 & 0x200000) != 0 )
  {
    if ( (v6 & 8) != 0 && (v6 & 0x200) == 0 && (int)MiCheckSecuredVad(a4, a2, (int)a3 - (int)a2 + 1, 4, a6) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( (v6 & 0x200) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange(KeGetCurrentThread()->ApcState.Process, a1, v7, 4, a2, a3), (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, v7, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
