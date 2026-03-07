unsigned __int8 *__fastcall StartPixel(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned __int8 *v3; // r9
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v3 = a1;
  v4 = a3 - 1;
  if ( !v4 )
  {
    v9 = (unsigned __int64)a2 >> 3;
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v10 = (unsigned __int64)a2 >> 1;
    return &a1[v10];
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = a2;
    return &a1[v10];
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = 2 * a2;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 3 * a2;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    v9 = 4 * a2;
LABEL_14:
    v3 += v9;
  }
  return v3;
}
