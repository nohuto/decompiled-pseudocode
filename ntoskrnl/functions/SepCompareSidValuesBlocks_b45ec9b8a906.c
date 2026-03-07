char __fastcall SepCompareSidValuesBlocks(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi

  if ( a1 == a2 )
    return 1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a1 + 16);
      if ( v3 == *(_DWORD *)(a2 + 16) )
      {
        v4 = 0;
        v5 = (unsigned __int8 *)(a1 + 24);
        v6 = (unsigned __int8 *)(a2 + 24);
        if ( !v3 )
          return 1;
        while ( RtlEqualSid(v5, v6) )
        {
          ++v4;
          v5 += (4LL * v5[1] + 11) & 0xFFFFFFFCLL;
          v6 += (4LL * v6[1] + 11) & 0xFFFFFFFCLL;
          if ( v4 >= v3 )
            return 1;
        }
      }
    }
  }
  return 0;
}
