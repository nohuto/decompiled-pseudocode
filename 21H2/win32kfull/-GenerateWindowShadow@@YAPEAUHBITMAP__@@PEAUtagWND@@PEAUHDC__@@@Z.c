/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0023360 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C012E78C (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FB54 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0239218 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C02395E8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v3; // r12d
  __m128i v6; // xmm0
  int v7; // ecx
  int v8; // r13d
  signed int v9; // r14d
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // eax
  LONG bottom; // edi
  LONG right; // esi
  __int64 v16; // rax
  __int64 v17; // rbx
  HBRUSH StockObject; // rax
  __int64 v19; // rdx
  __int64 v21; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v23; // rdi
  RECT v24; // [rsp+70h] [rbp-49h] BYREF
  int v25; // [rsp+80h] [rbp-39h] BYREF
  int v26; // [rsp+84h] [rbp-35h]
  void *v27; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v28; // [rsp+90h] [rbp-29h]
  __int64 v29; // [rsp+98h] [rbp-21h]
  unsigned int v30[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v31; // [rsp+ACh] [rbp-Dh]
  __int128 v32; // [rsp+B4h] [rbp-5h]
  __int64 v33; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v28 = a1;
  v33 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v6 = *(__m128i *)(v2 + 88);
  v7 = *(_BYTE *)(v2 + 26) & 0x40;
  v25 = 0;
  v8 = 0;
  v9 = 1;
  v26 = v7;
  v24.top = 0;
  v24.left = 0;
  v24.right = v6.m128i_i32[2] - _mm_cvtsi128_si32(v6);
  v24.bottom = v6.m128i_i32[3] - v6.m128i_i32[1];
  if ( !IsRectEmptyInl(&v24) )
  {
    v24.right = v10 + 5;
    v24.bottom = v11 + 5;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                    + 64LL) & 1) != 0
      && (v12 = *((_QWORD *)a1 + 5), v13 = *(_DWORD *)(v12 + 288), (v13 & 0xF) == 0)
      && (v13 & 0x40000000) != 0
      && (v21 = *(unsigned __int16 *)(v12 + 284), (_WORD)v21 != 96) )
    {
      v9 = (unsigned __int16)GreGetScaledLogPixels(v21) / 0x60u;
      right = v9 * v24.right;
      bottom = v9 * v24.bottom;
      v24.right *= v9;
      v24.bottom *= v9;
    }
    else
    {
      bottom = v24.bottom;
      right = v24.right;
    }
    v33 = 0LL;
    v32 = 0LL;
    v30[0] = 40;
    v30[1] = right;
    v30[2] = bottom;
    v31 = 2097153LL;
    v16 = GreCreateDIBitmapReal(a2, 0LL, 0LL, v30, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v27);
    v17 = v16;
    if ( v16 )
    {
      v29 = GreSelectBitmap(a2, v16);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v24, StockObject);
      if ( right < 15 || bottom < 15 )
        v8 = 1;
      if ( (unsigned int)DrawWindowShadow(v28, a2, v26, v8, &v25) )
      {
        if ( !v25 || v8 )
          DrawRegionalShadow(v27, right, bottom);
        else
          DrawRoundedRectangularShadow(v27, right, bottom, v26, v9);
        v3 = 1;
      }
      GreDecBitmapExclusiveRefCnt(v17, v19);
      if ( v3 )
      {
        if ( v9 <= 1 )
          return v17;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v28, a2, v9);
        v23 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v17);
          return (__int64)v23;
        }
      }
      GreSelectBitmap(a2, v29);
      GreDeleteObject(v17);
      return 0LL;
    }
  }
  return 0LL;
}
