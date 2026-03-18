/*
 * XREFs of ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z @ 0x1C010F208
 * Callers:
 *     NtUserBuildHimcList @ 0x1C010F110 (NtUserBuildHimcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _BuildHimcList(const struct tagTHREADINFO *a1, unsigned int a2, struct HIMC__ **a3)
{
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 j; // r9
  __int64 k; // rdx

  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *((_QWORD *)a1 + 99); i && (unsigned int)v5 < a2; i = *(_QWORD *)(i + 56) )
    {
      a3[v5] = *(struct HIMC__ **)i;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  else
  {
    for ( j = *(_QWORD *)(PsGetCurrentProcessWin32Process(0LL) + 320); j; j = *(_QWORD *)(j + 664) )
    {
      for ( k = *(_QWORD *)(j + 792); k && (unsigned int)v5 < a2; k = *(_QWORD *)(k + 56) )
      {
        a3[v5] = *(struct HIMC__ **)k;
        v5 = (unsigned int)(v5 + 1);
      }
    }
  }
  return (unsigned int)v5;
}
