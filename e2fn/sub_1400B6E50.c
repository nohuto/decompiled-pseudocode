__int64 __fastcall sub_1400B6E50(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  bool v4; // cf
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9

  v3 = a2 - (_QWORD)a1;
  if ( a3 < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)a1 & 7) != 0; --a3 )
  {
    v4 = *(_BYTE *)a1 < *((_BYTE *)a1 + v3);
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
      return -v4 - ((unsigned int)v4 - 1);
    a1 = (unsigned __int64 *)((char *)a1 + 1);
  }
  if ( !(a3 >> 3) )
  {
LABEL_6:
    if ( !a3 )
      return 0LL;
    while ( 1 )
    {
      v4 = *(_BYTE *)a1 < *((_BYTE *)a1 + v3);
      if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
        break;
      a1 = (unsigned __int64 *)((char *)a1 + 1);
      if ( !--a3 )
        return 0LL;
    }
    return -v4 - ((unsigned int)v4 - 1);
  }
  v6 = a3 >> 5;
  if ( a3 >> 5 )
  {
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + v3) )
        break;
      v7 = a1[1];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 8) )
        goto LABEL_24;
      v7 = a1[2];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 16) )
        goto LABEL_23;
      v7 = a1[3];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 24) )
      {
        ++a1;
LABEL_23:
        ++a1;
LABEL_24:
        ++a1;
        break;
      }
      a1 += 4;
      if ( !--v6 )
      {
        a3 &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = a3 >> 3;
    if ( !(a3 >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + v3) )
        break;
      ++a1;
      if ( !--v8 )
      {
        a3 &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(unsigned __int64 *)((char *)a1 + v3));
  return -v4 - ((unsigned int)v4 - 1);
}
