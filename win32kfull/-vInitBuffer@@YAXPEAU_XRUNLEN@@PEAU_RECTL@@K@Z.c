void __fastcall vInitBuffer(struct _XRUNLEN *a1, struct _RECTL *a2, unsigned int a3)
{
  char *v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r10

  v3 = (char *)a1 + 8;
  *(_DWORD *)a1 = a2->left;
  v4 = a2->right - a2->left;
  *((_DWORD *)a1 + 1) = v4;
  v5 = v4 & 0x3FFFFFFFFFFFFFFFLL;
  if ( v5 )
  {
    if ( ((unsigned __int8)v3 & 4) != 0 )
    {
      *(_DWORD *)v3 = a3;
      if ( !--v5 )
        return;
      v3 = (char *)a1 + 12;
    }
    memset64(v3, a3 | ((unsigned __int64)a3 << 32), v5 >> 1);
    if ( (v5 & 1) != 0 )
      *(_DWORD *)&v3[4 * v5 - 4] = a3;
  }
}
