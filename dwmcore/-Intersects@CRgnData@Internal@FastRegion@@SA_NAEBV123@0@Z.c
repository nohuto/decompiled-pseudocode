char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  const struct FastRegion::Internal::CStripe *v4; // r9
  int v5; // ecx
  const struct FastRegion::Internal::CStripe *v6; // r15
  const struct FastRegion::Internal::CStripe *v7; // rbp
  const struct FastRegion::Internal::CStripe *v8; // rbx
  const struct FastRegion::Internal::CStripe *v9; // rcx
  const struct FastRegion::Internal::CStripe *v10; // rdx
  const struct FastRegion::Internal::CStripe *v11; // r11
  const struct FastRegion::Internal::CStripe *v13; // r11
  int v14; // esi
  int v15; // eax
  int v16; // edi
  const struct FastRegion::Internal::CStripe *v17; // rdx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = (const struct FastRegion::Internal::CStripe *)v3;
  v5 = *((_DWORD *)a2 + 3);
  v6 = (const struct FastRegion::Internal::CStripe *)&v3[2 * v2];
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * *(int *)a2 + 12);
  if ( *v3 < v5 )
  {
    v13 = (const struct FastRegion::Internal::CStripe *)(v3 + 2);
    while ( *(_DWORD *)v13 < v5 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v6 )
        return 0;
    }
    v4 = v13;
    v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( *(_DWORD *)v13 > v5 )
    {
      v9 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
      goto LABEL_4;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8) == v6 )
      return 0;
  }
  else
  {
    v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)v8;
        if ( *v3 < *(_DWORD *)v8 )
        {
          v10 = (const struct FastRegion::Internal::CStripe *)((char *)v8 - 8);
          goto LABEL_21;
        }
        v10 = v8;
        v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
        if ( *v3 <= v15 )
          break;
        if ( v8 == v7 )
          return 0;
      }
      if ( v8 == v7 )
        return 0;
LABEL_21:
      v9 = (const struct FastRegion::Internal::CStripe *)v3;
      goto LABEL_5;
    }
  }
  v9 = v4;
LABEL_4:
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_5:
  if ( FastRegion::Internal::CStripe::Intersects(v9, v10) )
    return 1;
  v14 = *(_DWORD *)v8;
  while ( 1 )
  {
    v16 = *(_DWORD *)v11;
    while ( 1 )
    {
      v17 = v8;
      if ( v16 < v14 )
        break;
      v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
      if ( v16 <= v14 )
      {
        if ( (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8) == v6 || v8 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(v11, v17) )
          return 1;
        v16 = *(_DWORD *)v11;
      }
      else
      {
        if ( v8 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(
               (const struct FastRegion::Internal::CStripe *)((char *)v11 - 8),
               v17) )
        {
          return 1;
        }
      }
      v14 = *(_DWORD *)v8;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8) == v6 )
      break;
    if ( FastRegion::Internal::CStripe::Intersects(v11, (const struct FastRegion::Internal::CStripe *)((char *)v8 - 8)) )
      return 1;
  }
  return 0;
}
