__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rcx

  v4 = DpiAcpiPrepareAcpiChildNameList();
  v5 = 0;
  if ( v4 < 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3296);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 3312);
  while ( a2 != *(_DWORD *)(v7 + 16LL * v5) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return *(_QWORD *)(v7 + 16LL * v5 + 8);
}
