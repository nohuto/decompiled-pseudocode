/*
 * XREFs of ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0069760
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 *     HMAllocObject @ 0x1C0032C10 (HMAllocObject.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0069B24 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     wcsncpycch @ 0x1C006B1A8 (wcsncpycch.c)
 *     _wcsicmp @ 0x1C00C5384 (_wcsicmp.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C01AAC20 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 */

struct tagKBDFILE *__fastcall LoadKeyboardLayoutFile(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        wchar_t *Str2,
        unsigned int a6,
        unsigned int a7)
{
  __int64 i; // rbx
  __int64 v11; // rax
  struct tagKbdLayer *LayoutFile; // rax

  for ( i = gpkfList; i; i = *(_QWORD *)(i + 16) )
  {
    if ( Str2 && !wcsicmp((const wchar_t *)(i + 56), Str2) )
      return (struct tagKBDFILE *)i;
  }
  v11 = HMAllocObject(0LL, 0LL, 0xEu, 0x78u);
  i = v11;
  if ( v11 )
  {
    if ( a1 )
    {
      wcsncpycch(v11 + 56, Str2, 32LL);
      *(_WORD *)(i + 118) = 0;
      LayoutFile = ReadLayoutFile((struct tagKBDFILE *)i, a1, a2, a3);
      *(_QWORD *)(i + 32) = LayoutFile;
      if ( a6 || a7 )
      {
        if ( LayoutFile )
        {
          *((_DWORD *)LayoutFile + 24) = a6;
          *(_DWORD *)(*(_QWORD *)(i + 32) + 100LL) = a7;
        }
      }
    }
    else
    {
      *(_QWORD *)(v11 + 32) = PrepareFallbackKeyboardFile((struct tagKBDFILE *)v11);
    }
    if ( *(_QWORD *)(i + 32) )
    {
      *(_QWORD *)(i + 16) = gpkfList;
      gpkfList = i;
      return (struct tagKBDFILE *)i;
    }
    HMFreeObject((_DWORD *)i);
  }
  return 0LL;
}
