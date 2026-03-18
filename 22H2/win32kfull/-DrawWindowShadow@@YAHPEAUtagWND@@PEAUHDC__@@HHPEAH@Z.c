/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220DE4
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C02210E4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0077D38 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02A8100 (GreScaleRgnToDestLogPixel.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  unsigned __int8 *v27; // r15
  __int64 SolidBrush; // r12
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v32 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v32);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v32, (unsigned int)-DWORD1(v32));
      v14 = 0;
    }
    else
    {
      v12 = -(int)v32;
      LODWORD(v32) = 0;
      v13 = HIDWORD(v32) - DWORD1(v32);
      DWORD1(v32) = 0;
      HIDWORD(v32) = v13;
      DWORD2(v32) += v12;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v32), v13);
      v14 = 1;
    }
    *a5 = v14;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *((_QWORD *)PtiCurrentShared(v16, v15, v17, v18) + 57)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v20, v19, v21, v22) + 57) + 8LL) + 64LL) & 1) != 0
      && (v23 = *((_QWORD *)this + 5), (*(_DWORD *)(v23 + 288) & 0x4000000F) == 0x40000000)
      && (v24 = *(unsigned __int16 *)(v23 + 284), (_WORD)v24 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v24, RectRgn);
      if ( !v7 )
        goto LABEL_25;
    }
    else
    {
      v7 = 1;
    }
    v25 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v26 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v26 = 0LL;
    }
    GreOffsetRgn(v10, v26, 5LL);
    if ( !*a5 || a4 )
    {
      v27 = (unsigned __int8 *)&unk_1C0321288;
      while ( 1 )
      {
        SolidBrush = GreCreateSolidBrush(*v27 | (*v27 << 16) | (*v27 << 8));
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v25);
        GreDeleteObject(SolidBrush);
        --v25;
        --v27;
        if ( v25 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_19;
        }
      }
      v7 = 0;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_19:
      NtGdiFillRgn(a2);
    }
  }
LABEL_25:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
