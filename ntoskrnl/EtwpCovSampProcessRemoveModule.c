/*
 * XREFs of EtwpCovSampProcessRemoveModule @ 0x1408A528C
 * Callers:
 *     EtwpCovSampProcessAddModule @ 0x1409EFA84 (EtwpCovSampProcessAddModule.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F0BAC (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpCovSampModuleDereference @ 0x1408A4F50 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x1408A532E (EtwpCovSampProcessUpperBoundModule.c)
 */

__int64 __fastcall EtwpCovSampProcessRemoveModule(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // edx

  v6 = EtwpCovSampProcessUpperBoundModule(a1, a2);
  if ( v6 < *(_DWORD *)(a1 + 32) )
  {
    v7 = a2 + a3;
    do
    {
      v8 = (_QWORD *)(16LL * v6 + *(_QWORD *)(a1 + 24));
      v9 = v8[1];
      if ( *v8 - *(_QWORD *)(v9 + 40) >= v7 )
        break;
      EtwpCovSampModuleDereference(*(_QWORD *)a1, v9);
      v11 = *(_DWORD *)(a1 + 32);
      if ( v11 > v6 + 1 )
        memmove((void *)v10, (const void *)(v10 + 16), 16LL * (v11 - v6 - 1));
      --*(_DWORD *)(a1 + 32);
    }
    while ( v6 < *(_DWORD *)(a1 + 32) );
  }
  return v6;
}
