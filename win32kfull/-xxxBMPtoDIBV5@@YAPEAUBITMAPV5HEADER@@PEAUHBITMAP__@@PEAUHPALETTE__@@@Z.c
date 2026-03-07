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
