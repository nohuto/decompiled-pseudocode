__int64 __fastcall SdbpFindLocalDatabaseByPDB(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // r11d
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  __int64 i; // rcx

  v4 = *(_DWORD *)(a1 + 36);
  v5 = 0;
  v6 = 0;
  for ( i = a1 + 56; !_bittest(&v4, v6) || (*(_DWORD *)(i + 8) & 2) == 0 || a2 != *(_QWORD *)i; i += 32LL )
  {
    if ( ++v6 >= 0x10 )
      return v5;
  }
  v5 = 1;
  if ( a4 )
    *a4 = v6;
  return v5;
}
