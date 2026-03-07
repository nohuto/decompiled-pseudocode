__int64 __fastcall SmmDetermineAdlType(__int64 a1, __int64 a2, char a3)
{
  int v3; // r8d
  int v5; // eax
  int v6; // eax

  if ( (a3 & 1) != 0 )
    return 1LL;
  v3 = a3 & 2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL) & 1) != 0 )
    return v3 != 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( v5 == 10 || v5 == 6 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a2 + 44) & 0x1E;
  if ( v6 != 4 && v6 != 2 && v6 != 8 )
    return 0LL;
  return 2LL;
}
