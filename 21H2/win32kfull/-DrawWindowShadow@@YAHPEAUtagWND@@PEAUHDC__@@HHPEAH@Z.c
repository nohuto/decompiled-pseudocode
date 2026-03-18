/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FB54
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029D948 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  HRGN v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  unsigned __int8 *v17; // r15
  __int64 SolidBrush; // r12
  HBRUSH StockObject; // rax
  HRGN v20; // rdx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  __int128 v27; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v27 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = (HRGN)v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v27);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v27, (unsigned int)-DWORD1(v27));
      v12 = 0;
    }
    else
    {
      v22 = -(int)v27;
      LODWORD(v27) = 0;
      v23 = HIDWORD(v27) - DWORD1(v27);
      DWORD1(v27) = 0;
      HIDWORD(v27) = v23;
      DWORD2(v27) += v22;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v27), v23);
      v12 = 1;
    }
    *a5 = v12;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                    + 64LL) & 1) != 0
      && (v13 = *((_QWORD *)this + 5), v14 = *(_DWORD *)(v13 + 288), (v14 & 0xF) == 0)
      && (v14 & 0x40000000) != 0
      && (v24 = *(unsigned __int16 *)(v13 + 284), (_WORD)v24 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v24, RectRgn);
      if ( !v7 )
        goto LABEL_18;
    }
    else
    {
      v7 = 1;
    }
    v15 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v16 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v16 = 0LL;
    }
    GreOffsetRgn(v10, v16, 5LL);
    if ( !*a5 || a4 )
    {
      v17 = (unsigned __int8 *)&unk_1C02ED860;
      while ( 1 )
      {
        SolidBrush = GreCreateSolidBrush(*v17 | (*v17 << 16) | (*v17 << 8));
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v15);
        GreDeleteObject(SolidBrush);
        --v15;
        --v17;
        if ( v15 <= 0 )
        {
          StockObject = (HBRUSH)GreGetStockObject(4LL);
          v20 = (HRGN)RectRgn;
          goto LABEL_17;
        }
      }
      v7 = 0;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      StockObject = (HBRUSH)GreGetStockObject(0LL);
      v20 = v10;
LABEL_17:
      NtGdiFillRgn(a2, v20, StockObject);
    }
  }
LABEL_18:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
