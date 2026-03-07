__int64 __fastcall DrawTextExWorker(
        HDC a1,
        char *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdi
  HRGN RectRgn; // rax
  __m128i v13; // xmm0
  LONG top; // ebx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // esi
  LONG v19; // ecx
  _BYTE v20[28]; // [rsp+50h] [rbp-A8h] BYREF
  int v21; // [rsp+6Ch] [rbp-8Ch]
  int v22; // [rsp+90h] [rbp-68h]

  LODWORD(v7) = a3;
  memset_0(v20, 0, 0x48uLL);
  v10 = 0LL;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&a2[2 * v7] );
    }
  }
  else if ( *(_WORD *)a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)v20, a6) )
    return 0LL;
  v22 = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    GreGetTextAlign(a1);
    GreSetTextAlign(a1);
  }
  if ( (a5 & 0x100) == 0 )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v10 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v10);
        v10 = -1LL;
      }
      v13 = _mm_srli_si128(*(__m128i *)a4, 8);
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        (unsigned int)_mm_cvtsi128_si32(v13),
        v13.m128i_i32[1]);
    }
  }
  top = a4->top;
  v15 = a5 & 0xC;
  if ( v15 == 4 )
  {
    top += (a4->bottom - top - v21) / 2;
  }
  else if ( v15 == 8 )
  {
    top = a4->bottom - v21;
  }
  v16 = AddEllipsisAndDrawLine((__int64)a1, top, a2, v7, a5, (struct DRAWTEXTDATA *)v20);
  v17 = v21 + top;
  v18 = (_DWORD)a2 + 2 * v16;
  if ( v10 )
  {
    if ( v10 == -1 )
    {
      GreExtSelectClipRgnInternal((__int64)a1, 0LL, 5, 1);
    }
    else
    {
      GreExtSelectClipRgnInternal((__int64)a1, (HRGN)v10, 5, 1);
      GreDeleteObject(v10);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v18 - (_DWORD)a2) >> 1;
  v19 = a4->top;
  if ( v17 == v19 )
    return 1LL;
  return (unsigned int)(v17 - v19);
}
