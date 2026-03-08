/*
 * XREFs of GxpReadFrameBufferPixels @ 0x140AE9548
 * Callers:
 *     BgpGxReadRectangle @ 0x140AE94D8 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x1403029E8 (BgpGetResolution.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x140381AD8 (GxpAdjustRectangleToFrameBuffer.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x14066F8F8 (GxpGetRotatedPixelOffset.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  unsigned int *v3; // rsi
  unsigned int v5; // r15d
  _DWORD *Resolution; // rax
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // r8
  int RotatedPixelOffset; // r14d
  char *v14; // r13
  unsigned int v15; // ebx
  char *v16; // r12
  size_t v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // [rsp+30h] [rbp-59h] BYREF
  char *v20; // [rsp+38h] [rbp-51h]
  __int64 v21; // [rsp+40h] [rbp-49h] BYREF
  int v22; // [rsp+48h] [rbp-41h]
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  int v24; // [rsp+58h] [rbp-31h]
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  int v26; // [rsp+68h] [rbp-21h]
  __int64 v27; // [rsp+70h] [rbp-19h] BYREF
  int v28; // [rsp+78h] [rbp-11h]
  _DWORD v29[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int *v32; // [rsp+F8h] [rbp+6Fh]
  int v33; // [rsp+100h] [rbp+77h]
  unsigned __int64 v34; // [rsp+108h] [rbp+7Fh]

  v32 = a2;
  v2 = 0;
  v23 = 0LL;
  v3 = a2;
  v24 = 0;
  v19 = 0LL;
  v34 = 0LL;
  v31 = 0;
  v5 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v27);
  v8 = Resolution[2];
  v21 = *(_QWORD *)Resolution;
  v22 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) != v7 || !v3 || v9 + *v3 > (unsigned int)v21 || v10 + v3[1] > HIDWORD(v21) )
    return 3221225485LL;
  if ( (dword_140C0E3B0 & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v5 * v9 * v10 )
    return 3221225507LL;
  if ( (dword_140C0E3B0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer((unsigned int *)a1, v3, (unsigned int *)&v21, (unsigned int *)&v23, &v19, 0);
  if ( (int)result >= 0 )
  {
    RotatedPixelOffset = 0;
    v33 = 0;
    if ( (_BYTE)BgInternal )
    {
      v14 = *(char **)(a1 + 24);
      v15 = *(_DWORD *)a1;
      v20 = (char *)qword_140C0E360;
      if ( BYTE2(BgInternal) )
      {
        HIDWORD(v34) = 0;
        if ( v15 )
        {
          while ( 1 )
          {
            LODWORD(v34) = 0;
            if ( *(_DWORD *)(a1 + 4) )
              break;
LABEL_31:
            HIDWORD(v34) = ++v2;
            if ( v2 >= *(_DWORD *)a1 )
              goto LABEL_18;
          }
          v25 = v21;
          v26 = v22;
          v27 = v23;
          v28 = v24;
          while ( 1 )
          {
            RotatedPixelOffset = GxpGetRotatedPixelOffset(v34, (int *)&v27, v3, (__int64)&v25, &v31);
            if ( RotatedPixelOffset < 0 )
              break;
            memmove(v14, &v20[v5 * v31], v5);
            v14 += v5;
            LODWORD(v34) = v34 + 1;
            if ( (unsigned int)v34 >= *(_DWORD *)(a1 + 4) )
              goto LABEL_31;
          }
        }
      }
      else
      {
        v16 = (char *)qword_140C0E360 + v5 * (*v3 + v3[1] * v22);
        if ( v15 )
        {
          v17 = *(_DWORD *)(a1 + 4) * v5;
          v18 = v5 * v22;
          do
          {
            memmove(v14, v16, v17);
            v16 += v18;
            v14 += *(_DWORD *)(a1 + 4) * v5;
            --v15;
          }
          while ( v15 );
          v3 = v32;
          RotatedPixelOffset = v33;
        }
      }
    }
    else
    {
      v29[0] = *(_DWORD *)a1;
      v29[1] = *(_DWORD *)(a1 + 4);
      v29[3] = *(_DWORD *)(a1 + 12);
      v29[2] = xmmword_140C0E350;
      v30 = *(_QWORD *)(a1 + 24);
      if ( qword_140C0E360 )
      {
        LOBYTE(v12) = 1;
        RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, unsigned int *, __int64))qword_140C0E360)(v29, v3, v12);
      }
      else
      {
        RotatedPixelOffset = -1073741823;
      }
    }
LABEL_18:
    *(_DWORD *)a1 = HIDWORD(v23);
    *(_DWORD *)(a1 + 4) = v23;
    *(_QWORD *)v3 = v19;
    return (unsigned int)RotatedPixelOffset;
  }
  return result;
}
