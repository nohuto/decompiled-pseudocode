/*
 * XREFs of BgpGxConvertRectangle @ 0x14038118C
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140381108 (BgpGxProcessQrCodeBitmap.c)
 *     BgConvertResources @ 0x140AEE198 (BgConvertResources.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x14038204C (BgpGxConvertRectangleEx.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxConvertRectangle(_QWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1;
  if ( *(_DWORD *)(v4 + 8) != (_DWORD)a2 )
  {
    v6 = 0LL;
    v3 = BgpGxConvertRectangleEx(v4, a2, &v6, 0LL);
    if ( v3 >= 0 )
    {
      BgpGxRectangleDestroy(*a1);
      *a1 = v6;
    }
  }
  return (unsigned int)v3;
}
