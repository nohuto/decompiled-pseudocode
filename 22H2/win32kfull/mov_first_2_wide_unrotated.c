/*
 * XREFs of mov_first_2_wide_unrotated @ 0x1C02DA770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall mov_first_2_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int16 *a4, _BYTE *a5)
{
  int v5; // eax
  unsigned __int16 *v7; // rdx
  unsigned __int16 v8; // ax
  __int16 result; // ax

  v5 = a1;
  v7 = &a4[v5];
  do
  {
    v8 = *a4++;
    *a5 = v8;
    result = HIBYTE(v8);
    a5[1] = result;
    a5 += a3;
  }
  while ( a4 != v7 );
  return result;
}
