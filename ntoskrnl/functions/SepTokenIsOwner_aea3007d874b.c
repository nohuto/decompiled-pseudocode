__int64 __fastcall SepTokenIsOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v4 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v3 )
      v4 = a2 + v3;
    else
      v4 = 0LL;
  }
  result = SepSidInTokenSidHash(a1 + 232, 0LL, v4, 0LL, 0, 0);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(a1 + 128) )
    {
      LOBYTE(v7) = 0;
      LOBYTE(v6) = 1;
      return SepSidInTokenSidHash(a1 + 504, 0LL, v4, 0LL, v6, v7);
    }
  }
  return result;
}
