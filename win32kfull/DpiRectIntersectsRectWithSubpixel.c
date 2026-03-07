_BOOL8 __fastcall DpiRectIntersectsRectWithSubpixel(
        __m128i *a1,
        const float *a2,
        const struct tagWND *a3,
        __m128i *a4,
        float *a5,
        struct tagWND *a6)
{
  _BOOL8 result; // rax
  float v8; // [rsp+40h] [rbp-20h] BYREF
  float v9; // [rsp+44h] [rbp-1Ch] BYREF
  float v10; // [rsp+48h] [rbp-18h] BYREF
  float v11; // [rsp+4Ch] [rbp-14h] BYREF
  float v12; // [rsp+50h] [rbp-10h] BYREF
  float v13; // [rsp+54h] [rbp-Ch] BYREF
  float v14; // [rsp+58h] [rbp-8h] BYREF
  float v15; // [rsp+5Ch] [rbp-4h] BYREF

  v12 = 0.0;
  v14 = 0.0;
  v8 = 0.0;
  v10 = 0.0;
  v9 = 0.0;
  v11 = 0.0;
  v13 = 0.0;
  v15 = 0.0;
  GetDpiRectWithSubpixel(a1, a2, a6, a3, &v12, &v14, &v8, &v10);
  GetDpiRectWithSubpixel(a4, a5, a6, a6, &v9, &v11, &v13, &v15);
  result = 0LL;
  if ( (float)(v8 - 0.001) >= v9 && (float)(v10 - 0.001) >= v11 && v13 >= (float)(v12 + 0.001) )
    return v15 >= (float)(v14 + 0.001);
  return result;
}
