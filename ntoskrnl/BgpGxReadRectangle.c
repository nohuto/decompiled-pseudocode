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
