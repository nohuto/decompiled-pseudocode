__int64 __fastcall NtGdiStretchDIBitsInternal(
        struct tagRGBQUAD *a1,
        int a2,
        LONG a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        struct tagBITMAPINFO *Src,
        unsigned int a12,
        int a13,
        size_t Size,
        unsigned int a15,
        __int64 a16)
{
  unsigned int v20; // ebx
  __int64 inited; // rax
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int16 v27; // [rsp+A8h] [rbp-60h]
  _BYTE v28[88]; // [rsp+B0h] [rbp-58h] BYREF

  v23 = 0LL;
  v20 = 1;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  if ( a10 && Src && (_DWORD)Size )
  {
    v20 = bCaptureBitmapInfo(Src, a12, (unsigned int)Size, (struct tagBITMAPINFO **)&v23) != 0;
    if ( !v20 )
      goto LABEL_8;
    inited = umptr_r<unsigned char>::init_probe(v28, a10, a15, 4LL);
    v24 = *(_QWORD *)inited;
    v25 = *(_QWORD *)(inited + 8);
    v26 = *(_QWORD *)(inited + 16);
    v27 = *(_WORD *)(inited + 24);
    v20 &= -(v24 != 0);
  }
  if ( v20 )
    v20 = GreStretchDIBitsInternalImpl(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            (__int64)&v24,
            (unsigned int *)v23,
            a12,
            a13,
            Size,
            a16);
LABEL_8:
  if ( v23 )
    FreeThreadBufferWithTag(v23);
  return v20;
}
