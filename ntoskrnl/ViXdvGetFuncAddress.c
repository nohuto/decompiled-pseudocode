/*
 * XREFs of ViXdvGetFuncAddress @ 0x140AC7C00
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140AC7A1C (ViXdvDriverLoadImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViXdvGetFuncAddress(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rax

  v3 = a1 + (unsigned int)a2[9];
  if ( (unsigned int)*(unsigned __int16 *)(v3 + 2LL * a3) < a2[5] )
    return a1 + *(unsigned int *)(a1 + (unsigned int)a2[7] + 4LL * *(unsigned __int16 *)(v3 + 2LL * a3));
  else
    return 0LL;
}
