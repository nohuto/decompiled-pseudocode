/*
 * XREFs of MiMapCacheExceptionFilter @ 0x140A2DBCC
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMapCacheExceptionFilter(int *a1, int **a2)
{
  int *v2; // r8
  int v3; // eax

  v2 = *a2;
  v3 = **a2;
  if ( v3 == -1073741818 )
  {
    if ( (unsigned int)v2[6] < 3 )
      goto LABEL_6;
    v3 = v2[12];
  }
  if ( v3 == -1073741819 )
    v3 = -1073741592;
LABEL_6:
  *a1 = v3;
  return 1LL;
}
