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
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  LONG right; // esi
  LONG bottom; // edi
  __int64 DIBitmapReal; // rax
  __int64 v20; // rbx
  HBRUSH StockObject; // rax
  __int64 ScaledWindowShadowFromDIB; // rax
  __int64 v23; // rdi
  RECT v25; // [rsp+70h] [rbp-49h] BYREF
  int v26; // [rsp+80h] [rbp-39h] BYREF
  int v27; // [rsp+84h] [rbp-35h]
  void *v28; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v29; // [rsp+90h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-21h]
  _DWORD v31[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v32; // [rsp+ACh] [rbp-Dh]
  __int128 v33; // [rsp+B4h] [rbp-5h]
  __int64 v34; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v29 = a1;
  v34 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v6 = *(__m128i *)(v2 + 88);
  v7 = *(_BYTE *)(v2 + 26) & 0x40;
  v26 = 0;
  v8 = 0;
  v9 = 1;
  v27 = v7;
  v25.top = 0;
  v25.left = 0;
  v25.right = v6.m128i_i32[2] - _mm_cvtsi128_si32(v6);
  v25.bottom = v6.m128i_i32[3] - v6.m128i_i32[1];
  if ( !IsRectEmptyInl(&v25) )
  {
    v25.right = v10 + 5;
    v25.bottom = v11 + 5;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *((_QWORD *)PtiCurrentShared(v12) + 57)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v13) + 57) + 8LL) + 64LL) & 1) != 0
      && (v14 = *((_QWORD *)a1 + 5), v15 = *(_DWORD *)(v14 + 288), (v15 & 0xF) == 0)
      && (v15 & 0x40000000) != 0
      && (v16 = *(unsigned __int16 *)(v14 + 284), (_WORD)v16 != 96) )
    {
      v9 = (unsigned __int16)GreGetScaledLogPixels(v16) / 0x60u;
      right = v9 * v25.right;
      bottom = v9 * v25.bottom;
      v25.right *= v9;
      v25.bottom *= v9;
    }
    else
    {
      bottom = v25.bottom;
      right = v25.right;
    }
    v34 = 0LL;
    v33 = 0LL;
    v31[0] = 40;
    v31[1] = right;
    v31[2] = bottom;
    v32 = 2097153LL;
    DIBitmapReal = GreCreateDIBitmapReal(
                     (_DWORD)a2,
                     0,
                     0,
                     (unsigned int)v31,
                     0,
                     44,
                     0,
                     0LL,
                     0,
                     0LL,
                     0,
                     0LL,
                     (__int64)&v28);
    v20 = DIBitmapReal;
    if ( DIBitmapReal )
    {
      v30 = GreSelectBitmap(a2, DIBitmapReal);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v25, StockObject);
      if ( right < 15 || bottom < 15 )
        v8 = 1;
      if ( (unsigned int)DrawWindowShadow(v29, a2, v27, v8, &v26) )
      {
        if ( !v26 || v8 )
          DrawRegionalShadow((char *)v28, right, bottom);
        else
          DrawRoundedRectangularShadow(v28, right, bottom, v27, v9);
        v3 = 1;
      }
      GreDecBitmapExclusiveRefCnt(v20);
      if ( v3 )
      {
        if ( v9 <= 1 )
          return v20;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v29, a2, v9);
        v23 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v20);
          return v23;
        }
      }
      GreSelectBitmap(a2, v30);
      GreDeleteObject(v20);
      return 0LL;
    }
  }
  return 0LL;
}
