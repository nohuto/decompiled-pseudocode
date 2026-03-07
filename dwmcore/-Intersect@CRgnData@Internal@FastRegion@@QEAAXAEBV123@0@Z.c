void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  _DWORD *v7; // rcx
  const struct FastRegion::Internal::CStripe *v8; // r10
  const struct FastRegion::Internal::CStripe *v9; // r15
  char *v10; // rbp
  char *v11; // rbx
  const struct FastRegion::Internal::CStripe *v12; // r12
  int v13; // edx
  const struct FastRegion::Internal::CStripe *v14; // rsi
  int v15; // eax
  const struct FastRegion::Internal::CStripe *v16; // r8
  const struct FastRegion::Internal::CStripe *v17; // rdi
  const struct FastRegion::Internal::CStripe *v18; // rdx
  char *v19; // rcx
  int v20; // eax
  int v21; // eax
  const struct FastRegion::Internal::CStripe *v22; // r9
  int v23; // ecx
  const struct FastRegion::Internal::CStripe *v24; // rdx
  const struct FastRegion::Internal::CStripe *v25; // r8
  __int64 v26; // rax
  char *v27; // rbx
  char *v28; // rax
  char *v29; // rdx
  int v30; // ecx

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v7 = (_DWORD *)((char *)a3 + 12);
  v8 = (const struct FastRegion::Internal::CStripe *)v4;
  v9 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v3];
  v10 = (char *)this + 12;
  v11 = (char *)this + 12;
  v12 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v13 = *v4;
  if ( *v4 < *((_DWORD *)a3 + 3) )
  {
    v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    while ( *(_DWORD *)v17 < *v7 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_17;
    }
    v16 = v17;
    v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    if ( *(_DWORD *)v17 <= *v7 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_17;
    }
    else
    {
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    }
    v18 = (const struct FastRegion::Internal::CStripe *)v7;
  }
  else
  {
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( v13 <= *((_DWORD *)a3 + 3) )
    {
      v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
LABEL_5:
      v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    }
    else
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)v14;
        if ( v13 < *(_DWORD *)v14 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
          goto LABEL_5;
        }
        v16 = v14;
        v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
        if ( v13 <= v15 )
          break;
        if ( v14 == v12 )
          goto LABEL_17;
      }
      v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      if ( v14 == v12 )
        goto LABEL_17;
    }
    v18 = v8;
  }
  FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CRgnData *)((char *)this + 12), v18, v16);
  if ( v11 != v10 )
    goto LABEL_28;
  v19 = (char *)this + 20;
  v20 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
LABEL_9:
  if ( (_DWORD)v19 + v20 - (_DWORD)v11 )
    v11 = v19;
  while ( 1 )
  {
    v21 = *(_DWORD *)v17;
    v22 = v14;
    v23 = *(_DWORD *)v14;
    v24 = v17;
    v25 = v14;
    if ( *(_DWORD *)v17 < *(_DWORD *)v14 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_13;
      v25 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      goto LABEL_27;
    }
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v21 > v23 )
      break;
    v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
    if ( v17 == v9 || v14 == v12 )
    {
LABEL_13:
      *(_DWORD *)v11 = v21;
      goto LABEL_14;
    }
LABEL_27:
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CStripe *)v11, v24, v25);
    if ( v11 == v10 )
    {
      v19 = v11 + 8;
      v20 = *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1);
      goto LABEL_9;
    }
LABEL_28:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      v11 += 8;
  }
  if ( v14 != v12 )
  {
    v25 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    v24 = v22;
    goto LABEL_27;
  }
  *(_DWORD *)v11 = v23;
LABEL_14:
  if ( v11 != v10 && &v11[*((int *)v11 + 1)] != &v11[*((int *)v11 - 1) - 8] )
    v11 += 8;
LABEL_17:
  v26 = (v11 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v26;
  if ( (_DWORD)v26 )
  {
    v27 = v11 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v28 = &v27[*((int *)v27 + 1)];
    while ( 1 )
    {
      v27 -= 8;
      if ( v27 < v10 )
        break;
      v29 = v28;
      v28 = &v27[*((int *)v27 + 1)];
      if ( v28 != v29 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v28 )
          *((_DWORD *)this + 1) = *(_DWORD *)v28;
        v30 = *((_DWORD *)v29 - 1);
        if ( *((_DWORD *)this + 2) < v30 )
          *((_DWORD *)this + 2) = v30;
      }
    }
  }
}
