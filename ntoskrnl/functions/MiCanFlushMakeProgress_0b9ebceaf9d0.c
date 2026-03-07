__int64 __fastcall MiCanFlushMakeProgress(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // r9d
  __int64 i; // r10
  __int16 v5; // ax
  bool v6; // zf

  if ( a2 || *(_QWORD *)(a1 + 17600) == *(_QWORD *)(a1 + 17824) )
  {
    v2 = *(_DWORD *)(a1 + 17048);
    if ( !v2 )
      return 0LL;
    v3 = 0;
    for ( i = a1 + 17056; ; i += 8LL )
    {
      if ( *(_QWORD *)(*(_QWORD *)i + 24LL) )
      {
        v5 = *(_WORD *)(*(_QWORD *)i + 204LL);
        if ( (v5 & 0x40) != 0 )
        {
          if ( *(_QWORD *)(88LL * (v5 & 0xF) + a1 + 3904) )
            return 1LL;
          v6 = *(_QWORD *)(a1 + 3776) == 0LL;
        }
        else
        {
          if ( (v5 & 0x10) == 0 )
            return 1LL;
          v6 = *(_QWORD *)(88LL * (v5 & 0xF) + a1 + 3904) == 0LL;
        }
        if ( !v6 )
          break;
      }
      if ( ++v3 >= v2 )
        return 0LL;
    }
  }
  return 1LL;
}
