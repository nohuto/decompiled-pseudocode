__int64 __fastcall HvpViewMapAdjustFlag(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    __fastfail(5u);
  v2 = 4096LL;
  if ( *(__int64 *)(a1 + 8) > 4096 )
  {
    v3 = (unsigned __int64 *)(a1 + 40);
    do
    {
      v4 = *v3;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v4 )
        v4 ^= (unsigned __int64)v3;
      while ( v4 )
      {
        if ( v2 >= *(_QWORD *)(v4 + 40) )
        {
          if ( v2 < *(_QWORD *)(v4 + 48) )
            break;
          v5 = *(_QWORD *)(v4 + 8);
        }
        else
        {
          v5 = *(_QWORD *)v4;
        }
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v5 )
          v4 ^= v5;
        else
          v4 = v5;
      }
      HvpViewMapMakeViewRangeUnCOWByPolicy(a1, v4, *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48));
      v2 = *(_QWORD *)(v4 + 48);
    }
    while ( v2 < *(_QWORD *)(a1 + 8) );
  }
  *(_DWORD *)(a1 + 32) &= ~2u;
  return 0LL;
}
