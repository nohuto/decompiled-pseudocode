char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // ecx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return 1;
  if ( a2 != a1 + 952 )
  {
    v5 = 0;
    while ( a2 != a1 + ((unsigned __int64)v5 << 7) + 1080 )
    {
      if ( ++v5 >= 6 )
        return v2;
    }
  }
  return 1;
}
