__int64 __fastcall CCubeMapRenderingEffect::CCubeMapRenderingEffect(
        __int64 a1,
        const struct CDrawListBitmap *a2,
        __int16 *a3,
        __int64 a4)
{
  __int16 v7; // ax
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCubeMapRenderingEffect::`vftable';
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 16), a2);
  v7 = *a3;
  *(_WORD *)(a1 + 41) = 257;
  *(_WORD *)(a1 + 40) = v7;
  *(_BYTE *)(a1 + 42) = *((_BYTE *)a3 + 2);
  result = a1;
  *(_QWORD *)(a1 + 48) = a4;
  return result;
}
