__int64 __fastcall RtlpHeapListCompare(ULONG_PTR a1, __int64 a2, int a3, char a4)
{
  ULONG_PTR v5; // r8
  int v6; // edx
  int v9; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v5 = a2 - 16;
    v6 = *(_DWORD *)(a2 - 16 + 8);
    LOWORD(v9) = v6;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a1 + 136) ^ v6;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpLogHeapFailure(3, a1, v5, 0LL, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v9);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
