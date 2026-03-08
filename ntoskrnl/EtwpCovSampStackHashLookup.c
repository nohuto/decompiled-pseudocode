/*
 * XREFs of EtwpCovSampStackHashLookup @ 0x1409EFF34
 * Callers:
 *     EtwpCovSampStackHashCheck @ 0x1408A537C (EtwpCovSampStackHashCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampStackHashLookup(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r11d
  unsigned int i; // r10d
  _DWORD *v5; // r9
  __int64 result; // rax

  v3 = 0;
  for ( i = a2 & (*(_DWORD *)(a1 + 4) - 1); ; i = (*(_DWORD *)(a1 + 4) - 1) & (v3 + i) )
  {
    v5 = (_DWORD *)(a1 + 4 * (i + 2LL));
    if ( *v5 == a2 )
    {
      result = 1LL;
      goto LABEL_9;
    }
    if ( !*v5 )
      break;
    if ( !v3 )
    {
      v3 = -1640531535 * a2 + 1;
      if ( ((-79 * (_BYTE)a2) & 1) != 0 )
        v3 = -1640531535 * a2;
    }
  }
  result = 0LL;
LABEL_9:
  *a3 = v5;
  return result;
}
