/*
 * XREFs of BgpGxDrawRectangle @ 0x14038444C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140384188 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x140671B60 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673134 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEE0D0 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140AF3720 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140AF3770 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140AF37A0 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x1403844DC (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140384700 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x140384C9C (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     BgpGxRectangleDestroy @ 0x140AEEA30 (BgpGxRectangleDestroy.c)
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
    if ( (dword_140C0E4B0 & 0xC00) != 0 )
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
