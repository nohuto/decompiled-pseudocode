/*
 * XREFs of BgpGxDrawRectangle @ 0x1403817FC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14066F510 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEA110 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AEF720 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140AEF770 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x14038188C (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14038204C (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(_BYTE *a1, __int64 a2)
{
  _BYTE *v4; // rbx
  unsigned int BitsPerPixel; // eax
  _BYTE *v6; // rsi
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // r9
  _BYTE *v10; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  memset(v11, 0, 0x48uLL);
  v4 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v6 = 0LL;
  if ( *((_DWORD *)a1 + 2) != BitsPerPixel )
  {
    if ( (dword_140C0E3B0 & 0xC00) != 0 )
    {
      v9 = 1LL;
      v10 = v11;
    }
    else
    {
      v9 = 0LL;
    }
    result = BgpGxConvertRectangleEx(a1, BitsPerPixel, &v10, v9);
    if ( (int)result < 0 )
      return result;
    v4 = v10;
    a1 = v10;
    v6 = v10;
  }
  v7 = GxpWriteFrameBufferPixels(a1, a2);
  if ( v6 )
  {
    if ( v6 != v11 )
      BgpGxRectangleDestroy(v4);
  }
  return v7;
}
