/*
 * XREFs of BgpGxReadRectangle @ 0x140AE94D8
 * Callers:
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x140381AB0 (BgpGetBitsPerPixel.c)
 *     GxpReadFrameBufferPixels @ 0x140AE9548 (GxpReadFrameBufferPixels.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x140AEAA94 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxReadRectangle(_QWORD *a1, __int64 a2)
{
  unsigned int BitsPerPixel; // eax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int FrameBufferPixels; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxRectangleCreate(v5, BitsPerPixel, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a2;
    v8 = v10;
    FrameBufferPixels = GxpReadFrameBufferPixels(v10, v7);
    if ( FrameBufferPixels < 0 )
    {
      if ( v8 )
        BgpGxRectangleDestroy(v8);
    }
    else
    {
      *a1 = v8;
    }
    return (unsigned int)FrameBufferPixels;
  }
  return result;
}
