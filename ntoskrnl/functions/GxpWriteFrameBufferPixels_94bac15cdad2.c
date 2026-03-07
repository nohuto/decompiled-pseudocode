__int64 __fastcall GxpWriteFrameBufferPixels(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rdi
  unsigned int BitsPerPixel; // r15d
  __int64 result; // rax
  int v6; // r11d
  char *v7; // r12
  unsigned int v8; // r15d
  unsigned int v9; // r10d
  __int64 v10; // rsi
  char *v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // r8d
  size_t v18; // r13
  __int64 v19; // r14
  __int64 v20; // rdi
  int RotatedPixelOffset; // ebx
  _BYTE *v22; // rsi
  __int64 v23; // r9
  unsigned int v24; // esi
  char *v25; // r13
  unsigned __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h]
  unsigned __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  _DWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+ACh] [rbp-54h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[80]; // [rsp+D0h] [rbp-30h] BYREF

  v37 = a2;
  v2 = a2;
  v35 = a1;
  v3 = a1;
  v44 = 0LL;
  v43 = 0LL;
  v28 = 0LL;
  v29 = 0;
  memset(v45, 0, 0x48uLL);
  v34 = 0LL;
  v33 = 0LL;
  v26 = 0LL;
  v27 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v30 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v31 = HIDWORD(BgInternal);
  if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)v3 || *(_DWORD *)(v3 + 8) != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (dword_140C0E3B0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(v3, v2, (unsigned int)&v30, (unsigned int)&v34, (__int64)&v33, 1);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)BgInternal )
    {
      v22 = 0LL;
      v39[0] = *(_DWORD *)v3;
      v39[1] = *(_DWORD *)(v3 + 4);
      v26 = 0LL;
      if ( (dword_140C0E3B0 & 8) != 0 )
      {
        if ( (dword_140C0E3B0 & 0xC00) != 0 )
        {
          v23 = 1LL;
          v26 = (unsigned __int64)v45;
        }
        else
        {
          v23 = 0LL;
        }
        RotatedPixelOffset = BgpGxConvertRectangleEx(v3, 4LL, &v26, v23);
        if ( RotatedPixelOffset < 0 )
          goto LABEL_19;
        v22 = (_BYTE *)v26;
        v41 = *(_DWORD *)(v26 + 12);
        v42 = *(_QWORD *)(v26 + 24);
        v40 = 1;
      }
      else
      {
        v41 = *(_DWORD *)(v3 + 12);
        v42 = *(_QWORD *)(v3 + 24);
        v40 = xmmword_140C0E350;
      }
      if ( !qword_140C0E360 )
      {
        RotatedPixelOffset = -1073741823;
        goto LABEL_19;
      }
      RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, unsigned __int64, _QWORD))qword_140C0E360)(v39, v2, 0LL);
      if ( v22 && v22 != v45 )
        BgpGxRectangleDestroy(v22);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
LABEL_18:
      RotatedPixelOffset = 0;
LABEL_19:
      *(_DWORD *)v3 = HIDWORD(v34);
      *(_DWORD *)(v3 + 4) = v34;
      *(_QWORD *)v2 = v33;
      return (unsigned int)RotatedPixelOffset;
    }
    v6 = v31;
    v7 = *(char **)(v3 + 24);
    v8 = BitsPerPixel >> 3;
    v9 = v8 * v34;
    v10 = v8 * (*(_DWORD *)v2 + *(_DWORD *)(v2 + 4) * v31);
    LODWORD(v32) = v8 * v34;
    v11 = (char *)qword_140C0E360 + v10;
    if ( !BYTE2(BgInternal) )
      goto LABEL_10;
    if ( BYTE2(BgInternal) != 1 )
    {
      if ( BYTE2(BgInternal) == 2 )
      {
LABEL_10:
        v12 = *(_DWORD *)(v3 + 4);
        v13 = v12;
        v14 = *(_DWORD *)v3;
        v15 = *(_DWORD *)v3;
LABEL_11:
        v16 = v8 * v13;
        v17 = v8 * v31;
        v28 = __PAIR64__(v14, v16);
        v29 = v8 * v31;
        if ( BYTE2(BgInternal) )
        {
          v43 = __PAIR64__(v15, v12);
          v24 = 0;
          HIDWORD(v26) = 0;
          if ( v15 )
          {
            while ( 1 )
            {
              LODWORD(v26) = 0;
              v25 = &v7[v9 * v24];
              if ( v12 )
                break;
LABEL_47:
              HIDWORD(v26) = ++v24;
              if ( v24 >= *(_DWORD *)v3 )
                goto LABEL_16;
            }
            v37 = v30;
            v35 = v43;
            v38 = v6;
            v36 = v44;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     v26,
                                     (unsigned int)&v35,
                                     v2,
                                     (unsigned int)&v37,
                                     (__int64)&v27);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_140C0E360 + v8 * v27, v25, v8);
              v25 += v8;
              v12 = *(_DWORD *)(v3 + 4);
              LODWORD(v26) = v26 + 1;
              if ( (unsigned int)v26 >= v12 )
              {
                v7 = *(char **)(v3 + 24);
                v9 = v32;
                v6 = v31;
                goto LABEL_47;
              }
            }
          }
        }
        else if ( v14 )
        {
          v18 = v16;
          v26 = v9;
          v19 = v9;
          v32 = v17;
          v20 = v17;
          do
          {
            memmove(v11, v7, v18);
            v7 += v19;
            v11 += v20;
            --v14;
          }
          while ( v14 );
          v3 = v35;
          v2 = v37;
        }
LABEL_16:
        if ( qword_140C0E510 )
          BgfxGrowDirtyRect(&v28, v2, v8);
        goto LABEL_18;
      }
      if ( BYTE2(BgInternal) != 3 )
      {
        RotatedPixelOffset = -1073741811;
        goto LABEL_19;
      }
    }
    v15 = *(_DWORD *)v3;
    v13 = *(_DWORD *)v3;
    v14 = *(_DWORD *)(v3 + 4);
    v12 = v14;
    goto LABEL_11;
  }
  return result;
}
