/*
 * XREFs of ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C01FF600
 * Callers:
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFD30 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01FEA98 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FF33C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

struct tagBITMAPINFOHEADER *__fastcall xxxBMPtoDIBV5(HBRUSH a1, __int64 a2)
{
  struct tagBITMAPINFOHEADER *result; // rax
  struct BITMAPV5HEADER *v3; // rdi
  struct BITMAPV5HEADER *v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  result = xxxBMPtoDIB(a1, a2, &v5);
  v3 = (struct BITMAPV5HEADER *)result;
  if ( result )
  {
    v4 = DIBtoDIBV5(result);
    Win32FreePool(v3);
    return (struct tagBITMAPINFOHEADER *)v4;
  }
  return result;
}
