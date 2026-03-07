__int64 __fastcall HalpDmaTranslationEntryToIndex(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 *v3; // r9
  int v4; // r10d
  unsigned __int64 v5; // r11

  v3 = *(__int64 **)(a1 + 48);
  v4 = 0;
  while ( 1 )
  {
    if ( !v3 )
      return 0xFFFFFFFFLL;
    v5 = v3[2];
    if ( v5 <= a2 && a2 < v5 + 72LL * *((unsigned int *)v3 + 2) )
      break;
    v4 += *((_DWORD *)v3 + 2);
    v3 = (__int64 *)*v3;
  }
  if ( a3 )
    *a3 = v3;
  return v4 + 954437177 * (unsigned int)((__int64)(a2 - v5) >> 3);
}
