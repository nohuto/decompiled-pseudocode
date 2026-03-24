/*
 * XREFs of ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02B1F10
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidVertexMeshData(
        struct _TRIVERTEX *a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // r10
  struct _TRIVERTEX *v6; // r11
  int v7; // eax
  unsigned int *i; // r8
  struct _TRIVERTEX *v9; // rdx
  struct _TRIVERTEX *v10; // rdx
  struct _TRIVERTEX *v11; // rdx
  unsigned int v12; // eax
  struct _TRIVERTEX *v13; // rdx
  struct _TRIVERTEX *v14; // rdx

  v5 = (unsigned int *)a2;
  if ( a3 > 1 )
  {
    v6 = &a1[a3 - 1];
    if ( a5 <= 1 )
    {
      v12 = 0;
      if ( a4 )
      {
        while ( 1 )
        {
          v13 = &a1[*v5];
          if ( v13 < a1 )
            break;
          if ( v13 > v6 )
            break;
          v14 = &a1[v5[1]];
          if ( v14 < a1 || v14 > v6 )
            break;
          ++v12;
          v5 += 2;
          if ( v12 >= a4 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
    if ( a5 == 2 )
    {
      v7 = 0;
      if ( a4 )
      {
        for ( i = (unsigned int *)(a2 + 8); ; i += 3 )
        {
          v9 = &a1[*(i - 2)];
          if ( v9 < a1 )
            break;
          if ( v9 > v6 )
            break;
          v10 = &a1[*(i - 1)];
          if ( v10 < a1 )
            break;
          if ( v10 > v6 )
            break;
          v11 = &a1[*i];
          if ( v11 < a1 || v11 > v6 )
            break;
          if ( ++v7 >= a4 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  return 0LL;
}
