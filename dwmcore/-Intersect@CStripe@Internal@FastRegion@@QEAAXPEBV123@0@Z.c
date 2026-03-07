void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // r9
  char *v5; // r10
  int *v6; // rdx
  _DWORD *v7; // rcx
  char *v8; // r8
  int v9; // eax
  int v10; // r11d
  int *v11; // rdx
  int v12; // r11d
  int *v13; // r9
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // r11d
  bool v17; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (_DWORD *)((char *)this + *((int *)this + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v4 == (int *)v5 || v6 == (int *)v8 )
    goto LABEL_10;
  do
  {
    v9 = *v4;
    v10 = *v6;
    if ( *v4 >= *v6 )
    {
      v11 = v6 + 1;
      if ( v10 >= v9 )
        goto LABEL_6;
      goto LABEL_5;
    }
    v13 = v4 + 1;
    while ( 1 )
    {
      v9 = *v6;
      if ( *v13 < *v6 )
      {
        v4 = v13 + 1;
        v17 = v4 == (int *)v5;
        goto LABEL_24;
      }
      v11 = v6 + 1;
      if ( v9 >= *v13 )
        goto LABEL_9;
LABEL_7:
      *v7 = v9;
      v14 = v7 + 1;
      v15 = *v13;
      v16 = *v11;
      if ( *v13 < *v11 )
        break;
      v6 = v11 + 1;
      if ( v16 >= v15 )
      {
        *v14 = v15;
        v4 = v13 + 1;
        v7 = v14 + 1;
        if ( v4 == (int *)v5 )
          goto LABEL_10;
        goto LABEL_13;
      }
      *v14 = v16;
      v7 = v14 + 1;
LABEL_19:
      if ( v6 == (int *)v8 )
        goto LABEL_10;
    }
    *v14 = v15;
    v7 = v14 + 1;
LABEL_9:
    v4 = v13 + 1;
    if ( v4 == (int *)v5 )
      break;
LABEL_5:
    v9 = *v4;
    v12 = *v11;
    if ( *v4 < *v11 )
    {
LABEL_6:
      v13 = v4 + 1;
      goto LABEL_7;
    }
    v6 = v11 + 1;
    if ( v12 >= v9 )
    {
      v13 = v4 + 1;
      goto LABEL_19;
    }
LABEL_13:
    v17 = v6 == (int *)v8;
LABEL_24:
    ;
  }
  while ( !v17 );
LABEL_10:
  *((_DWORD *)this + 3) = (_DWORD)v7 - ((_DWORD)this + 8);
}
