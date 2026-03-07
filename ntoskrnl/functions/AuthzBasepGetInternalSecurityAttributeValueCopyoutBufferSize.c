__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 **v9; // r10
  __int64 *v10; // r8
  unsigned int v11; // ecx
  __int64 ***v12; // r10
  __int64 **v13; // r8
  unsigned int v14; // ecx
  __int64 ***v15; // r10
  __int64 **v16; // r8
  unsigned int v17; // ecx

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return (unsigned int)-1073741675;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  if ( v5 > 0xFFFFFFFF || v4 + (unsigned int)v5 < v4 )
    return (unsigned int)-1073741675;
  v6 = 0;
  v7 = v4 + v5;
  if ( *(_WORD *)(a1 + 48) != 1 && *(_WORD *)(a1 + 48) != 2 )
  {
    if ( *(_WORD *)(a1 + 48) == 3 )
    {
      v12 = (__int64 ***)(a1 + 72);
      v13 = *v12;
      while ( v13 != (__int64 **)v12 )
      {
        v14 = v7 + *((unsigned __int16 *)v13 + 20);
        if ( v14 < v7 )
          return (unsigned int)-1073741675;
        v13 = (__int64 **)*v13;
        v7 = v14;
        v6 = 0;
      }
      goto LABEL_6;
    }
    if ( *(_WORD *)(a1 + 48) == 4 )
    {
      v15 = (__int64 ***)(a1 + 72);
      v16 = *v15;
      while ( v16 != (__int64 **)v15 )
      {
        v17 = v7 + *((unsigned __int16 *)v16 + 24);
        if ( v17 < v7 )
          return (unsigned int)-1073741675;
        v16 = (__int64 **)*v16;
        v7 = v17;
        v6 = 0;
      }
      goto LABEL_6;
    }
    if ( *(_WORD *)(a1 + 48) != 5 )
    {
      if ( *(_WORD *)(a1 + 48) == 6 )
        goto LABEL_6;
      if ( *(_WORD *)(a1 + 48) != 16 )
        return (unsigned int)-1073741811;
    }
    v9 = (__int64 **)(a1 + 72);
    v10 = *v9;
    while ( v10 != (__int64 *)v9 )
    {
      v11 = v7 + *((_DWORD *)v10 + 12);
      if ( v11 < v7 )
        return (unsigned int)-1073741675;
      v10 = (__int64 *)*v10;
      v7 = v11;
      v6 = 0;
    }
  }
LABEL_6:
  *a2 = v7;
  return v6;
}
