/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B6910
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1403B6618 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058FDFC (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
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
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  char v22; // [rsp+20h] [rbp-28h] BYREF

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
    v13 = RtlImageDirectoryEntryToData(v9, v11, 12, (int)&v22);
    if ( v13 )
      *(_DWORD *)(a6 + 8) = v13 - v9;
    if ( a4 )
    {
      v15 = a4 - a2;
      v16 = a5[18];
      v17 = a5[19];
      if ( v16 <= a5[17] )
        v16 = a5[17];
      if ( v17 <= v16 )
        v17 = v16;
      v18 = a5 + 1;
      v19 = 16LL;
      do
      {
        v20 = v17;
        v17 = *v18++;
        if ( v17 <= v20 )
          v17 = v20;
        --v19;
      }
      while ( v19 );
      v21 = v15 + v17;
      if ( __OFSUB__(v21, v15) || v21 > 0x7FFFFFFF || v15 - v7 < (__int64)0xFFFFFFFF80000000uLL )
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
