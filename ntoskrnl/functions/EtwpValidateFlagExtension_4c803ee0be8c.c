__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // r10
  unsigned __int16 *v4; // r9
  unsigned __int16 v5; // r10
  unsigned __int16 *v6; // rcx
  unsigned __int16 v7; // dx
  __int16 v8; // r8
  __int64 v9; // rax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( BYTE2(v1) != 0xFF )
    return 3221225485LL;
  if ( !(_WORD)v1 )
    return 3221225485LL;
  v3 = *a1;
  if ( v3 < (unsigned __int64)(unsigned __int16)v1 + 4 )
    return 3221225485LL;
  v4 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( (((_BYTE)v1 + (_BYTE)a1) & 1) == 0 )
  {
    if ( *v4 && 4 * (unsigned __int64)*v4 <= (unsigned int)v3 - (unsigned __int16)v1 )
    {
      v5 = v4[1];
      v6 = v4 + 2;
      v7 = *v4 - 1;
      v8 = 0;
      if ( v5 )
      {
        while ( ((unsigned __int8)v6 & 1) == 0 )
        {
          if ( !v7 )
            return 3221225485LL;
          v9 = *v6;
          if ( v7 < (unsigned __int16)v9 )
            return 3221225485LL;
          v7 -= v9;
          v6 += 2 * v9;
          if ( (unsigned __int16)++v8 >= v5 )
            goto LABEL_14;
        }
        return 3221226181LL;
      }
LABEL_14:
      if ( !v7 )
        return 0LL;
    }
    return 3221225485LL;
  }
  return 3221226181LL;
}
