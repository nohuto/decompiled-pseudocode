__int64 __fastcall PnpMergeFilteredResourceRequirementsList(_DWORD *Src, _DWORD *a2, unsigned int **a3)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // rsi
  unsigned int v7; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v9; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // rdi

  *a3 = 0LL;
  v5 = Src;
  if ( Src && Src[7] )
  {
    v6 = a2 + 7;
  }
  else
  {
    if ( !a2 )
      return 0LL;
    v6 = a2 + 7;
    if ( !a2[7] )
      return 0LL;
    if ( !Src || !Src[7] )
    {
      v5 = a2;
      goto LABEL_16;
    }
  }
  if ( a2 && *v6 )
  {
    v7 = *Src - 32 + *a2;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v7, 1970499664LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, (unsigned int)*v5);
      memmove((char *)v9 + (unsigned int)*v5, a2 + 8, v7 - *v5);
      *v9 = v7;
      v9[7] += *v6;
      *a3 = v9;
      return 0LL;
    }
    return 3221225626LL;
  }
LABEL_16:
  v11 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)*v5, 1970499664LL);
  v12 = v11;
  if ( v11 )
  {
    memmove(v11, v5, (unsigned int)*v5);
    *a3 = v12;
    return 0LL;
  }
  return 3221225626LL;
}
