__int64 __fastcall BgpTxtDisplayString(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 *v6; // r14
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  __m128i *v16; // r15
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  _BYTE *v22; // rsi
  __int64 v24; // [rsp+38h] [rbp-38h]
  __m128i *v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-10h]
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+58h] BYREF

  v30 = a4;
  v26 = 0LL;
  v29 = 0;
  v6 = (__int16 *)a2;
  v28 = 0LL;
  v27 = 0;
  a5 = 0LL;
  v25 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(a2 + 2 * v8) );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = (unsigned __int16 *)a2;
        v30 = a2;
        while ( 1 )
        {
          AdvanceWidth = BgpFoGetAdvanceWidth((int)a1 + 40, *v11, (int)&v29, a4, 0LL);
          if ( AdvanceWidth < 0 )
            break;
          ++v10;
          v9 += v29;
          v11 = (unsigned __int16 *)(v30 + 2);
          v30 += 2LL;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&a5);
        if ( AdvanceWidth >= 0 )
        {
          v12 = *(_DWORD *)(a1 + 12);
          v13 = HIDWORD(a5);
          v27 = v9;
          if ( HIDWORD(a5) > v12 )
            v13 = v12;
          v14 = *(_DWORD *)(a1 + 8);
          HIDWORD(v26) = v13;
          if ( v9 > v14 )
            v9 = v14;
          LODWORD(v26) = v9;
          v15 = BgpGxRectangleCreate(&v26, 32, (__int64 *)&v25);
          v16 = v25;
          AdvanceWidth = v15;
          if ( v15 >= 0 )
          {
            BgpGxFillRectangle((__int64)v25, *(_DWORD *)(a1 + 40));
            v17 = 0;
            v18 = 0;
            LODWORD(v30) = 0;
            v28 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v19 = BgpRasPrintGlyph(v16, a1 + 40, *v6, v18, v17, 0, &v29, v24, 0LL);
                AdvanceWidth = v19;
                if ( v19 == -2147483643 )
                  break;
                if ( v19 < 0 )
                  goto LABEL_30;
                v18 = v29 + v28;
                LODWORD(v28) = v18;
                if ( v18 > v9 )
                  break;
                ++v6;
                LODWORD(v30) = v30 + 1;
                if ( (unsigned int)v30 >= (unsigned int)v8 )
                  break;
                v17 = HIDWORD(v28);
              }
            }
            TxtpJustifyRectangle(a1, &v26, &v28);
            v20 = *(_DWORD **)(a1 + 24);
            v30 = 0LL;
            v21 = BgpGxBlendRectangle(v20, v16, &v28, &v30);
            v22 = (_BYTE *)v30;
            AdvanceWidth = v21;
            if ( v21 >= 0 )
            {
              AdvanceWidth = BgpTxtClearRegion(a1);
              if ( AdvanceWidth >= 0 )
              {
                HIDWORD(v28) = *(_DWORD *)(a1 + 4);
                LODWORD(v28) = *(_DWORD *)a1 + v28;
                AdvanceWidth = BgpGxDrawRectangle(v22, (__int64)&v28);
              }
            }
            if ( v22 )
              BgpGxRectangleDestroy((__int64)v22);
          }
LABEL_30:
          if ( v16 )
            BgpGxRectangleDestroy((__int64)v16);
        }
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1);
  }
  return (unsigned int)AdvanceWidth;
}
