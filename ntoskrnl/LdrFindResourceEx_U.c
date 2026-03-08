/*
 * XREFs of LdrFindResourceEx_U @ 0x1409B69A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1407E9958 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceEx_U(int a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int **a5)
{
  return LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
}
