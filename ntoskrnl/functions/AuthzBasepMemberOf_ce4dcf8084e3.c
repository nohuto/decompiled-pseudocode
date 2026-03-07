__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v7; // di
  int NextValue; // eax
  unsigned int v12; // ebx
  size_t v13; // r8
  char v14; // al
  __int128 v16; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-A8h]
  void *Src; // [rsp+50h] [rbp-98h]
  unsigned __int8 v19[80]; // [rsp+60h] [rbp-88h] BYREF

  LODWORD(Src) = 0;
  v7 = a5 != 0;
  WORD2(Src) = 0;
  *a6 = 0;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)&v16);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return v12;
    v13 = DWORD2(v17);
    if ( DWORD2(v17) >= 0x44 )
      v13 = 68LL;
    memmove(v19, Src, v13);
    v14 = SepSidInTokenSidHash((_DWORD *)(a2 + (a4 != 0 ? 504LL : 232LL)), 0LL, v19, a3, a4, 0);
    if ( a5 )
    {
      v7 &= v14;
      if ( !v7 )
        goto LABEL_12;
    }
    else
    {
      v7 |= v14;
      if ( v7 )
        goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  *a6 = v7;
  return v12;
}
