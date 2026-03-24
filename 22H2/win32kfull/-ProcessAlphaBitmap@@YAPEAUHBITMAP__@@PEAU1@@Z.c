/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A9B10
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0065454 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0082984 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00A9DAC (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HSURF a1)
{
  __int64 DIBitmapReal; // rdi
  int DIBitsInternal; // ebx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r10
  _BYTE *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r11
  unsigned int v10; // r8d
  __int64 v12; // [rsp+70h] [rbp-19h] BYREF
  __int128 v13; // [rsp+78h] [rbp-11h] BYREF
  __int128 v14; // [rsp+88h] [rbp-1h]
  tagBITMAPINFO v15; // [rsp+98h] [rbp+Fh] BYREF

  if ( !a1 )
    return 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, (char *)&v13) || (_DWORD)v14 != 2097153 )
    return 0LL;
  *(_QWORD *)&v15.bmiHeader.biWidth = *(_QWORD *)((char *)&v13 + 4);
  memset(&v15.bmiHeader.biSizeImage, 0, 24);
  v15.bmiHeader.biSize = 40;
  *(_QWORD *)&v15.bmiHeader.biPlanes = 2097153LL;
  v12 = 0LL;
  DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 56LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v12);
  if ( DIBitmapReal )
  {
    *(_QWORD *)&v15.bmiHeader.biWidth = *(_QWORD *)((char *)&v13 + 4);
    memset(&v15.bmiHeader.biSizeImage, 0, 24);
    v15.bmiHeader.biSize = 40;
    *(_QWORD *)&v15.bmiHeader.biPlanes = 2097153LL;
    DIBitsInternal = GreGetDIBitsInternal(
                       *(HDC *)(gpDispInfo + 56LL),
                       a1,
                       0,
                       DWORD2(v13),
                       v12,
                       &v15,
                       0,
                       DWORD2(v13) * (((32 * DWORD1(v13)) >> 3) & 0xFFFFFFFC),
                       0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v4 = v15.bmiHeader.biWidth * v15.bmiHeader.biHeight;
      v5 = 0;
      v6 = v12;
      if ( v15.bmiHeader.biWidth * v15.bmiHeader.biHeight )
      {
        v7 = (_BYTE *)(v12 + 3);
        while ( !*v7 )
        {
          ++v5;
          v7 += 4;
          if ( v5 >= v4 )
            goto LABEL_12;
        }
        DIBitsInternal = 1;
      }
LABEL_12:
      if ( DIBitsInternal && v4 )
      {
        v8 = 0LL;
        v9 = v4;
        while ( 1 )
        {
          v10 = *(_DWORD *)(v8 + v6);
          v8 += 4LL;
          *(_BYTE *)(v8 + v6 - 2) = HIBYTE(v10) * BYTE2(v10) / 0xFFu;
          *(_BYTE *)(v8 + v12 - 3) = HIBYTE(v10) * BYTE1(v10) / 0xFFu;
          *(_BYTE *)(v8 + v12 - 4) = HIBYTE(v10) * (unsigned __int8)v10 / 0xFFu;
          if ( !--v9 )
            break;
          v6 = v12;
        }
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
