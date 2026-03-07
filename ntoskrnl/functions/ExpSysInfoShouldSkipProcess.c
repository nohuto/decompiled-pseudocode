bool __fastcall ExpSysInfoShouldSkipProcess(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1124) & 4) != 0 && *(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 1520) )
    return *(_QWORD *)(a1 + 48) == a1 + 48;
  return v1;
}
