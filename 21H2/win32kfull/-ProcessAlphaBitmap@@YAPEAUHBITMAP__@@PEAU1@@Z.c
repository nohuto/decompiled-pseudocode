/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0023D00
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0023360 (GreDecBitmapExclusiveRefCnt.c)
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBITMAP a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 DIBitmapReal; // rsi
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r10
  _BYTE *v7; // rax
  __int64 v8; // r11
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v12; // [rsp+70h] [rbp-19h] BYREF
  int v13[4]; // [rsp+78h] [rbp-11h]
  __int128 v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+98h] [rbp+Fh] BYREF
  int v16; // [rsp+9Ch] [rbp+13h]
  int v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A4h] [rbp+1Bh]
  __int128 v19; // [rsp+ACh] [rbp+23h]
  __int64 v20; // [rsp+BCh] [rbp+33h]

  v1 = (int)a1;
  if ( !a1 )
    return 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW((int)a1) || (_DWORD)v14 != 2097153 )
    return 0LL;
  v16 = v13[1];
  v17 = v13[2];
  v2 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v15 = 40;
  v18 = 2097153LL;
  v12 = 0LL;
  DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 56LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v12);
  if ( DIBitmapReal )
  {
    v16 = v13[1];
    v19 = 0LL;
    v20 = 0LL;
    v15 = 40;
    v17 = v13[2];
    v18 = 2097153LL;
    if ( (unsigned int)GreGetDIBitsInternal(
                         *(_QWORD *)(gpDispInfo + 56LL),
                         v1,
                         0,
                         v13[2],
                         v12,
                         &v15,
                         0,
                         v13[2] * (((32 * v13[1]) >> 3) & 0xFFFFFFFC),
                         40)
      && (v5 = 0, v4 = (unsigned int)(v16 * v17), (_DWORD)v4) )
    {
      v6 = v12;
      v7 = (_BYTE *)(v12 + 3);
      while ( !*v7 )
      {
        ++v5;
        v7 += 4;
        if ( v5 >= (unsigned int)v4 )
          goto LABEL_10;
      }
      v8 = (unsigned int)v4;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v2 + v6);
        v2 += 4LL;
        *(_BYTE *)(v2 + v6 - 2) = HIBYTE(v9) * BYTE2(v9) / 0xFFu;
        *(_BYTE *)(v2 + v12 - 3) = HIBYTE(v9) * BYTE1(v9) / 0xFFu;
        v10 = HIBYTE(v9) * (unsigned __int8)v9 / 0xFFu;
        *(_BYTE *)(v2 + v12 - 4) = v10;
        if ( !--v8 )
          break;
        v6 = v12;
      }
      GreDecBitmapExclusiveRefCnt(DIBitmapReal, v10);
    }
    else
    {
LABEL_10:
      GreDecBitmapExclusiveRefCnt(DIBitmapReal, v4);
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
