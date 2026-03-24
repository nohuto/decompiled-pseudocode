/*
 * XREFs of DrawTextExWorker @ 0x1C025EBF0
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0169284 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C0042BB0 (GreGetRandomRgn.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     GreSetTextAlign @ 0x1C0124540 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C01257C8 (GreGetTextAlign.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     GreExtSelectClipRgnInternal @ 0x1C016CC48 (GreExtSelectClipRgnInternal.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025E2A0 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E884 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  int TextAlign; // eax
  HRGN RectRgn; // rax
  __m128i v16; // xmm0
  LONG top; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // esi
  LONG v22; // ecx
  int v23; // [rsp+40h] [rbp-B8h]
  _DWORD v24[20]; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v7) = a3;
  memset(v24, 0, 0x48uLL);
  v12 = 0LL;
  v23 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87LL, v10, v11);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)v24, a6) )
    return 0LL;
  v24[16] = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v23 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) == 0 )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v12 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v12);
        v12 = -1LL;
      }
      v16 = _mm_srli_si128(*(__m128i *)a4, 8);
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        (unsigned int)_mm_cvtsi128_si32(v16),
        v16.m128i_i32[1]);
    }
  }
  top = a4->top;
  v18 = a5 & 0xC;
  if ( v18 == 4 )
  {
    top += (a4->bottom - top - v24[7]) / 2;
  }
  else if ( v18 == 8 )
  {
    top = a4->bottom - v24[7];
  }
  v19 = AddEllipsisAndDrawLine(a1, top, a2, v7, a5, (struct DRAWTEXTDATA *)v24);
  v20 = v24[7] + top;
  v21 = (_DWORD)a2 + 2 * v19;
  if ( v12 )
  {
    if ( v12 == -1 )
    {
      GreExtSelectClipRgnInternal(a1, 0LL, 5, 1);
    }
    else
    {
      GreExtSelectClipRgnInternal(a1, (HRGN)v12, 5, 1);
      GreDeleteObject(v12);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v23);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v21 - (_DWORD)a2) >> 1;
  v22 = a4->top;
  if ( v20 == v22 )
    return 1LL;
  return (unsigned int)(v20 - v22);
}
