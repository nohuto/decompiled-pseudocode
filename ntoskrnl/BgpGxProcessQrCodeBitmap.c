/*
 * XREFs of BgpGxProcessQrCodeBitmap @ 0x140381108
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14038118C (BgpGxConvertRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     BgpGxParseBitmap @ 0x140AE942C (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxProcessQrCodeBitmap(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  unsigned int BitsPerPixel; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v3 = BgpGxParseBitmap(a1, &v7);
  if ( v3 < 0 )
    goto LABEL_12;
  BitsPerPixel = BgpGetBitsPerPixel();
  v5 = v7;
  if ( *(_DWORD *)(v7 + 8) != BitsPerPixel )
  {
    v3 = BgpGxConvertRectangle(&v7, BitsPerPixel);
    if ( v3 >= 0 )
    {
      v5 = v7;
      goto LABEL_6;
    }
LABEL_12:
    v5 = v7;
    goto LABEL_7;
  }
LABEL_6:
  *a2 = v5;
LABEL_7:
  if ( v5 && v5 != *a2 )
    BgpGxRectangleDestroy();
  return (unsigned int)v3;
}
