/*
 * XREFs of ?or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1C00E9910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_all_1_wide_unrotated(int a1, __int64 a2, int a3, char *a4, unsigned __int8 *a5)
{
  __int64 v5; // rdx
  unsigned __int8 *v7; // rdx
  char v8; // al

  v5 = a1;
  v7 = (unsigned __int8 *)&a4[v5];
  do
  {
    v8 = *a4++;
    *a5 |= v8;
    a5 += a3;
  }
  while ( a4 != (char *)v7 );
}
