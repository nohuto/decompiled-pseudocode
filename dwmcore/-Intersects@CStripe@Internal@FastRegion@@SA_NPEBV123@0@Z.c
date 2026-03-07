char __fastcall FastRegion::Internal::CStripe::Intersects(
        const struct FastRegion::Internal::CStripe *a1,
        const struct FastRegion::Internal::CStripe *a2)
{
  int *v2; // r8
  char *v3; // r10
  char *v4; // r9
  int *v5; // rax
  int v6; // edx
  int v7; // ecx
  int *v9; // rax
  int v10; // edx

  v2 = (int *)((char *)a1 + *((int *)a1 + 1));
  v3 = (char *)a1 + *((int *)a1 + 3) + 8;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  if ( v2 == (int *)v3 )
    return 0;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
LABEL_3:
  if ( v5 == (int *)v4 )
    return 0;
  v6 = *v5;
LABEL_5:
  v7 = *v2;
  if ( *v2 < v6 )
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( v2[1] > *v5 )
        break;
      if ( v2[1] < v6 )
      {
        v2 += 2;
        if ( v2 != (int *)v3 )
          goto LABEL_5;
        return 0;
      }
      v2 += 2;
      v9 = v5 + 1;
      if ( v2 == (int *)v3 )
        return 0;
      v7 = *v2;
LABEL_15:
      v10 = *v9;
      if ( v7 < *v9 )
        return 1;
      v5 = v9 + 1;
      if ( v10 < v7 )
        goto LABEL_3;
      if ( v5 == (int *)v4 )
        return 0;
    }
  }
  else if ( v7 > v6 )
  {
    v9 = v5 + 1;
    goto LABEL_15;
  }
  return 1;
}
