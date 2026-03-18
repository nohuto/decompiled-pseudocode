/*
 * XREFs of ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C0219B58
 * Callers:
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C0219558 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIBV5(HSURF a1, __int64 a2)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v3; // rdi
  struct BITMAPV5HEADER *v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  result = xxxBMPtoDIB(a1, a2, &v5);
  v3 = result;
  if ( result )
  {
    v4 = DIBtoDIBV5(&result->bmiHeader);
    Win32FreePool(v3);
    return (struct tagBITMAPINFO *)v4;
  }
  return result;
}
