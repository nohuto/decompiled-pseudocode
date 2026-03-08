/*
 * XREFs of ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01FEA98
 * Callers:
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C01FF600 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFD30 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C01FF220 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 */

struct BITMAPV5HEADER *__fastcall DIBtoDIBV5(struct tagBITMAPINFOHEADER *a1)
{
  unsigned __int64 v2; // r8
  size_t v3; // rsi
  unsigned int v4; // r9d
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  size_t v7; // r15
  _OWORD *v8; // rax
  _OWORD *v9; // rbx

  if ( a1->biSize != 40 )
    return 0LL;
  v2 = (unsigned int)a1->biWidth * (unsigned __int64)a1->biBitCount;
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  if ( abs32(a1->biHeight) * (unsigned __int64)(((unsigned int)(v2 + 31) >> 3) & 0x1FFFFFFC) > 0xFFFFFFFF )
    return 0LL;
  v3 = SizeOfDibColorTable(a1);
  v6 = v4 + 124;
  if ( v4 + 124 < v4 )
    return 0LL;
  if ( v6 + (unsigned int)v3 < (unsigned int)v3 )
    return 0LL;
  v7 = v4;
  if ( v5 < v4 + v3 + 40 )
    return 0LL;
  v8 = (_OWORD *)Win32AllocPoolZInit(v6 + (unsigned int)v3, 1650684757LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  memset_0(v8, 0, 0x7CuLL);
  *v9 = *(_OWORD *)&a1->biSize;
  v9[1] = *(_OWORD *)&a1->biCompression;
  *((_QWORD *)v9 + 4) = *(_QWORD *)&a1->biClrUsed;
  *(_DWORD *)v9 = 124;
  *((_DWORD *)v9 + 14) = 1934772034;
  *((_DWORD *)v9 + 27) = 4;
  if ( a1->biCompression == 3 && ((a1->biBitCount - 16) & 0xFFEF) == 0 )
  {
    *((_DWORD *)v9 + 10) = a1[1].biSize;
    *((_DWORD *)v9 + 11) = a1[1].biWidth;
    *((_DWORD *)v9 + 12) = a1[1].biHeight;
  }
  if ( (_DWORD)v3 )
    memmove((char *)v9 + 124, &a1[1], v3);
  memmove((char *)v9 + v3 + 124, (char *)&a1[1] + v3, v7);
  return (struct BITMAPV5HEADER *)v9;
}
