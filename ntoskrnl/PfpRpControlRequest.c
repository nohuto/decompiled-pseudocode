__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  unsigned int v3; // edx
  int v4; // ebx
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  __m128i v7[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]

  P = 0LL;
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  if ( (dword_140C64D40 & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    if ( v3 < 0x18 )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v4 = PfpRpControlRequestCopy(*(__m128i **)(a1 + 16), v3, (__m128i **)&P, v7, a2);
      if ( v4 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(P) )
          v4 = -1073741701;
        else
          v4 = PfpRpControlRequestPerform(&unk_140C64CA8, P);
      }
      if ( P && P != v7 )
        ExFreePoolWithTag(P, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v4;
}
