/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403C3840
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1403C3548 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1405EF24C (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v7; // r15
  int v9; // ebp
  _DWORD *Config; // rax
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  char v23; // [rsp+20h] [rbp-28h] BYREF

  v7 = a3;
  v9 = a1;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  v12 = 0;
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      *(_DWORD *)(a6 + 4) = Config[30] - a2;
    LOBYTE(v11) = 1;
    v13 = RtlImageDirectoryEntryToData(v9, v11, 12, (int)&v23);
    if ( v13 )
      *(_DWORD *)(a6 + 8) = v13 - v9;
    if ( a4 )
    {
      v15 = a4 - a2;
      v16 = 16LL;
      v17 = a5[18];
      if ( v17 <= a5[17] )
        v17 = a5[17];
      v18 = a5[19];
      if ( v18 <= v17 )
        v18 = v17;
      LODWORD(v19) = a5[20];
      if ( (unsigned int)v19 <= v18 )
        LODWORD(v19) = v18;
      v20 = a5 + 1;
      do
      {
        v21 = v19;
        v19 = *v20++;
        if ( (unsigned int)v19 <= v21 )
          v19 = v21;
        --v16;
      }
      while ( v16 );
      v22 = v15 + v19;
      if ( v22 < v15 || v22 > 0x7FFFFFFF || v15 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *(_DWORD *)a6 = v15;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v12;
}
