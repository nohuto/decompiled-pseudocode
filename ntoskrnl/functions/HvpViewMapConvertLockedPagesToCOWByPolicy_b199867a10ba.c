__int64 __fastcall HvpViewMapConvertLockedPagesToCOWByPolicy(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v2 = 4096LL;
  if ( *(__int64 *)(a1 + 8) <= 4096 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 32) &= ~4u;
    return 0LL;
  }
  else
  {
    v3 = (unsigned __int64 *)(a1 + 40);
    while ( 1 )
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
      result = HvpMappedViewConvertLockedPagesToCOWByPolicy(a1, v4);
      if ( (int)result < 0 )
        break;
      v2 = *(_QWORD *)(v4 + 48);
      if ( v2 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_17;
    }
  }
  return result;
}
