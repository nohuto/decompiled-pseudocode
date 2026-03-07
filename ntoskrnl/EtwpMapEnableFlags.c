unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  __int64 *v2; // r9
  __int64 v4; // r11
  unsigned __int64 result; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rcx

  v2 = EtwpEnableFlagMap;
  v4 = 8LL;
  do
  {
    if ( a2 )
    {
      v6 = *(_DWORD *)v2;
      if ( a1 )
      {
        result = (unsigned __int64)v6 >> 29;
        if ( (v6 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v7 = *((unsigned int *)v2 + 1);
LABEL_11:
          result = v7 >> 29;
          *(_DWORD *)(a1 + 4 * (v7 >> 29)) |= v7 & 0x1FFFFFFF;
        }
      }
    }
    else if ( a1 )
    {
      result = (unsigned __int64)*((unsigned int *)v2 + 1) >> 29;
      if ( (*((_DWORD *)v2 + 1) & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
      {
        v7 = *(unsigned int *)v2;
        goto LABEL_11;
      }
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
