__int64 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF
  float v8; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0.0;
  v8 = 0.0;
  v5 = 0;
  if ( bConvertDwordToFloat(a2, v7) && bConvertDwordToFloat(a3, &v8) )
    return (unsigned int)GreSetFontXform(a1, v7[0], v8);
  return v5;
}
