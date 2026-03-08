/*
 * XREFs of RtlpSearchFunctionTable @ 0x1402D3DB0
 * Callers:
 *     RtlMarkExceptionHandlingPages @ 0x1406ECFC0 (RtlMarkExceptionHandlingPages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r11
  unsigned int *v6; // r10
  int v7; // r9d
  int i; // r8d
  int v9; // eax

  if ( !a2 )
    return 0LL;
  v4 = a3 - a4;
  v5 = *(unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  v6 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  if ( a3 - a4 < v5 )
  {
    v7 = 0;
    for ( i = a2 - 2; i >= v7; LODWORD(v5) = *v6 )
    {
      v9 = (v7 + i) >> 1;
      v6 = (unsigned int *)(a1 + 12LL * v9);
      if ( v4 < *v6 )
      {
        i = v9 - 1;
      }
      else
      {
        LODWORD(v5) = *v6;
        if ( v4 < v6[3] )
          break;
        v7 = v9 + 1;
      }
    }
  }
  if ( v4 >= (unsigned int)v5 && v4 < v6[1] )
    return v6;
  else
    return 0LL;
}
