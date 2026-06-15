/*
 * XREFs of sub_180141950 @ 0x180141950
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180141950(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // r10d

  v3 = 0;
  if ( a3 )
  {
    if ( a2 >= (unsigned __int64)(3LL * *(_QWORD *)(a1 + 40)) )
      return (unsigned int)-2147024809;
    v6 = a2 / 3;
    v7 = a2 / 3;
    if ( v7 >= *(_QWORD *)(a1 + 40) )
      goto LABEL_18;
    v8 = *(__int64 **)(a1 + 24);
    if ( !v8 )
      goto LABEL_18;
    if ( v6 )
    {
      v9 = (unsigned int)v7;
      do
      {
        v8 = (__int64 *)*v8;
        --v9;
      }
      while ( v9 );
    }
    if ( !v8 )
LABEL_18:
      sub_1800B8610(-2147467259);
    a3[1] = *((_DWORD *)v8 + 4);
    v10 = a2 % 3;
    if ( !v10 )
    {
      *a3 = 0;
      return v3;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *a3 = 1;
      return v3;
    }
    if ( v11 == 1 )
      *a3 = 2;
    else
      return (unsigned int)-2147024809;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
