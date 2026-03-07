__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        char *Src,
        unsigned int a7,
        size_t Size,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  struct tagBITMAPINFO *v13; // rdi
  __int64 v14; // r14
  int v15; // esi
  unsigned int biSize; // r8d
  int v17; // eax
  __int64 DIBitmapReal; // rax
  __int64 inited; // rax
  __int64 v21; // [rsp+70h] [rbp-78h] BYREF
  __int64 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  __int16 v24; // [rsp+88h] [rbp-60h]
  _BYTE v25[24]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v26; // [rsp+A8h] [rbp-40h]

  v13 = 0LL;
  v14 = 1LL;
  memset(v25, 0, sizeof(v25));
  v26 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( !Src )
  {
    v15 = Size;
    goto LABEL_18;
  }
  v15 = Size;
  if ( !(_DWORD)Size )
    goto LABEL_18;
  if ( (unsigned int)Size < 4 )
    goto LABEL_14;
  if ( (unsigned int)Size > 0x2710000 )
    goto LABEL_14;
  v13 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
  if ( !v13 )
    goto LABEL_14;
  if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, Src, (unsigned int)Size);
  biSize = v13->bmiHeader.biSize;
  if ( v13->bmiHeader.biSize < 0x28
    || (unsigned int)Size < biSize
    || (_DWORD)Size != GreGetBitmapSizeInternal(v13, a7, biSize) )
  {
    FreeThreadBufferWithTag(v13);
    v13 = 0LL;
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  v17 = 1;
LABEL_15:
  v14 = -(__int64)(v17 != 0) & 1;
  if ( v14 && a5 )
  {
    inited = umptr_r<unsigned char>::init_probe((__int64)v25, a5, a9, 4LL);
    v21 = *(_QWORD *)inited;
    v22 = *(_QWORD *)(inited + 8);
    v23 = *(_QWORD *)(inited + 16);
    v24 = *(_WORD *)(inited + 24);
    v14 &= -(__int64)(v21 != 0);
  }
LABEL_18:
  if ( v14 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(a1, a7, v15, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)&v21, (__int64)v13, a7, v15, a11);
    v14 = DIBitmapReal;
  }
  if ( v13 )
    FreeThreadBufferWithTag(v13);
  return v14;
}
