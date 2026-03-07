BOOLEAN __stdcall RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  __int64 v3; // r10
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  _DWORD *v7; // r9
  signed __int64 v8; // rdx

  if ( *(_BYTE *)Sid1 != *(_BYTE *)Sid2 )
    return 0;
  if ( *((_BYTE *)Sid1 + 2) != *((_BYTE *)Sid2 + 2) )
    return 0;
  if ( *((_BYTE *)Sid1 + 3) != *((_BYTE *)Sid2 + 3) )
    return 0;
  if ( *((_BYTE *)Sid1 + 4) != *((_BYTE *)Sid2 + 4) )
    return 0;
  if ( *((_BYTE *)Sid1 + 5) != *((_BYTE *)Sid2 + 5) )
    return 0;
  if ( *((_BYTE *)Sid1 + 6) != *((_BYTE *)Sid2 + 6) )
    return 0;
  if ( *((_BYTE *)Sid1 + 7) != *((_BYTE *)Sid2 + 7) )
    return 0;
  v3 = *((unsigned __int8 *)Sid1 + 1);
  if ( (_BYTE)v3 != *((_BYTE *)Sid2 + 1) )
    return 0;
  v4 = 0LL;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_15;
    v5 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v5 )
      v5 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v6 = 5LL;
    if ( v5 )
LABEL_15:
      v6 = 1LL;
    if ( v3 - v6 > 0 )
    {
      v7 = (char *)Sid1 + 8;
      v8 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
      while ( *v7 == *(_DWORD *)((char *)v7 + v8) )
      {
        ++v4;
        ++v7;
        if ( v4 >= v3 - v6 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
